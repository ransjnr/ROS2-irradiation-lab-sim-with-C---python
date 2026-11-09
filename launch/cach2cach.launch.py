from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import PathJoinSubstitution
from launch_ros.substitutions import FindPackageShare
from launch_ros.actions import Node

def generate_launch_description():

    world_file = "/root/cach2cach_ws/worlds/cach2cach_lab.sdf"

    # Start Gazebo with our custom laboratory world and UR5e
    simulation = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            PathJoinSubstitution([
                FindPackageShare("ur_simulation_gz"),
                "launch",
                "ur_sim_control.launch.py",
            ])
        ),
        launch_arguments={
            "ur_type": "ur5e",
            "world_file": world_file,
            "description_file": "/root/cach2cach_ws/src/cach2cach_gripper/urdf/cach2cach_ur5e.urdf.xacro",
            "controllers_file": "/root/cach2cach_ws/src/cach2cach_gripper/config/cach2cach_controllers.yaml",
            "launch_rviz": "false",
            "gazebo_gui": "true",
        }.items(),
    )

    # Start MoveIt 2 and RViz without launching Gazebo again
    moveit = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            PathJoinSubstitution([
                FindPackageShare("ur_moveit_config"),
                "launch",
                "ur_moveit.launch.py",
            ])
        ),
        launch_arguments={
            "ur_type": "ur5e",
            "use_sim_time": "true",
            "launch_rviz": "true",
        }.items(),
    )
    
    gripper_controller = Node(
	package="controller_manager",
	executable="spawner",
	arguments=[
		"cach2cach_gripper_controller",
		"--controller-manager",
		"/controller_manager",
	],
	output="screen",
)

    return LaunchDescription([
        simulation,
        moveit,
	gripper_controller,
    ])
