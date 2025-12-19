
import socket
from std_msgs.msg import String
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import LaserScan
import os
import errno
from .sim_express_scan import PacketParser

class SocketServer(Node):
    def __init__(self):
        super().__init__('socket_server')
        self.qos_profile = rclpy.qos.QoSProfile(
            depth=100,
            durability=rclpy.qos.QoSDurabilityPolicy.VOLATILE,
            reliability=rclpy.qos.QoSReliabilityPolicy.BEST_EFFORT,
            history=rclpy.qos.QoSHistoryPolicy.KEEP_LAST,
        )

        # Publisher
        self.lidar_pub = self.create_publisher(LaserScan, '/scan', 10)
        self.pf_pub = self.create_publisher(String, 'particle_filter', self.qos_profile)

        # Socket setup
        self.HOST = ''
        self.PORT = 50008
        self.sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        self.sock.bind((self.HOST, self.PORT))
        self.sock.listen(1)
        self.conn = None
        self.addr = None
        self.get_logger().info(f"Server avviato su porta {self.PORT}")

        self.timer = self.create_timer(0.1, self.check_connection)

        self.parser = PacketParser(self.get_logger)

        # aggiungi qui
        self.pty_path = '/dev/ttyUSB0'
        self.pty_fd = None
        # prova ad aprirlo se già esiste (non bloccante)
        try:
            if os.path.exists(self.pty_path):
                self.pty_fd = os.open(self.pty_path, os.O_RDWR | os.O_NONBLOCK)
                self.get_logger().info(f"Opened PTY {self.pty_path} (fd={self.pty_fd})")
        except OSError as e:
            self.get_logger().warning(f"Impossibile aprire {self.pty_path}: {e}")




    def publish_lidar(self, data):
        scan = self.parser.parse_packet(data)

        if type(scan) == int:
            if scan == -1:
                self.get_logger().warning("Pacchetto troppo corto")
            elif scan == -2:
                self.get_logger().warning("Header non valido")
        elif type(scan) == LaserScan:
            scan.header.frame_id = "base_link"
            scan.header.stamp = self.get_clock().now().to_msg()
            self.get_logger().info(f"Pubblicato LaserScan con {scan.angle_min} raggi")
            self.lidar_pub.publish(scan)
        elif scan is None:
            pass
        else:
            self.get_logger().warning(f"Scan type: {type(scan)}")

    def check_connection(self):
        # accept connection (tuo codice esistente)
        if self.conn is None:
            try:
                self.conn, self.addr = self.sock.accept()
                self.conn.setblocking(False)  # socket non bloccante
                self.get_logger().info(f"Connesso da {self.addr}")
            except BlockingIOError:
                pass
        else:
            # 1) leggere dati dalla socket (host -> VM) e scriverli sul PTY
            try:
                data = self.conn.recv(4096)
                if data:
                    # pubblicazione esistente su ROS (se vuoi)
                    # try:
                    #     # se il parser produce LaserScan dal pacchetto:
                    #     scan = self.parser.parse_packet(data)  # esempio, adatta al tuo parser
                    #     if scan:
                    #         self.lidar_pub.publish(scan)
                    # except Exception:
                    #     pass

                    # scrivi sul PTY (se aperto), non aprire file ogni volta
                    if self.pty_fd is None:
                        # prova ad aprire il PTY ora
                        try:
                            if os.path.exists(self.pty_path):
                                self.pty_fd = os.open(self.pty_path, os.O_RDWR | os.O_NONBLOCK)
                                self.get_logger().info(f"Opened PTY {self.pty_path} (fd={self.pty_fd})")
                        except OSError as e:
                            self.get_logger().debug(f"PTY non disponibile ancora: {e}")

                    if self.pty_fd is not None:
                        try:
                            os.write(self.pty_fd, data)
                        except OSError as e:
                            if e.errno != errno.EAGAIN:
                                self.get_logger().warning(f"Errore write PTY: {e}")
                else:
                    # connessione chiusa dal peer
                    self.get_logger().info("Connessione chiusa dal client")
                    self.conn.close()
                    self.conn = None
            except BlockingIOError:
                pass
            except ConnectionResetError:
                self.get_logger().info("Connessione reset dal peer")
                if self.conn:
                    self.conn.close()
                self.conn = None

            # 2) leggere dati dal PTY (VM -> host) e inviarli sulla socket
            if self.pty_fd is not None and self.conn is not None:
                try:
                    # prova a leggere fino a 4096 byte senza bloccare
                    pty_data = os.read(self.pty_fd, 4096)
                    if pty_data:
                        try:
                            self.conn.sendall(pty_data)
                        except BrokenPipeError:
                            self.get_logger().warning("Broken pipe when sending to socket")
                    # se pty_data vuoto non fa nulla
                except OSError as e:
                    if e.errno != errno.EAGAIN:
                        self.get_logger().warning(f"Errore read PTY: {e}")

def main(args=None):

    rclpy.init(args=args)
    server = SocketServer()
    try:
        rclpy.spin(server)
    except KeyboardInterrupt:
        server.get_logger().info("Chiusura server...")
    finally:
        if server.conn:
            server.conn.close()
        server.sock.close()
        server.destroy_node()
        rclpy.try_shutdown()


if __name__ == '__main__':
    main()
