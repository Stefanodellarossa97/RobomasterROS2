# ep_arm_teleop.py  (ROS2 / rclpy)
import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from sensor_msgs.msg import Joy
from geometry_msgs.msg import Vector3
from robomaster_msgs.action import GripperControl

class ArmTeleop(Node):
    def __init__(self):
        super().__init__('ep_arm_teleop')
        # --- ADATTA questi indici secondo /joy che hai già echoato ---
        self.AXIS_ARM_X = 1       # L-stick verticale -> avanti/indietro (mm per comando)
        self.AXIS_ARM_Y = 4       # R-stick verticale -> su/giù (mm per comando)
        self.BUTTON_GRIP_OPEN = 0 # esempio: pulsante X
        self.BUTTON_GRIP_CLOSE = 1# esempio: pulsante O
        # ---------------------------------------------------------
        self.deadzone = 0.12
        self.scale_mm = 20.0   # quanti mm inviare per unità di axis
        self.arm_pub = self.create_publisher(Vector3, 'cmd_arm', 10)
        self.gripper_client = ActionClient(self, GripperControl, 'gripper')
        self.create_subscription(Joy, 'joy', self.joy_cb, 10)
        self.prev_buttons = []

    def joy_cb(self, msg: Joy):
        # inizializza prev_buttons la prima volta
        if not self.prev_buttons:
            self.prev_buttons = [0]*len(msg.buttons)

        # arm: invia piccoli spostamenti relativi
        ax = msg.axes[self.AXIS_ARM_X] if len(msg.axes) > self.AXIS_ARM_X else 0.0
        ay = msg.axes[self.AXIS_ARM_Y] if len(msg.axes) > self.AXIS_ARM_Y else 0.0
        if abs(ax) > self.deadzone or abs(ay) > self.deadzone:
            vec = Vector3()
            vec.x = int(ax * self.scale_mm)   # mm avanti/indietro
            vec.y = int(ay * self.scale_mm)   # mm su/giù
            vec.z = 0.0
            self.arm_pub.publish(vec)

        # gripper: on-press send action
        if len(msg.buttons) > self.BUTTON_GRIP_OPEN and msg.buttons[self.BUTTON_GRIP_OPEN] and not self.prev_buttons[self.BUTTON_GRIP_OPEN]:
            self.send_gripper('OPEN', power=2.0)
        if len(msg.buttons) > self.BUTTON_GRIP_CLOSE and msg.buttons[self.BUTTON_GRIP_CLOSE] and not self.prev_buttons[self.BUTTON_GRIP_CLOSE]:
            self.send_gripper('CLOSE', power=2.0)

        self.prev_buttons = list(msg.buttons)

    def send_gripper(self, cmd: str, power: float = 2.0):
        # stato mappato sulle costanti dell'action (PAUSE/OPEN/CLOSE)
        STATE_MAP = {
            "PAUSE": GripperControl.Goal.PAUSE,
            "OPEN": GripperControl.Goal.OPEN,
            "CLOSE": GripperControl.Goal.CLOSE,
        }
        if cmd.upper() not in STATE_MAP:
            self.get_logger().error(f'Unknown gripper cmd: {cmd}')
            return
        goal = GripperControl.Goal()
        goal.target_state = STATE_MAP[cmd.upper()]
        goal.power = float(power)
        self.get_logger().info(f'Sending gripper {cmd} (power={power})')
        self.gripper_client.wait_for_server()
        self._send_goal_future = self.gripper_client.send_goal_async(goal)

def main(args=None):
    rclpy.init(args=args)
    node = ArmTeleop()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

