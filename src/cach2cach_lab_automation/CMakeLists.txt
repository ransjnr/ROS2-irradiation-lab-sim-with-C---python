cmake_minimum_required(VERSION 3.16)
project(cach2cach_lab_automation)

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_action REQUIRED)
find_package(std_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(pick_place_orchestrator REQUIRED)

add_executable(sample_mission_supervisor src/sample_mission_supervisor.cpp)
ament_target_dependencies(sample_mission_supervisor rclcpp std_msgs)

add_executable(approved_task_executor src/approved_task_executor.cpp)
ament_target_dependencies(approved_task_executor rclcpp rclcpp_action std_msgs geometry_msgs pick_place_orchestrator)

install(TARGETS sample_mission_supervisor approved_task_executor DESTINATION lib/${PROJECT_NAME})
install(PROGRAMS scripts/barcode_detector.py scripts/sample_pose_estimator.py scripts/control_panel.py DESTINATION lib/${PROJECT_NAME})
install(DIRECTORY config launch worlds media DESTINATION share/${PROJECT_NAME})

ament_package()
