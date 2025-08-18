import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Range, LaserScan

class RangeToLaserScan(Node):
    def __init__(self):
        super().__init__('IR_to_LaserScan')
        self.range_sub = self.create_subscription(Range, '/range_0', self.range_callback, 10)
        self.scan_pub = self.create_publisher(LaserScan, '/scan_fake', 10)

    def range_callback(self, msg: Range):
        scan = LaserScan()
        scan.header = msg.header
        scan.angle_min = -0.175
        scan.angle_max = 0.175
        scan.angle_increment = 0.001
        scan.time_increment = 0.0
        scan.scan_time = 0.1
        scan.range_min = msg.min_range
        scan.range_max = msg.max_range

        # Simula una misura centrale
        scan.ranges = [float('inf'), msg.range, float('inf')]
        scan.intensities = []

        self.scan_pub.publish(scan)

def main(args=None):
    rclpy.init(args=args)
    node = RangeToLaserScan()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
