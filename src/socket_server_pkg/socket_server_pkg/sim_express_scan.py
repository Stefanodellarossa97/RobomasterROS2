import struct
import random
import rclpy
from sensor_msgs.msg import LaserScan
from math import radians, pi, isclose

class Packet:
    def __init__(self, start_angle_deg, end_angle_deg, cabins: list, S: int = 0):
        self.start_angle_deg = start_angle_deg
        self.end_angle_deg = end_angle_deg
        self.cabins = cabins
        self.S = S
        
        

class PacketParser:
    def __init__(self, logger):
        self.packet_list = []
        self.latest_packet = None
        self.current_scan = []
        self.logger = logger
        self.first = True
        self.angles = []
        self.ranges = []

    def process_packets(self):

        i = self.angles.index(min(self.angles))
        a = self.angles.index(max(self.angles))

        if self.first and isclose(max(self.angles) - min(self.angles), 360.0, abs_tol=2):
            self.logger().info(f"Primo scan completo")
            self.first = False
            self.ranges = self.ranges[i:]
            self.angles = self.angles[i:]
            self.packet_list = self.packet_list[-1:]
            return None
        
        elif not self.first and isclose(max(self.angles) - min(self.angles), 360.0, abs_tol=2):
            self.logger().info(f"Scan completo con {len(self.packet_list)-1} pacchetti")
            return self.build_laserscan()
        
        else:
            self.logger().info(f"Pacchetti ricevuti: {len(self.packet_list)}, i: {i}, self.angles: {self.angles[i]}, a: {a}, self.angles: {self.angles[a]}")
            return None
            

    def build_laserscan(self):
        self.logger().info(f"ranges len: {len(self.ranges)}, angle min: {min(self.angles)} (index: {self.angles.index(min(self.angles))}), angle max: {max(self.angles)} (index: {self.angles.index(max(self.angles))})")

        scan = LaserScan()
        scan.angle_min = radians(min(self.angles))
        scan.angle_max = radians(max(self.angles))
        scan.angle_increment = (2*pi) / 490
        scan.range_min = 0.1
        scan.range_max = 20.0

        self.logger().info(f"scan.angle_min: {scan.angle_min}, scan.angle_max: {scan.angle_max}, scan.angle_increment: {scan.angle_increment}")

        scan.ranges = self.ranges[:self.angles.index(max(self.angles))+1]

        if len(scan.ranges) > 490:
            self.logger().info(f"Attenzione: troppi punti nel LaserScan: {len(scan.ranges)}")
            scan.ranges = scan.ranges[:490]
            scan.angle_max = radians(max(self.angles))
            scan.angle_min = radians(min(self.angles))
            self.ranges = self.ranges[491:]
            self.angles = self.angles[491:]
            self.packet_list = self.packet_list[-1:] 

        elif len(scan.ranges) < 490:
            self.ranges = self.ranges[self.angles.index(max(self.angles))+1:]
            self.angles = self.angles[self.angles.index(max(self.angles))+1:]
            self.packet_list = self.packet_list[-1:]  # conserva solo l'ultimo pacchetto
            return None
        
        # elif len(scan.ranges) < 500:
        #     self.logger().info(f"Attenzione: pochi punti nel LaserScan: {len(scan.ranges)}")
        #     scan.ranges = self.ranges[:self.angles.index(max(self.angles))+1] + [0.0] * (500 - len(scan.ranges))
        

        else:
            self.ranges = self.ranges[self.angles.index(max(self.angles))+1:]
            self.angles = self.angles[self.angles.index(max(self.angles))+1:]
            self.packet_list = self.packet_list[-1:]  # conserva solo l'ultimo pacchetto
        
        return scan

    
    def angle_diff(self, a1, a2):
        if (a1 <= a2):
            return a2 - a1
        else:
            return 360 + a2 - a1

    def parse_packet(self, packet: bytes) -> LaserScan:
        if len(packet) < 2 + 2 + 40*2:
            print("Pacchetto troppo corto: ", len(packet))
            return -1

        sync1 = ( ( packet[0] >> 4 ) << 4 ) + ( packet[1] >> 4 )
        if sync1 != 0xA5:
            print("Invalid packet header:", hex(packet[0]), hex(packet[1]))
            return -2
        
        chk = hex((( packet[0] - 0xa0 ) << 4) + (packet[1] - 0x50))

        self.packet_list.append(
            Packet(
                start_angle_deg = ( packet[2] + ((packet[3] & 0x7F) << 8) ) / 64,
                end_angle_deg = None,
                cabins = [(packet[i] + ( packet[i+1] << 8)) / 1000 for i in range(4, 84, 2)],
                S = packet[3] >> 7
            )
        )

        if len(self.packet_list) > 1:
            self.packet_list[-2].end_angle_deg = self.packet_list[-1].start_angle_deg
            for i in range(40):
                angle = self.angle_diff(self.packet_list[-2].start_angle_deg, self.packet_list[-1].start_angle_deg) / 40 * i + self.packet_list[-2].start_angle_deg
                if angle >= 360:
                    angle -= 360

                self.angles.append(angle)

            self.ranges += self.packet_list[-2].cabins
            # self.logger().info(f"Increment: {self.angle_diff(self.packet_list[-2].start_angle_deg, self.packet_list[-1].start_angle_deg) / 40 }")
            # self.logger().info(f"self.angles: {self.angles}")
            # self.logger().info(f"Min angle: {min(self.angles)}, Max angle: {max(self.angles)}")
            return self.process_packets()