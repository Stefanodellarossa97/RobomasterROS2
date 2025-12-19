import rclpy
from rclpy.node import Node
from sensor_msgs.msg import LaserScan
import math
import time


class FakeLidarPublisher(Node):
    def __init__(self):
        super().__init__('fake_lidar_publisher')
        self.pub = self.create_publisher(LaserScan, '/scan', 10)
        self.timer = self.create_timer(0.1, self.publish_scan)  # 10 Hz

        # Parametri simulazione cerchio
        self.num_points = 360
        self.radius = 2.0  # metri

    def publish_scan(self):
        scan = LaserScan()
        scan.header.stamp = self.get_clock().now().to_msg()
        scan.header.frame_id = "laser_frame"

        scan.angle_min = 0.0
        scan.angle_max = 2 * math.pi
        scan.angle_increment = (scan.angle_max - scan.angle_min) / self.num_points
        scan.time_increment = 0.0
        scan.scan_time = 0.1
        scan.range_min = 0.05
        scan.range_max = 10.0

        # Tutti i punti a distanza fissa (cerchio)
        scan.ranges = [self.radius] * self.num_points

        self.pub.publish(scan)
        self.get_logger().info("Scan simulato pubblicato")


def main(args=None):
    rclpy.init(args=args)
    node = FakeLidarPublisher()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.try_shutdown()


if __name__ == '__main__':
    main()
