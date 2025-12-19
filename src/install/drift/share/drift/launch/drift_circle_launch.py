from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='drift',
            executable='drift_circle_node',
            name='drift_circle_node',
            output='screen'
        ),
        Node(
            package='drift',
            executable='play_sound_node',
            name='play_sound_node',
            output='screen'
        )
    ])


