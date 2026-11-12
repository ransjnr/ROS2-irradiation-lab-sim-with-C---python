#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/string.hpp>

#include <string>

class SampleMissionSupervisor : public rclcpp::Node
{
public:
  SampleMissionSupervisor() : Node("sample_mission_supervisor")
  {
    scan_sub_ = create_subscription<std_msgs::msg::String>(
      "/lab/sample_scan", 10,
      [this](const std_msgs::msg::String::SharedPtr message) { on_scan(*message); });
    state_pub_ = create_publisher<std_msgs::msg::String>("/lab/mission_state", 10);
    task_pub_ = create_publisher<std_msgs::msg::String>("/lab/task_request", 10);
    publish_state("READY: scan a recognized barcode, then press Start in the control panel");
  }

private:
  void on_scan(const std_msgs::msg::String & message)
  {
    const bool recognized = message.data.find("\"recognized\": true") != std::string::npos;
    if (!recognized) {
      publish_state("REJECTED: unknown sample; operator review required");
      RCLCPP_WARN(get_logger(), "Unknown sample scan received; no robot command issued.");
      return;
    }
    task_pub_->publish(message);
    publish_state("IDENTIFIED: barcode accepted; select the matching ID and press Start mission");
    RCLCPP_INFO(get_logger(), "Recognized barcode received and task request published. Motion remains gated by Start.");
  }

  void publish_state(const std::string & state)
  {
    std_msgs::msg::String message;
    message.data = state;
    state_pub_->publish(message);
  }

  rclcpp::Subscription<std_msgs::msg::String>::SharedPtr scan_sub_;
  rclcpp::Publisher<std_msgs::msg::String>::SharedPtr state_pub_, task_pub_;
};

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<SampleMissionSupervisor>());
  rclcpp::shutdown();
  return 0;
}
