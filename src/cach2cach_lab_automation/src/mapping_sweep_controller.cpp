// Simulation-only coverage sweep for collecting SLAM scans without teleoperation.
// It deliberately uses low speeds; ultrasonic_safety_gate remains the final
// command authority before Gazebo. Do not use this as a hardware safety system.
#include <chrono>
#include <functional>
#include <memory>

#include "geometry_msgs/msg/twist.hpp"
#include "rclcpp/rclcpp.hpp"

using namespace std::chrono_literals;

class MappingSweepController : public rclcpp::Node
{
public:
  MappingSweepController() : Node("mapping_sweep_controller")
  {
    declare_parameter<bool>("enabled", false);
    declare_parameter<double>("forward_seconds", 5.0);
    declare_parameter<double>("turn_seconds", 3.8);
    publisher_ = create_publisher<geometry_msgs::msg::Twist>("/cmd_vel", 10);
    enabled_ = get_parameter("enabled").as_bool();
    state_started_ = now();
    timer_ = create_wall_timer(100ms, std::bind(&MappingSweepController::tick, this));
    RCLCPP_INFO(get_logger(), "Mapping sweep %s", enabled_ ? "enabled (simulation only)" : "disabled");
  }

private:
  void tick()
  {
    geometry_msgs::msg::Twist command;
    if (!enabled_ || segment_ >= 8) {
      publisher_->publish(command);
      return;
    }
    const bool driving = segment_ % 2 == 0;
    const double duration = driving ? get_parameter("forward_seconds").as_double() :
      get_parameter("turn_seconds").as_double();
    if ((now() - state_started_).seconds() >= duration) {
      ++segment_;
      state_started_ = now();
      publisher_->publish(command);
      RCLCPP_INFO(get_logger(), "Mapping sweep segment %d/8", segment_);
      return;
    }
    if (driving) {
      command.linear.x = 0.12;
    } else {
      command.angular.z = 0.42;  // ~90 degrees at 0.42 rad/s for 3.8 seconds
    }
    publisher_->publish(command);
  }

  bool enabled_{false};
  int segment_{0};
  rclcpp::Time state_started_{0, 0, RCL_ROS_TIME};
  rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr publisher_;
  rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<MappingSweepController>());
  rclcpp::shutdown();
  return 0;
}
