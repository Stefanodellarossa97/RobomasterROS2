from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration

def generate_launch_description():
    urdf_file = LaunchConfiguration('urdf')

    return LaunchDescription([
        DeclareLaunchArgument(
            'urdf',
            default_value='/home/stefano/Robomaster_WS/src/robomaster_ros/robomaster_description/urdf/model.urdf',
            description='Percorso al file URDF generato da xacro'
        ),

        Node(
            package='robot_state_publisher',
            executable='robot_state_publisher',
            name='robot_state_publisher',
            output='screen',
            parameters=[{'robot_description': open(urdf_file.perform({})).read()}],
        ),

        Node(
            package='rviz2',
            executable='rviz2',
            name='rviz2',
            output='screen',
            arguments=['-d', '~/.rviz2/default.rviz']  # Puoi specificare un file .rviz configurato se vuoi
        ),
    ])

