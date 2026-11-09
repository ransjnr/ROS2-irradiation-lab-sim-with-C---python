// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pick_place_orchestrator:action/PickPlaceMission.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pick_place_orchestrator/action/pick_place_mission.hpp"


#ifndef PICK_PLACE_ORCHESTRATOR__ACTION__DETAIL__PICK_PLACE_MISSION__STRUCT_HPP_
#define PICK_PLACE_ORCHESTRATOR__ACTION__DETAIL__PICK_PLACE_MISSION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pick_pose'
// Member 'place_pose'
// Member 'retreat_pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pick_place_orchestrator__action__PickPlaceMission_Goal __attribute__((deprecated))
#else
# define DEPRECATED__pick_place_orchestrator__action__PickPlaceMission_Goal __declspec(deprecated)
#endif

namespace pick_place_orchestrator
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PickPlaceMission_Goal_
{
  using Type = PickPlaceMission_Goal_<ContainerAllocator>;

  explicit PickPlaceMission_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pick_pose(_init),
    place_pose(_init),
    retreat_pose(_init)
  {
    (void)_init;
  }

  explicit PickPlaceMission_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pick_pose(_alloc, _init),
    place_pose(_alloc, _init),
    retreat_pose(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _pick_pose_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _pick_pose_type pick_pose;
  using _place_pose_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _place_pose_type place_pose;
  using _retreat_pose_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _retreat_pose_type retreat_pose;

  // setters for named parameter idiom
  Type & set__pick_pose(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->pick_pose = _arg;
    return *this;
  }
  Type & set__place_pose(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->place_pose = _arg;
    return *this;
  }
  Type & set__retreat_pose(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->retreat_pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pick_place_orchestrator::action::PickPlaceMission_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const pick_place_orchestrator::action::PickPlaceMission_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pick_place_orchestrator::action::PickPlaceMission_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pick_place_orchestrator::action::PickPlaceMission_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pick_place_orchestrator::action::PickPlaceMission_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pick_place_orchestrator::action::PickPlaceMission_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pick_place_orchestrator::action::PickPlaceMission_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pick_place_orchestrator::action::PickPlaceMission_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pick_place_orchestrator::action::PickPlaceMission_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pick_place_orchestrator::action::PickPlaceMission_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pick_place_orchestrator__action__PickPlaceMission_Goal
    std::shared_ptr<pick_place_orchestrator::action::PickPlaceMission_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pick_place_orchestrator__action__PickPlaceMission_Goal
    std::shared_ptr<pick_place_orchestrator::action::PickPlaceMission_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PickPlaceMission_Goal_ & other) const
  {
    if (this->pick_pose != other.pick_pose) {
      return false;
    }
    if (this->place_pose != other.place_pose) {
      return false;
    }
    if (this->retreat_pose != other.retreat_pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const PickPlaceMission_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PickPlaceMission_Goal_

// alias to use template instance with default allocator
using PickPlaceMission_Goal =
  pick_place_orchestrator::action::PickPlaceMission_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace pick_place_orchestrator


#ifndef _WIN32
# define DEPRECATED__pick_place_orchestrator__action__PickPlaceMission_Result __attribute__((deprecated))
#else
# define DEPRECATED__pick_place_orchestrator__action__PickPlaceMission_Result __declspec(deprecated)
#endif

namespace pick_place_orchestrator
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PickPlaceMission_Result_
{
  using Type = PickPlaceMission_Result_<ContainerAllocator>;

  explicit PickPlaceMission_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->failure_reason = "";
      this->failed_step_index = 0l;
    }
  }

  explicit PickPlaceMission_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : failure_reason(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->failure_reason = "";
      this->failed_step_index = 0l;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _failure_reason_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _failure_reason_type failure_reason;
  using _failed_step_index_type =
    int32_t;
  _failed_step_index_type failed_step_index;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__failure_reason(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->failure_reason = _arg;
    return *this;
  }
  Type & set__failed_step_index(
    const int32_t & _arg)
  {
    this->failed_step_index = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pick_place_orchestrator::action::PickPlaceMission_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const pick_place_orchestrator::action::PickPlaceMission_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pick_place_orchestrator::action::PickPlaceMission_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pick_place_orchestrator::action::PickPlaceMission_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pick_place_orchestrator::action::PickPlaceMission_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pick_place_orchestrator::action::PickPlaceMission_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pick_place_orchestrator::action::PickPlaceMission_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pick_place_orchestrator::action::PickPlaceMission_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pick_place_orchestrator::action::PickPlaceMission_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pick_place_orchestrator::action::PickPlaceMission_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pick_place_orchestrator__action__PickPlaceMission_Result
    std::shared_ptr<pick_place_orchestrator::action::PickPlaceMission_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pick_place_orchestrator__action__PickPlaceMission_Result
    std::shared_ptr<pick_place_orchestrator::action::PickPlaceMission_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PickPlaceMission_Result_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->failure_reason != other.failure_reason) {
      return false;
    }
    if (this->failed_step_index != other.failed_step_index) {
      return false;
    }
    return true;
  }
  bool operator!=(const PickPlaceMission_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PickPlaceMission_Result_

// alias to use template instance with default allocator
using PickPlaceMission_Result =
  pick_place_orchestrator::action::PickPlaceMission_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace pick_place_orchestrator


#ifndef _WIN32
# define DEPRECATED__pick_place_orchestrator__action__PickPlaceMission_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__pick_place_orchestrator__action__PickPlaceMission_Feedback __declspec(deprecated)
#endif

namespace pick_place_orchestrator
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PickPlaceMission_Feedback_
{
  using Type = PickPlaceMission_Feedback_<ContainerAllocator>;

  explicit PickPlaceMission_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_phase = "";
      this->current_step = "";
      this->step_index = 0l;
    }
  }

  explicit PickPlaceMission_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : current_phase(_alloc),
    current_step(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_phase = "";
      this->current_step = "";
      this->step_index = 0l;
    }
  }

  // field types and members
  using _current_phase_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _current_phase_type current_phase;
  using _current_step_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _current_step_type current_step;
  using _step_index_type =
    int32_t;
  _step_index_type step_index;

  // setters for named parameter idiom
  Type & set__current_phase(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->current_phase = _arg;
    return *this;
  }
  Type & set__current_step(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->current_step = _arg;
    return *this;
  }
  Type & set__step_index(
    const int32_t & _arg)
  {
    this->step_index = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pick_place_orchestrator::action::PickPlaceMission_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const pick_place_orchestrator::action::PickPlaceMission_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pick_place_orchestrator::action::PickPlaceMission_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pick_place_orchestrator::action::PickPlaceMission_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pick_place_orchestrator::action::PickPlaceMission_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pick_place_orchestrator::action::PickPlaceMission_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pick_place_orchestrator::action::PickPlaceMission_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pick_place_orchestrator::action::PickPlaceMission_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pick_place_orchestrator::action::PickPlaceMission_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pick_place_orchestrator::action::PickPlaceMission_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pick_place_orchestrator__action__PickPlaceMission_Feedback
    std::shared_ptr<pick_place_orchestrator::action::PickPlaceMission_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pick_place_orchestrator__action__PickPlaceMission_Feedback
    std::shared_ptr<pick_place_orchestrator::action::PickPlaceMission_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PickPlaceMission_Feedback_ & other) const
  {
    if (this->current_phase != other.current_phase) {
      return false;
    }
    if (this->current_step != other.current_step) {
      return false;
    }
    if (this->step_index != other.step_index) {
      return false;
    }
    return true;
  }
  bool operator!=(const PickPlaceMission_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PickPlaceMission_Feedback_

// alias to use template instance with default allocator
using PickPlaceMission_Feedback =
  pick_place_orchestrator::action::PickPlaceMission_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace pick_place_orchestrator


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "pick_place_orchestrator/action/detail/pick_place_mission__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request __declspec(deprecated)
#endif

namespace pick_place_orchestrator
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PickPlaceMission_SendGoal_Request_
{
  using Type = PickPlaceMission_SendGoal_Request_<ContainerAllocator>;

  explicit PickPlaceMission_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit PickPlaceMission_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    pick_place_orchestrator::action::PickPlaceMission_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const pick_place_orchestrator::action::PickPlaceMission_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pick_place_orchestrator::action::PickPlaceMission_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const pick_place_orchestrator::action::PickPlaceMission_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pick_place_orchestrator::action::PickPlaceMission_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pick_place_orchestrator::action::PickPlaceMission_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pick_place_orchestrator::action::PickPlaceMission_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pick_place_orchestrator::action::PickPlaceMission_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pick_place_orchestrator::action::PickPlaceMission_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pick_place_orchestrator::action::PickPlaceMission_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pick_place_orchestrator::action::PickPlaceMission_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pick_place_orchestrator::action::PickPlaceMission_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request
    std::shared_ptr<pick_place_orchestrator::action::PickPlaceMission_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request
    std::shared_ptr<pick_place_orchestrator::action::PickPlaceMission_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PickPlaceMission_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const PickPlaceMission_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PickPlaceMission_SendGoal_Request_

// alias to use template instance with default allocator
using PickPlaceMission_SendGoal_Request =
  pick_place_orchestrator::action::PickPlaceMission_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace pick_place_orchestrator


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pick_place_orchestrator__action__PickPlaceMission_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__pick_place_orchestrator__action__PickPlaceMission_SendGoal_Response __declspec(deprecated)
#endif

namespace pick_place_orchestrator
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PickPlaceMission_SendGoal_Response_
{
  using Type = PickPlaceMission_SendGoal_Response_<ContainerAllocator>;

  explicit PickPlaceMission_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit PickPlaceMission_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pick_place_orchestrator::action::PickPlaceMission_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const pick_place_orchestrator::action::PickPlaceMission_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pick_place_orchestrator::action::PickPlaceMission_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pick_place_orchestrator::action::PickPlaceMission_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pick_place_orchestrator::action::PickPlaceMission_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pick_place_orchestrator::action::PickPlaceMission_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pick_place_orchestrator::action::PickPlaceMission_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pick_place_orchestrator::action::PickPlaceMission_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pick_place_orchestrator::action::PickPlaceMission_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pick_place_orchestrator::action::PickPlaceMission_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pick_place_orchestrator__action__PickPlaceMission_SendGoal_Response
    std::shared_ptr<pick_place_orchestrator::action::PickPlaceMission_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pick_place_orchestrator__action__PickPlaceMission_SendGoal_Response
    std::shared_ptr<pick_place_orchestrator::action::PickPlaceMission_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PickPlaceMission_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const PickPlaceMission_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PickPlaceMission_SendGoal_Response_

// alias to use template instance with default allocator
using PickPlaceMission_SendGoal_Response =
  pick_place_orchestrator::action::PickPlaceMission_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace pick_place_orchestrator


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pick_place_orchestrator__action__PickPlaceMission_SendGoal_Event __attribute__((deprecated))
#else
# define DEPRECATED__pick_place_orchestrator__action__PickPlaceMission_SendGoal_Event __declspec(deprecated)
#endif

namespace pick_place_orchestrator
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PickPlaceMission_SendGoal_Event_
{
  using Type = PickPlaceMission_SendGoal_Event_<ContainerAllocator>;

  explicit PickPlaceMission_SendGoal_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit PickPlaceMission_SendGoal_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<pick_place_orchestrator::action::PickPlaceMission_SendGoal_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<pick_place_orchestrator::action::PickPlaceMission_SendGoal_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<pick_place_orchestrator::action::PickPlaceMission_SendGoal_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<pick_place_orchestrator::action::PickPlaceMission_SendGoal_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<pick_place_orchestrator::action::PickPlaceMission_SendGoal_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<pick_place_orchestrator::action::PickPlaceMission_SendGoal_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<pick_place_orchestrator::action::PickPlaceMission_SendGoal_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<pick_place_orchestrator::action::PickPlaceMission_SendGoal_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pick_place_orchestrator::action::PickPlaceMission_SendGoal_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const pick_place_orchestrator::action::PickPlaceMission_SendGoal_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pick_place_orchestrator::action::PickPlaceMission_SendGoal_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pick_place_orchestrator::action::PickPlaceMission_SendGoal_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pick_place_orchestrator::action::PickPlaceMission_SendGoal_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pick_place_orchestrator::action::PickPlaceMission_SendGoal_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pick_place_orchestrator::action::PickPlaceMission_SendGoal_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pick_place_orchestrator::action::PickPlaceMission_SendGoal_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pick_place_orchestrator::action::PickPlaceMission_SendGoal_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pick_place_orchestrator::action::PickPlaceMission_SendGoal_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pick_place_orchestrator__action__PickPlaceMission_SendGoal_Event
    std::shared_ptr<pick_place_orchestrator::action::PickPlaceMission_SendGoal_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pick_place_orchestrator__action__PickPlaceMission_SendGoal_Event
    std::shared_ptr<pick_place_orchestrator::action::PickPlaceMission_SendGoal_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PickPlaceMission_SendGoal_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const PickPlaceMission_SendGoal_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PickPlaceMission_SendGoal_Event_

// alias to use template instance with default allocator
using PickPlaceMission_SendGoal_Event =
  pick_place_orchestrator::action::PickPlaceMission_SendGoal_Event_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace pick_place_orchestrator

namespace pick_place_orchestrator
{

namespace action
{

struct PickPlaceMission_SendGoal
{
  using Request = pick_place_orchestrator::action::PickPlaceMission_SendGoal_Request;
  using Response = pick_place_orchestrator::action::PickPlaceMission_SendGoal_Response;
  using Event = pick_place_orchestrator::action::PickPlaceMission_SendGoal_Event;
};

}  // namespace action

}  // namespace pick_place_orchestrator


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pick_place_orchestrator__action__PickPlaceMission_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__pick_place_orchestrator__action__PickPlaceMission_GetResult_Request __declspec(deprecated)
#endif

namespace pick_place_orchestrator
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PickPlaceMission_GetResult_Request_
{
  using Type = PickPlaceMission_GetResult_Request_<ContainerAllocator>;

  explicit PickPlaceMission_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit PickPlaceMission_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pick_place_orchestrator::action::PickPlaceMission_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const pick_place_orchestrator::action::PickPlaceMission_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pick_place_orchestrator::action::PickPlaceMission_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pick_place_orchestrator::action::PickPlaceMission_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pick_place_orchestrator::action::PickPlaceMission_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pick_place_orchestrator::action::PickPlaceMission_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pick_place_orchestrator::action::PickPlaceMission_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pick_place_orchestrator::action::PickPlaceMission_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pick_place_orchestrator::action::PickPlaceMission_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pick_place_orchestrator::action::PickPlaceMission_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pick_place_orchestrator__action__PickPlaceMission_GetResult_Request
    std::shared_ptr<pick_place_orchestrator::action::PickPlaceMission_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pick_place_orchestrator__action__PickPlaceMission_GetResult_Request
    std::shared_ptr<pick_place_orchestrator::action::PickPlaceMission_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PickPlaceMission_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const PickPlaceMission_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PickPlaceMission_GetResult_Request_

// alias to use template instance with default allocator
using PickPlaceMission_GetResult_Request =
  pick_place_orchestrator::action::PickPlaceMission_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace pick_place_orchestrator


// Include directives for member types
// Member 'result'
// already included above
// #include "pick_place_orchestrator/action/detail/pick_place_mission__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pick_place_orchestrator__action__PickPlaceMission_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__pick_place_orchestrator__action__PickPlaceMission_GetResult_Response __declspec(deprecated)
#endif

namespace pick_place_orchestrator
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PickPlaceMission_GetResult_Response_
{
  using Type = PickPlaceMission_GetResult_Response_<ContainerAllocator>;

  explicit PickPlaceMission_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit PickPlaceMission_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    pick_place_orchestrator::action::PickPlaceMission_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const pick_place_orchestrator::action::PickPlaceMission_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pick_place_orchestrator::action::PickPlaceMission_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const pick_place_orchestrator::action::PickPlaceMission_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pick_place_orchestrator::action::PickPlaceMission_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pick_place_orchestrator::action::PickPlaceMission_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pick_place_orchestrator::action::PickPlaceMission_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pick_place_orchestrator::action::PickPlaceMission_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pick_place_orchestrator::action::PickPlaceMission_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pick_place_orchestrator::action::PickPlaceMission_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pick_place_orchestrator::action::PickPlaceMission_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pick_place_orchestrator::action::PickPlaceMission_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pick_place_orchestrator__action__PickPlaceMission_GetResult_Response
    std::shared_ptr<pick_place_orchestrator::action::PickPlaceMission_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pick_place_orchestrator__action__PickPlaceMission_GetResult_Response
    std::shared_ptr<pick_place_orchestrator::action::PickPlaceMission_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PickPlaceMission_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const PickPlaceMission_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PickPlaceMission_GetResult_Response_

// alias to use template instance with default allocator
using PickPlaceMission_GetResult_Response =
  pick_place_orchestrator::action::PickPlaceMission_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace pick_place_orchestrator


// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pick_place_orchestrator__action__PickPlaceMission_GetResult_Event __attribute__((deprecated))
#else
# define DEPRECATED__pick_place_orchestrator__action__PickPlaceMission_GetResult_Event __declspec(deprecated)
#endif

namespace pick_place_orchestrator
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PickPlaceMission_GetResult_Event_
{
  using Type = PickPlaceMission_GetResult_Event_<ContainerAllocator>;

  explicit PickPlaceMission_GetResult_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit PickPlaceMission_GetResult_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<pick_place_orchestrator::action::PickPlaceMission_GetResult_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<pick_place_orchestrator::action::PickPlaceMission_GetResult_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<pick_place_orchestrator::action::PickPlaceMission_GetResult_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<pick_place_orchestrator::action::PickPlaceMission_GetResult_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<pick_place_orchestrator::action::PickPlaceMission_GetResult_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<pick_place_orchestrator::action::PickPlaceMission_GetResult_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<pick_place_orchestrator::action::PickPlaceMission_GetResult_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<pick_place_orchestrator::action::PickPlaceMission_GetResult_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pick_place_orchestrator::action::PickPlaceMission_GetResult_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const pick_place_orchestrator::action::PickPlaceMission_GetResult_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pick_place_orchestrator::action::PickPlaceMission_GetResult_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pick_place_orchestrator::action::PickPlaceMission_GetResult_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pick_place_orchestrator::action::PickPlaceMission_GetResult_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pick_place_orchestrator::action::PickPlaceMission_GetResult_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pick_place_orchestrator::action::PickPlaceMission_GetResult_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pick_place_orchestrator::action::PickPlaceMission_GetResult_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pick_place_orchestrator::action::PickPlaceMission_GetResult_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pick_place_orchestrator::action::PickPlaceMission_GetResult_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pick_place_orchestrator__action__PickPlaceMission_GetResult_Event
    std::shared_ptr<pick_place_orchestrator::action::PickPlaceMission_GetResult_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pick_place_orchestrator__action__PickPlaceMission_GetResult_Event
    std::shared_ptr<pick_place_orchestrator::action::PickPlaceMission_GetResult_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PickPlaceMission_GetResult_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const PickPlaceMission_GetResult_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PickPlaceMission_GetResult_Event_

// alias to use template instance with default allocator
using PickPlaceMission_GetResult_Event =
  pick_place_orchestrator::action::PickPlaceMission_GetResult_Event_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace pick_place_orchestrator

namespace pick_place_orchestrator
{

namespace action
{

struct PickPlaceMission_GetResult
{
  using Request = pick_place_orchestrator::action::PickPlaceMission_GetResult_Request;
  using Response = pick_place_orchestrator::action::PickPlaceMission_GetResult_Response;
  using Event = pick_place_orchestrator::action::PickPlaceMission_GetResult_Event;
};

}  // namespace action

}  // namespace pick_place_orchestrator


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "pick_place_orchestrator/action/detail/pick_place_mission__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pick_place_orchestrator__action__PickPlaceMission_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__pick_place_orchestrator__action__PickPlaceMission_FeedbackMessage __declspec(deprecated)
#endif

namespace pick_place_orchestrator
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PickPlaceMission_FeedbackMessage_
{
  using Type = PickPlaceMission_FeedbackMessage_<ContainerAllocator>;

  explicit PickPlaceMission_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit PickPlaceMission_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    pick_place_orchestrator::action::PickPlaceMission_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const pick_place_orchestrator::action::PickPlaceMission_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pick_place_orchestrator::action::PickPlaceMission_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const pick_place_orchestrator::action::PickPlaceMission_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pick_place_orchestrator::action::PickPlaceMission_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pick_place_orchestrator::action::PickPlaceMission_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pick_place_orchestrator::action::PickPlaceMission_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pick_place_orchestrator::action::PickPlaceMission_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pick_place_orchestrator::action::PickPlaceMission_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pick_place_orchestrator::action::PickPlaceMission_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pick_place_orchestrator::action::PickPlaceMission_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pick_place_orchestrator::action::PickPlaceMission_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pick_place_orchestrator__action__PickPlaceMission_FeedbackMessage
    std::shared_ptr<pick_place_orchestrator::action::PickPlaceMission_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pick_place_orchestrator__action__PickPlaceMission_FeedbackMessage
    std::shared_ptr<pick_place_orchestrator::action::PickPlaceMission_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PickPlaceMission_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const PickPlaceMission_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PickPlaceMission_FeedbackMessage_

// alias to use template instance with default allocator
using PickPlaceMission_FeedbackMessage =
  pick_place_orchestrator::action::PickPlaceMission_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace pick_place_orchestrator

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace pick_place_orchestrator
{

namespace action
{

struct PickPlaceMission
{
  /// The goal message defined in the action definition.
  using Goal = pick_place_orchestrator::action::PickPlaceMission_Goal;
  /// The result message defined in the action definition.
  using Result = pick_place_orchestrator::action::PickPlaceMission_Result;
  /// The feedback message defined in the action definition.
  using Feedback = pick_place_orchestrator::action::PickPlaceMission_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = pick_place_orchestrator::action::PickPlaceMission_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = pick_place_orchestrator::action::PickPlaceMission_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = pick_place_orchestrator::action::PickPlaceMission_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct PickPlaceMission PickPlaceMission;

}  // namespace action

}  // namespace pick_place_orchestrator

#endif  // PICK_PLACE_ORCHESTRATOR__ACTION__DETAIL__PICK_PLACE_MISSION__STRUCT_HPP_
