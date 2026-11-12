#include <memory>
#include <optional>
#include <regex>
#include <string>

#include <geometry_msgs/msg/pose_stamped.hpp>
#include <pick_place_orchestrator/action/pick_place_mission.hpp>
#include <rclcpp/rclcpp.hpp>
#include <rclcpp_action/rclcpp_action.hpp>
#include <std_msgs/msg/string.hpp>

using Mission = pick_place_orchestrator::action::PickPlaceMission;

class ApprovedTaskExecutor : public rclcpp::Node
{
public:
  ApprovedTaskExecutor() : Node("approved_task_executor")
  {
    declare_parameter("enable_motion", false);
    declare_parameter("autonomous_start", false);
    declare_parameter("minimum_approval_token", std::string("APPROVE:"));
    task_sub_ = create_subscription<std_msgs::msg::String>(
      "/lab/task_request", 10, [this](const std_msgs::msg::String::SharedPtr task) {
        pending_task_ = task->data;
        const auto id = json_string(*pending_task_, "id");
        if (get_parameter("autonomous_start").as_bool() && id) {
          publish("AUTONOMOUS: barcode " + *id + " recognized; starting mission");
          execute(*id);
        }
      });
    approval_sub_ = create_subscription<std_msgs::msg::String>(
      "/lab/task_approval", 10, [this](const std_msgs::msg::String::SharedPtr approval) { approve(*approval); });
    state_pub_ = create_publisher<std_msgs::msg::String>("/lab/execution_state", 10);
    client_ = rclcpp_action::create_client<Mission>(this, "pick_place_mission");
    publish("IDLE: awaiting recognized barcode task");
  }

private:
  static std::optional<std::string> json_string(const std::string & value, const std::string & key)
  {
    std::smatch match;
    const std::regex pattern("\\\"" + key + "\\\"\\s*:\\s*\\\"([^\\\"]+)\\\"");
    return std::regex_search(value, match, pattern) ? std::optional<std::string>(match[1]) : std::nullopt;
  }

  void approve(const std_msgs::msg::String & approval)
  {
    if (!pending_task_) { publish("REJECTED: no pending task"); return; }
    const auto id = json_string(*pending_task_, "id");
    const std::string expected = get_parameter("minimum_approval_token").as_string() + id.value_or("");
    if (!id || approval.data != expected) { publish("REJECTED: approval token does not match pending sample"); return; }
    if (!get_parameter("enable_motion").as_bool()) { publish("APPROVED: dry-run only; enable_motion is false"); return; }
    execute(*id);
  }

  void execute(const std::string & id)
  {
    if (!client_->wait_for_action_server(std::chrono::seconds(5))) {
      publish("BLOCKED: pick_place_mission action server unavailable"); return;
    }
    Mission::Goal goal;
    goal.pick_pose.header.frame_id = "map";
    goal.place_pose.header.frame_id = "map";
    goal.retreat_pose.header.frame_id = "map";
    goal.pick_pose.pose.orientation.w = goal.place_pose.pose.orientation.w = goal.retreat_pose.pose.orientation.w = 1.0;
    // Fixed poses are for the digital lab only.  They correspond to the
    // top-labelled containers in the 3 × 3 source tray and the grid slots.
    struct Assignment { const char * id; double pick_x, pick_y, place_x, place_y; };
    const Assignment assignments[] = {
      {"101", -5.90, 3.80, -3.20, 3.93}, {"102", -5.45, 3.80, -2.07, 3.93},
      {"103", -5.00, 3.80, -0.93, 3.93}, {"104", -5.90, 4.25, 0.20, 3.93},
      {"105", -5.45, 4.25, 1.33, 3.93}, {"106", -5.00, 4.25, 2.47, 3.93},
      {"107", -5.90, 4.70, 3.60, 3.93}, {"108", -5.45, 4.70, 4.73, 3.93},
      {"109", -5.00, 4.70, 5.87, 3.93},
    };
    const Assignment * assignment = nullptr;
    for (const auto & candidate : assignments) {
      if (id == candidate.id) { assignment = &candidate; break; }
    }
    if (!assignment) { publish("REJECTED: no calibrated simulation assignment for " + id); return; }
    goal.pick_pose.pose.position.x = assignment->pick_x;
    goal.pick_pose.pose.position.y = assignment->pick_y;
    goal.place_pose.pose.position.x = assignment->place_x;
    goal.place_pose.pose.position.y = assignment->place_y;
    goal.pick_pose.pose.position.z = 0.14;
    goal.place_pose.pose.position.z = 0.08;
    goal.retreat_pose.pose.position.x = 0.0;
    goal.retreat_pose.pose.position.y = 0.0;
    publish("EXECUTING: " + id + " (simulation only)");
    rclcpp_action::Client<Mission>::SendGoalOptions options;
    options.result_callback = [this, id](const auto & result) {
      publish(result.code == rclcpp_action::ResultCode::SUCCEEDED ? "COMPLETE: " + id : "FAILED: " + id);
    };
    client_->async_send_goal(goal, options);
  }

  void publish(const std::string & state) { state_pub_->publish(std_msgs::msg::String().set__data(state)); }
  std::optional<std::string> pending_task_;
  rclcpp::Subscription<std_msgs::msg::String>::SharedPtr task_sub_, approval_sub_;
  rclcpp::Publisher<std_msgs::msg::String>::SharedPtr state_pub_;
  rclcpp_action::Client<Mission>::SharedPtr client_;
};

int main(int argc, char ** argv) { rclcpp::init(argc, argv); rclcpp::spin(std::make_shared<ApprovedTaskExecutor>()); rclcpp::shutdown(); }
