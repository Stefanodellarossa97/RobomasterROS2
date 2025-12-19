import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist

class DriftCircle(Node):
    def __init__(self):
        super().__init__('drift_circle_node')
        self.pub = self.create_publisher(Twist, '/cmd_vel', 10)
        self.timer = self.create_timer(0.1, self.publish_twist)  # 10 Hz
        self.counter = 0
        self.active = True
        self.subscription_count = self.pub.get_subscription_count()

    def publish_twist(self):
        msg = Twist()
        msg.linear.x = 0.0
        msg.linear.y = 1.0
        msg.angular.z = -2.0

        # if self.pub.get_subscription_count() > self.subscription_count:
            # Nessun subscriber → continuo a mandare
        self.pub.publish(msg)
        self.get_logger().info("Pubblico in attesa che il robot si colleghi...")
        # else:
        #     # Subscriber presente → mando ancora un po'
        #     if self.counter < 10:  # ~1 secondo
        #         self.pub.publish(msg)
        #         self.get_logger().info("Robot collegato, mando comandi...")
        #         self.counter += 1
        #     else:
        #         self.get_logger().info("Stop pubblicazione (robot dovrebbe muoversi).")
        #         self.timer.cancel()  # interrompo il timer
    
    def stop(self):
        # Assicuro che il robot si fermi
        stop_msg = Twist()
        stop_msg.linear.x = 0.0
        stop_msg.linear.y = 0.0
        stop_msg.angular.z = 0.0
        self.pub.publish(stop_msg)
        self.get_logger().info('Pubblicato messaggio di stop')
        raise KeyboardInterrupt
    

def main(args=None):
    rclpy.init(args=args)
    node = DriftCircle()

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        node.get_logger().info('Keyboard Interrupt - Stopping robot')
        node.stop()
    finally: 
        node.destroy_node()
        rclpy.try_shutdown()


if __name__ == '__main__':
    main()