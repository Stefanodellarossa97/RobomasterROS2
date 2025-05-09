import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from sensor_msgs.msg import LaserScan, LaserEcho
class CameraRepublisher(Node):
    def __init__(self):
        super().__init__('camera_republisher')

        # Subscriber al topic originale del RoboMaster
        # self.subscription = self.create_subscription(
        #     Image,
        #     '/camera/image_color',
        #     self.listener_callback,
        #     10)
        self.subscription = self.create_subscription(
            LaserEcho,
            '/sensor_adapter',
            self.listener_callback,
            10)
        # # Publisher sul tuo topic personalizzato
        # self.publisher = self.create_publisher(Image, '/epcore/camera/image_raw', 10)
        self.publisher = self.create_publisher(LaserEcho, '/laser_echo', 10)
        # self.get_logger().info('CameraRepublisher avviato. Sottoscritto a /camera/image_color e pubblica su /epcore/camera/image_raw')
        self.get_logger().info('CameraRepublisher avviato. Sottoscritto a /sensor_adapter e pubblica su /laser_echo')

    def listener_callback(self, msg):
        self.publisher.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    node = CameraRepublisher()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

