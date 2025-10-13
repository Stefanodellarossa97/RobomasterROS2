from platform import node
import rclpy
from rclpy.node import Node
from robomaster_msgs.action import PlaySound
from rclpy.action import ActionClient

class PlaySoundNode(Node):
    def __init__(self):
        super().__init__('play_sound_node')
        self._client = ActionClient(self, PlaySound, '/play')
        self.get_logger().info('Waiting for action server...')
        self._client.wait_for_server()
        self.send_goal()

    def send_goal(self):
        goal_msg = PlaySound.Goal()
        goal_msg.file = '/home/stefano/Robomaster_WS/sound/Shake It Off.wav'
        goal_msg.sound_id = 0
        goal_msg.times = 1

        self._client.send_goal_async(goal_msg)
        self.get_logger().info('Goal sent!')

def main(args=None):
    try:    
        rclpy.init(args=args)
        node = PlaySoundNode()
        rclpy.spin(node)
        node.destroy_node()
    except KeyboardInterrupt:
        pass
    finally:
        if rclpy.ok():
            rclpy.try_shutdown()

if __name__ == '__main__':
    main()

