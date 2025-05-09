import rclpy
from rclpy.node import Node
from std_msgs.msg import Float64
import random  # Per simulare la lettura del sensore

class LaserEchoPublisher(Node):
    def __init__(self):
        super().__init__('laser_echo_publisher')
        self.publisher = self.create_publisher(Float64, 'laser_echo', 10)
        timer_period = 1.0  # Secondi
        self.timer = self.create_timer(timer_period, self.timer_callback)

    def timer_callback(self):
        msg = Float64()
        # Simuliamo una lettura del sensore (sostituisci con la lettura reale)
        msg.data = random.uniform(0.1, 5.0)  # Distanza casuale tra 0.1 e 5.0 metri
        self.publisher.publish(msg)
        self.get_logger().info(f'Published laser echo: {msg.data}')

def main(args=None):
    rclpy.init(args=args)
    laser_echo_publisher = LaserEchoPublisher()
    rclpy.spin(laser_echo_publisher)
    laser_echo_publisher.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()