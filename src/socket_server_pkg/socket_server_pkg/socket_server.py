# # Echo server program
# import socket

# HOST = ''                 # Symbolic name meaning all available interfaces
# PORT = 50008              # Arbitrary non-privileged port
# with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
#     s.bind((HOST, PORT))
#     s.listen(1)
#     conn, addr = s.accept()
#     with conn:
#         print('Connected by', addr)
#         while True:
#             data = conn.recv(1024)
#             #if not data: break
#             #conn.sendall(data)
#             if data: print('Received', repr(data))
import socket
from std_msgs.msg import String
import rclpy
from rclpy.node import Node

class LiDARPublisher(Node):
    def __init__(self):
        self.qos_profile = rclpy.qos.QoSProfile(
                                                depth=100,
                                                durability=rclpy.qos.QoSDurabilityPolicy.VOLATILE,
                                                reliability=rclpy.qos.QoSReliabilityPolicy.BEST_EFFORT,
                                                history=rclpy.qos.QoSHistoryPolicy.KEEP_LAST,
                                                )
        super().__init__('lidar_publisher')
        self.publisher = self.create_publisher(String, 'lidar_scan_data', self.qos_profile)

    def publish(self, data):
        self.publisher.publish(data)

class ParticleFilterPublisher(Node):
    def __init__(self):
        self.qos_profile = rclpy.qos.QoSProfile(
                                                depth=100,
                                                durability=rclpy.qos.QoSDurabilityPolicy.VOLATILE,
                                                reliability=rclpy.qos.QoSReliabilityPolicy.BEST_EFFORT,
                                                history=rclpy.qos.QoSHistoryPolicy.KEEP_LAST,
                                                )
        super().__init__('particle_filter_publisher')
        self.publisher = self.create_publisher(String, 'particle_filter', self.qos_profile)
    
    def publish(self, data):
        self.publisher.publish(data)

class SocketServer(Node):
    def __init__(self, lidar_publisher, particle_filter_publisher):
        super().__init__('socket_server')
        self.HOST = ''   # tutte le interfacce disponibili
        self.PORT = 50008

        # Crea socket
        self.sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        self.sock.bind((self.HOST, self.PORT))
        self.sock.listen(1)

        self.get_logger().info(f"Server avviato su porta {self.PORT}, in attesa di connessioni...")

        # Accettiamo connessione (bloccante, quindi metto in un timer)
        self.timer = self.create_timer(0.5, self.check_connection)
        self.conn = None
        self.addr = None

        self.lidar_publisher = lidar_publisher
        self.particle_filter_publisher = particle_filter_publisher

    def parse(self, data):
        # Placeholder implementation
        pass
        

    def check_connection(self):
        if self.conn is None:
            try:
                self.conn, self.addr = self.sock.accept()
                self.get_logger().info(f"Connesso da {self.addr}")
            except BlockingIOError:
                pass
        else:
            try:
                data = self.conn.recv(1024)
                if data:
                    self.get_logger().info('Received')
                    msg = "Ciao!".encode('utf-8')
                    self.lidar_publisher.publish(msg)
                    self.particle_filter_publisher.publish(msg)
                    # se vuoi, puoi ancora fare il parsing dei dati
                    self.parse(data)

            except BlockingIOError:
                pass
    
    def close_connection(self):
        if self.conn:
            self.conn.close()
            self.conn = None
            self.addr = None
            self.get_logger().info("Connessione chiusa.")


def main(args=None):

    try:
        rclpy.init(args=args)
        lidar_publisher = LiDARPublisher()
        particle_filter_publisher = ParticleFilterPublisher()
        server = SocketServer(lidar_publisher, particle_filter_publisher)
        rclpy.spin(server)
    except KeyboardInterrupt:
        if server.conn:
            server.conn.close()
        server.sock.close()
        server.destroy_node()
    finally:
        if rclpy.ok():
            rclpy.try_shutdown()


if __name__ == '__main__':
    main()
