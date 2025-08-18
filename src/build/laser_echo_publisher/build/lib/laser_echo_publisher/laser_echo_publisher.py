import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from robomaster import robot
from random import randint


class LaserEchoPublisher(Node):
    def __init__(self):
        self.qos_profile = rclpy.qos.QoSProfile(
                                                depth=100,
                                                durability=rclpy.qos.QoSDurabilityPolicy.VOLATILE,
                                                reliability=rclpy.qos.QoSReliabilityPolicy.BEST_EFFORT,
                                                history=rclpy.qos.QoSHistoryPolicy.KEEP_LAST,
                                                )
        super().__init__('laser_echo_publisher')
        self.publisher = self.create_publisher(String, 'laser_echo', self.qos_profile)
        self.timer_period = 1.0/2  # Secondi
        # self.timer = self.create_timer(self.timer_period, self.timer_callback)
        self.ep_robot = robot.Robot()
        self.ep_robot.initialize(conn_type="sta")
        # self.ep_robot.run()
        self.ep_sensor = self.ep_robot.sensor
        self.distance = "0" # Inizializza la distanza a zero

        # self.ep_sensor.sub_distance(freq=2, callback=self.sub_data_handler)

    def sub_data_handler(self, sub_info):
        d = sub_info
        self.distance = "tof1:{}".format(d[0])
        print("Pippo")

    def timer_callback(self, sub_info):
        try:
            # Leggi la distanza misurata dal sensore laser
            d = sub_info
            self.distance = "tof1:{}".format(d[0])
            msg = String()
            msg.data = self.distance
            self.publisher.publish(msg)
            self.get_logger().info(f'Published laser echo: {msg.data}')
        except Exception as e:
            self.get_logger().error(f'Error reading laser distance: {e}')

def main(args=None):
    try:
        rclpy.init(args=args)
        laser_echo_publisher = LaserEchoPublisher()
        laser_echo_publisher.ep_sensor.sub_distance(freq=2, callback=laser_echo_publisher.timer_callback)
        rclpy.spin(laser_echo_publisher)
    except KeyboardInterrupt:
        laser_echo_publisher.ep_sensor.unsub_distance()
        laser_echo_publisher.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()