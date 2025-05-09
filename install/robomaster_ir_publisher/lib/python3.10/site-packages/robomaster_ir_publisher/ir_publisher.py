# robomaster_ir_publisher/ir_publisher.py
import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32

from robomaster import robot

class IRPublisher(Node):
    def __init__(self):
        super().__init__('ir_publisher')
        self.publisher_ = self.create_publisher(Float32, '/laser_echo', 10)

        self.timer = self.create_timer(0.1, self.timer_callback)  # 10 Hz

        # Initialize RoboMaster EP
        self.robot = robot.Robot()
        self.robot.initialize(conn_type="sta")  # Or "ap" if directly connected
        self.ir_sensor = self.robot.sensor
        self.ir_sensor.sub_infrared(self.ir_callback)

        self.ir_distance = 0.0  # Store last reading

    def ir_callback(self, ir_info):
        self.ir_distance = ir_info.distance  # This might be 'ir_info[0]' depending on SDK version

    def timer_callback(self):
        msg = Float32()
        msg.data = self.ir_distance
        self.publisher_.publish(msg)
        self.get_logger().info(f'Published IR distance: {msg.data:.2f} cm')

    def destroy_node(self):
        self.ir_sensor.unsub_infrared()
        self.robot.close()
        super().destroy_node()

def main(args=None):
    rclpy.init(args=args)
    node = IRPublisher()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()
