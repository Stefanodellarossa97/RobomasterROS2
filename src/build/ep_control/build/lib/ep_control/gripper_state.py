import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Joy
from rclpy.action import ActionClient
from robomaster_msgs.action import GripperControl
from rclpy.duration import Duration

class JoyToGripperAction(Node):
    def __init__(self):
        super().__init__('joy_to_gripper_action')
        # Sottoscrizione al joystick
        self.subscription = self.create_subscription(
            Joy,
            '/joy',
            self.joy_callback,
            10
        )
        # Client dell'action server
        self._action_client = ActionClient(self, GripperControl, 'gripper')

    def joy_callback(self, msg: Joy):
    # esempio: bottone 0 = apri, bottone 1 = chiudi
        if msg.buttons[0] == 1:
            self.send_gripper_goal(1)  # OPEN
        elif msg.buttons[1] == 1:
            self.send_gripper_goal(2)  # CLOSE
        #else:
            # self.send_gripper_goal(0)  # PAUSE

    def send_gripper_goal(self, state):
        if not self._action_client.wait_for_server(timeout_sec=1.0):
            self.get_logger().warn('Action server gripper non disponibile!')
            return

        goal_msg = GripperControl.Goal()
        goal_msg.target_state = state
        goal_msg.power = 0.5

        self._action_client.send_goal_async(goal_msg)

        if state == 1:
            self.get_logger().info("Comando Gripper: OPEN")
        elif state == 2:
            self.get_logger().info("Comando Gripper: CLOSE")
        else:
            self.get_logger().info("Comando Gripper: PAUSE")


def main(args=None):   
    try:
        rclpy.init(args=args)
        node = JoyToGripperAction()
        rclpy.spin(node)
        node.destroy_node()
    except KeyboardInterrupt:
        pass
    finally:
        if rclpy.ok():
            rclpy.try_shutdown()

if __name__ == '__main__':
    main()

