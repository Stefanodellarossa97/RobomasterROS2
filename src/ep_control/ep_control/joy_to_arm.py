import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Joy
from geometry_msgs.msg import PointStamped
from rclpy.action import ActionClient
from robomaster_msgs.action import MoveArm

class JoyToArm(Node):
    def __init__(self):
        super().__init__('joy_to_arm')

        # Subscriber al joypad
        self.create_subscription(Joy, '/joy', self.joy_callback, 10)

        # Subscriber alla posizione reale del braccio
        self.create_subscription(PointStamped, '/arm_position', self.arm_callback, 10)

        self._action_client = ActionClient(self, MoveArm, 'move_arm')

        # Posizione attuale letta dal topic
        self.pos_x = 0.0
        self.pos_z = 0.0

        # step di movimento
        self.step = 0.01  

        # ultimo input dal joy
        self.input_dx = 0.0
        self.input_dz = 0.0

        # timer per movimento continuo
        self.timer_period = 0.1  # secondi
        self.create_timer(self.timer_period, self.process_input)

    def arm_callback(self, msg: PointStamped):
        """Aggiorna posizione attuale dal topic /arm_position"""
        self.pos_x = msg.point.x
        self.pos_z = msg.point.z

    def joy_callback(self, msg: Joy):
        """Salva l’input del D-pad"""
        dx = 0.0
        dz = 0.0

        if msg.axes[6] == 1.0:   # dpad destra
            dx = self.step
        elif msg.axes[6] == -1.0:  # dpad sinistra
            dx = -self.step

        if msg.axes[7] == 1.0:   # dpad su
            dz = self.step
        elif msg.axes[7] == -1.0:  # dpad giù
            dz = -self.step

        self.input_dx = dx
        self.input_dz = dz

    def process_input(self):
        """Invia comandi periodici se c’è input attivo"""
        if self.input_dx == 0.0 and self.input_dz == 0.0:
            return

        new_x = self.pos_x + self.input_dx
        new_z = self.pos_z + self.input_dz

        # limiti dinamici
        if new_x < 0.181:   # braccio "indietro"
            z_min = 0.051
        else:               # braccio "avanti"
            z_min = -0.07
        z_max = 0.148

        # clamp verticale
        new_z = max(z_min, min(z_max, new_z))

        # aggiorna delta dopo i limiti
        dx = new_x - self.pos_x
        dz = new_z - self.pos_z

        if abs(dx) > 1e-6 or abs(dz) > 1e-6:
            self.send_arm_goal(dx, dz)

    def send_arm_goal(self, dx, dz):
        if not self._action_client.wait_for_server(timeout_sec=0.5):
            self.get_logger().warn('Action server move_arm non disponibile!')
            return

        goal_msg = MoveArm.Goal()
        goal_msg.x = dx
        goal_msg.z = dz
        goal_msg.relative = True  

        self._action_client.send_goal_async(goal_msg)
        self.get_logger().info(
            f'Muovo braccio: Δx={dx:.3f}, Δz={dz:.3f} (pos attuale x={self.pos_x:.3f}, z={self.pos_z:.3f})'
        )

def main(args=None):   
    try:
        rclpy.init(args=args)
        node = JoyToArm()
        rclpy.spin(node)
        node.destroy_node()
    except KeyboardInterrupt:
        pass
    finally:
        if rclpy.ok():
            rclpy.try_shutdown()

if __name__ == '__main__':
    main()
