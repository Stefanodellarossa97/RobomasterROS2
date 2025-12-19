# sim_scan_ros2.py
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import LaserScan
import math

# importiamo dal tuo file sim_express_scan.py
from .sim_express_scan import generate_express_scan_packet, parse_express_scan_packet

class FakeLidarPublisher(Node):
    def __init__(self):
        super().__init__('fake_lidar_publisher')
        self.publisher_ = self.create_publisher(LaserScan, '/scan', 10)
        self.timer = self.create_timer(0.5, self.timer_callback)  # ogni 0.5 secondi
        self.start_angle = 0.0

    def timer_callback(self):
        # 1. genera pacchetto Express Scan finto
        pkt = generate_express_scan_packet(start_angle_deg=self.start_angle)

        # 2. parsalo in (angolo, distanza)
        points = parse_express_scan_packet(pkt, next_start_angle_deg=self.start_angle + 10.0)

        # 3. costruisci LaserScan
        scan = LaserScan()
        scan.header.stamp = self.get_clock().now().to_msg()
        scan.header.frame_id = "camera_link"

        scan.angle_min = (min(a for a, _ in points))
        scan.angle_max = (max(a for a, _ in points))
        scan.angle_increment = (scan.angle_max - scan.angle_min) / (len(points)-1)

        scan.range_min = 0.1
        scan.range_max = 10.0

        scan.ranges = [d for _, d in points]   # distanze in metri
        scan.intensities = [1.0]*len(points)   # per ora tutte uno

        # 4. pubblica su ROS2
        self.publisher_.publish(scan)
        self.get_logger().info(f"Pubblicato LaserScan con {len(scan.ranges)} raggi")

        # aggiorna angolo di partenza per la prossima iterazione
        self.start_angle = (self.start_angle + 10.0) % 360.0


def main(args=None):
    try:    
        rclpy.init(args=args)
        node = FakeLidarPublisher()
        rclpy.spin(node)
        node.destroy_node()
    except KeyboardInterrupt:
        pass
    finally:
        if rclpy.ok():
            rclpy.try_shutdown()


if __name__ == '__main__':
    main()

