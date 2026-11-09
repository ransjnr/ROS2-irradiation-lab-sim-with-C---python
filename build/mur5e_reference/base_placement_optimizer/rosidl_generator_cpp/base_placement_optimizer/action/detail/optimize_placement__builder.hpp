// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from base_placement_optimizer:action/OptimizePlacement.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "base_placement_optimizer/action/optimize_placement.hpp"


#ifndef BASE_PLACEMENT_OPTIMIZER__ACTION__DETAIL__OPTIMIZE_PLACEMENT__BUILDER_HPP_
#define BASE_PLACEMENT_OPTIMIZER__ACTION__DETAIL__OPTIMIZE_PLACEMENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "base_placement_optimizer/action/detail/optimize_placement__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace base_placement_optimizer
{

namespace action
{

namespace builder
{

class Init_OptimizePlacement_Goal_target_pose
{
public:
  Init_OptimizePlacement_Goal_target_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::base_placement_optimizer::action::OptimizePlacement_Goal target_pose(::base_placement_optimizer::action::OptimizePlacement_Goal::_target_pose_type arg)
  {
    msg_.target_pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_placement_optimizer::action::OptimizePlacement_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_placement_optimizer::action::OptimizePlacement_Goal>()
{
  return base_placement_optimizer::action::builder::Init_OptimizePlacement_Goal_target_pose();
}

}  // namespace base_placement_optimizer


namespace base_placement_optimizer
{

namespace action
{

namespace builder
{

class Init_OptimizePlacement_Result_composite_score
{
public:
  explicit Init_OptimizePlacement_Result_composite_score(::base_placement_optimizer::action::OptimizePlacement_Result & msg)
  : msg_(msg)
  {}
  ::base_placement_optimizer::action::OptimizePlacement_Result composite_score(::base_placement_optimizer::action::OptimizePlacement_Result::_composite_score_type arg)
  {
    msg_.composite_score = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_placement_optimizer::action::OptimizePlacement_Result msg_;
};

class Init_OptimizePlacement_Result_path_distance
{
public:
  explicit Init_OptimizePlacement_Result_path_distance(::base_placement_optimizer::action::OptimizePlacement_Result & msg)
  : msg_(msg)
  {}
  Init_OptimizePlacement_Result_composite_score path_distance(::base_placement_optimizer::action::OptimizePlacement_Result::_path_distance_type arg)
  {
    msg_.path_distance = std::move(arg);
    return Init_OptimizePlacement_Result_composite_score(msg_);
  }

private:
  ::base_placement_optimizer::action::OptimizePlacement_Result msg_;
};

class Init_OptimizePlacement_Result_manipulability_score
{
public:
  explicit Init_OptimizePlacement_Result_manipulability_score(::base_placement_optimizer::action::OptimizePlacement_Result & msg)
  : msg_(msg)
  {}
  Init_OptimizePlacement_Result_path_distance manipulability_score(::base_placement_optimizer::action::OptimizePlacement_Result::_manipulability_score_type arg)
  {
    msg_.manipulability_score = std::move(arg);
    return Init_OptimizePlacement_Result_path_distance(msg_);
  }

private:
  ::base_placement_optimizer::action::OptimizePlacement_Result msg_;
};

class Init_OptimizePlacement_Result_base_pose
{
public:
  explicit Init_OptimizePlacement_Result_base_pose(::base_placement_optimizer::action::OptimizePlacement_Result & msg)
  : msg_(msg)
  {}
  Init_OptimizePlacement_Result_manipulability_score base_pose(::base_placement_optimizer::action::OptimizePlacement_Result::_base_pose_type arg)
  {
    msg_.base_pose = std::move(arg);
    return Init_OptimizePlacement_Result_manipulability_score(msg_);
  }

private:
  ::base_placement_optimizer::action::OptimizePlacement_Result msg_;
};

class Init_OptimizePlacement_Result_error_reason
{
public:
  explicit Init_OptimizePlacement_Result_error_reason(::base_placement_optimizer::action::OptimizePlacement_Result & msg)
  : msg_(msg)
  {}
  Init_OptimizePlacement_Result_base_pose error_reason(::base_placement_optimizer::action::OptimizePlacement_Result::_error_reason_type arg)
  {
    msg_.error_reason = std::move(arg);
    return Init_OptimizePlacement_Result_base_pose(msg_);
  }

private:
  ::base_placement_optimizer::action::OptimizePlacement_Result msg_;
};

class Init_OptimizePlacement_Result_success
{
public:
  Init_OptimizePlacement_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OptimizePlacement_Result_error_reason success(::base_placement_optimizer::action::OptimizePlacement_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_OptimizePlacement_Result_error_reason(msg_);
  }

private:
  ::base_placement_optimizer::action::OptimizePlacement_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_placement_optimizer::action::OptimizePlacement_Result>()
{
  return base_placement_optimizer::action::builder::Init_OptimizePlacement_Result_success();
}

}  // namespace base_placement_optimizer


namespace base_placement_optimizer
{

namespace action
{

namespace builder
{

class Init_OptimizePlacement_Feedback_current_phase
{
public:
  Init_OptimizePlacement_Feedback_current_phase()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::base_placement_optimizer::action::OptimizePlacement_Feedback current_phase(::base_placement_optimizer::action::OptimizePlacement_Feedback::_current_phase_type arg)
  {
    msg_.current_phase = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_placement_optimizer::action::OptimizePlacement_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_placement_optimizer::action::OptimizePlacement_Feedback>()
{
  return base_placement_optimizer::action::builder::Init_OptimizePlacement_Feedback_current_phase();
}

}  // namespace base_placement_optimizer


namespace base_placement_optimizer
{

namespace action
{

namespace builder
{

class Init_OptimizePlacement_SendGoal_Request_goal
{
public:
  explicit Init_OptimizePlacement_SendGoal_Request_goal(::base_placement_optimizer::action::OptimizePlacement_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::base_placement_optimizer::action::OptimizePlacement_SendGoal_Request goal(::base_placement_optimizer::action::OptimizePlacement_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_placement_optimizer::action::OptimizePlacement_SendGoal_Request msg_;
};

class Init_OptimizePlacement_SendGoal_Request_goal_id
{
public:
  Init_OptimizePlacement_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OptimizePlacement_SendGoal_Request_goal goal_id(::base_placement_optimizer::action::OptimizePlacement_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_OptimizePlacement_SendGoal_Request_goal(msg_);
  }

private:
  ::base_placement_optimizer::action::OptimizePlacement_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_placement_optimizer::action::OptimizePlacement_SendGoal_Request>()
{
  return base_placement_optimizer::action::builder::Init_OptimizePlacement_SendGoal_Request_goal_id();
}

}  // namespace base_placement_optimizer


namespace base_placement_optimizer
{

namespace action
{

namespace builder
{

class Init_OptimizePlacement_SendGoal_Response_stamp
{
public:
  explicit Init_OptimizePlacement_SendGoal_Response_stamp(::base_placement_optimizer::action::OptimizePlacement_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::base_placement_optimizer::action::OptimizePlacement_SendGoal_Response stamp(::base_placement_optimizer::action::OptimizePlacement_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_placement_optimizer::action::OptimizePlacement_SendGoal_Response msg_;
};

class Init_OptimizePlacement_SendGoal_Response_accepted
{
public:
  Init_OptimizePlacement_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OptimizePlacement_SendGoal_Response_stamp accepted(::base_placement_optimizer::action::OptimizePlacement_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_OptimizePlacement_SendGoal_Response_stamp(msg_);
  }

private:
  ::base_placement_optimizer::action::OptimizePlacement_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_placement_optimizer::action::OptimizePlacement_SendGoal_Response>()
{
  return base_placement_optimizer::action::builder::Init_OptimizePlacement_SendGoal_Response_accepted();
}

}  // namespace base_placement_optimizer


namespace base_placement_optimizer
{

namespace action
{

namespace builder
{

class Init_OptimizePlacement_SendGoal_Event_response
{
public:
  explicit Init_OptimizePlacement_SendGoal_Event_response(::base_placement_optimizer::action::OptimizePlacement_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::base_placement_optimizer::action::OptimizePlacement_SendGoal_Event response(::base_placement_optimizer::action::OptimizePlacement_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_placement_optimizer::action::OptimizePlacement_SendGoal_Event msg_;
};

class Init_OptimizePlacement_SendGoal_Event_request
{
public:
  explicit Init_OptimizePlacement_SendGoal_Event_request(::base_placement_optimizer::action::OptimizePlacement_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_OptimizePlacement_SendGoal_Event_response request(::base_placement_optimizer::action::OptimizePlacement_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_OptimizePlacement_SendGoal_Event_response(msg_);
  }

private:
  ::base_placement_optimizer::action::OptimizePlacement_SendGoal_Event msg_;
};

class Init_OptimizePlacement_SendGoal_Event_info
{
public:
  Init_OptimizePlacement_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OptimizePlacement_SendGoal_Event_request info(::base_placement_optimizer::action::OptimizePlacement_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_OptimizePlacement_SendGoal_Event_request(msg_);
  }

private:
  ::base_placement_optimizer::action::OptimizePlacement_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_placement_optimizer::action::OptimizePlacement_SendGoal_Event>()
{
  return base_placement_optimizer::action::builder::Init_OptimizePlacement_SendGoal_Event_info();
}

}  // namespace base_placement_optimizer


namespace base_placement_optimizer
{

namespace action
{

namespace builder
{

class Init_OptimizePlacement_GetResult_Request_goal_id
{
public:
  Init_OptimizePlacement_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::base_placement_optimizer::action::OptimizePlacement_GetResult_Request goal_id(::base_placement_optimizer::action::OptimizePlacement_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_placement_optimizer::action::OptimizePlacement_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_placement_optimizer::action::OptimizePlacement_GetResult_Request>()
{
  return base_placement_optimizer::action::builder::Init_OptimizePlacement_GetResult_Request_goal_id();
}

}  // namespace base_placement_optimizer


namespace base_placement_optimizer
{

namespace action
{

namespace builder
{

class Init_OptimizePlacement_GetResult_Response_result
{
public:
  explicit Init_OptimizePlacement_GetResult_Response_result(::base_placement_optimizer::action::OptimizePlacement_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::base_placement_optimizer::action::OptimizePlacement_GetResult_Response result(::base_placement_optimizer::action::OptimizePlacement_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_placement_optimizer::action::OptimizePlacement_GetResult_Response msg_;
};

class Init_OptimizePlacement_GetResult_Response_status
{
public:
  Init_OptimizePlacement_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OptimizePlacement_GetResult_Response_result status(::base_placement_optimizer::action::OptimizePlacement_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_OptimizePlacement_GetResult_Response_result(msg_);
  }

private:
  ::base_placement_optimizer::action::OptimizePlacement_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_placement_optimizer::action::OptimizePlacement_GetResult_Response>()
{
  return base_placement_optimizer::action::builder::Init_OptimizePlacement_GetResult_Response_status();
}

}  // namespace base_placement_optimizer


namespace base_placement_optimizer
{

namespace action
{

namespace builder
{

class Init_OptimizePlacement_GetResult_Event_response
{
public:
  explicit Init_OptimizePlacement_GetResult_Event_response(::base_placement_optimizer::action::OptimizePlacement_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::base_placement_optimizer::action::OptimizePlacement_GetResult_Event response(::base_placement_optimizer::action::OptimizePlacement_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_placement_optimizer::action::OptimizePlacement_GetResult_Event msg_;
};

class Init_OptimizePlacement_GetResult_Event_request
{
public:
  explicit Init_OptimizePlacement_GetResult_Event_request(::base_placement_optimizer::action::OptimizePlacement_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_OptimizePlacement_GetResult_Event_response request(::base_placement_optimizer::action::OptimizePlacement_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_OptimizePlacement_GetResult_Event_response(msg_);
  }

private:
  ::base_placement_optimizer::action::OptimizePlacement_GetResult_Event msg_;
};

class Init_OptimizePlacement_GetResult_Event_info
{
public:
  Init_OptimizePlacement_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OptimizePlacement_GetResult_Event_request info(::base_placement_optimizer::action::OptimizePlacement_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_OptimizePlacement_GetResult_Event_request(msg_);
  }

private:
  ::base_placement_optimizer::action::OptimizePlacement_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_placement_optimizer::action::OptimizePlacement_GetResult_Event>()
{
  return base_placement_optimizer::action::builder::Init_OptimizePlacement_GetResult_Event_info();
}

}  // namespace base_placement_optimizer


namespace base_placement_optimizer
{

namespace action
{

namespace builder
{

class Init_OptimizePlacement_FeedbackMessage_feedback
{
public:
  explicit Init_OptimizePlacement_FeedbackMessage_feedback(::base_placement_optimizer::action::OptimizePlacement_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::base_placement_optimizer::action::OptimizePlacement_FeedbackMessage feedback(::base_placement_optimizer::action::OptimizePlacement_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_placement_optimizer::action::OptimizePlacement_FeedbackMessage msg_;
};

class Init_OptimizePlacement_FeedbackMessage_goal_id
{
public:
  Init_OptimizePlacement_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OptimizePlacement_FeedbackMessage_feedback goal_id(::base_placement_optimizer::action::OptimizePlacement_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_OptimizePlacement_FeedbackMessage_feedback(msg_);
  }

private:
  ::base_placement_optimizer::action::OptimizePlacement_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_placement_optimizer::action::OptimizePlacement_FeedbackMessage>()
{
  return base_placement_optimizer::action::builder::Init_OptimizePlacement_FeedbackMessage_goal_id();
}

}  // namespace base_placement_optimizer

#endif  // BASE_PLACEMENT_OPTIMIZER__ACTION__DETAIL__OPTIMIZE_PLACEMENT__BUILDER_HPP_
