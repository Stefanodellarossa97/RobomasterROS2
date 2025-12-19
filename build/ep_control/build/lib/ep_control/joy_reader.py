import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Joy

class JoyReader(Node):
    def __init__(self):
        super().__init__('joy_reader')
        self.subscription = self.create_subscription(
            Joy,
            '/joy',
            self.listener_callback,
            10
        )
        self.current_axes = []
        self.current_buttons = []

    def listener_callback(self, msg):
        self.get_logger().info(f'Assi: {msg.axes}, Bottoni: {msg.buttons}')
        self.current_axes = msg.axes
        self.current_buttons = msg.buttons

def main(args=None):
    rclpy.init(args=args)
    node = JoyReader()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()

