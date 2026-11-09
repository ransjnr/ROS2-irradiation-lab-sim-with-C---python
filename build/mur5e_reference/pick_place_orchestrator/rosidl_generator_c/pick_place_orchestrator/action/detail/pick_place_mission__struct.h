// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pick_place_orchestrator:action/PickPlaceMission.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pick_place_orchestrator/action/pick_place_mission.h"


#ifndef PICK_PLACE_ORCHESTRATOR__ACTION__DETAIL__PICK_PLACE_MISSION__STRUCT_H_
#define PICK_PLACE_ORCHESTRATOR__ACTION__DETAIL__PICK_PLACE_MISSION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pick_pose'
// Member 'place_pose'
// Member 'retreat_pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"

/// Struct defined in action/PickPlaceMission in the package pick_place_orchestrator.
typedef struct pick_place_orchestrator__action__PickPlaceMission_Goal
{
  geometry_msgs__msg__PoseStamped pick_pose;
  geometry_msgs__msg__PoseStamped place_pose;
  geometry_msgs__msg__PoseStamped retreat_pose;
} pick_place_orchestrator__action__PickPlaceMission_Goal;

// Struct for a sequence of pick_place_orchestrator__action__PickPlaceMission_Goal.
typedef struct pick_place_orchestrator__action__PickPlaceMission_Goal__Sequence
{
  pick_place_orchestrator__action__PickPlaceMission_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pick_place_orchestrator__action__PickPlaceMission_Goal__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'failure_reason'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/PickPlaceMission in the package pick_place_orchestrator.
typedef struct pick_place_orchestrator__action__PickPlaceMission_Result
{
  bool success;
  rosidl_runtime_c__String failure_reason;
  int32_t failed_step_index;
} pick_place_orchestrator__action__PickPlaceMission_Result;

// Struct for a sequence of pick_place_orchestrator__action__PickPlaceMission_Result.
typedef struct pick_place_orchestrator__action__PickPlaceMission_Result__Sequence
{
  pick_place_orchestrator__action__PickPlaceMission_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pick_place_orchestrator__action__PickPlaceMission_Result__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'current_phase'
// Member 'current_step'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/PickPlaceMission in the package pick_place_orchestrator.
typedef struct pick_place_orchestrator__action__PickPlaceMission_Feedback
{
  rosidl_runtime_c__String current_phase;
  rosidl_runtime_c__String current_step;
  int32_t step_index;
} pick_place_orchestrator__action__PickPlaceMission_Feedback;

// Struct for a sequence of pick_place_orchestrator__action__PickPlaceMission_Feedback.
typedef struct pick_place_orchestrator__action__PickPlaceMission_Feedback__Sequence
{
  pick_place_orchestrator__action__PickPlaceMission_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pick_place_orchestrator__action__PickPlaceMission_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "pick_place_orchestrator/action/detail/pick_place_mission__struct.h"

/// Struct defined in action/PickPlaceMission in the package pick_place_orchestrator.
typedef struct pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  pick_place_orchestrator__action__PickPlaceMission_Goal goal;
} pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request;

// Struct for a sequence of pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request.
typedef struct pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request__Sequence
{
  pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/PickPlaceMission in the package pick_place_orchestrator.
typedef struct pick_place_orchestrator__action__PickPlaceMission_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} pick_place_orchestrator__action__PickPlaceMission_SendGoal_Response;

// Struct for a sequence of pick_place_orchestrator__action__PickPlaceMission_SendGoal_Response.
typedef struct pick_place_orchestrator__action__PickPlaceMission_SendGoal_Response__Sequence
{
  pick_place_orchestrator__action__PickPlaceMission_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pick_place_orchestrator__action__PickPlaceMission_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  pick_place_orchestrator__action__PickPlaceMission_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  pick_place_orchestrator__action__PickPlaceMission_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/PickPlaceMission in the package pick_place_orchestrator.
typedef struct pick_place_orchestrator__action__PickPlaceMission_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  pick_place_orchestrator__action__PickPlaceMission_SendGoal_Request__Sequence request;
  pick_place_orchestrator__action__PickPlaceMission_SendGoal_Response__Sequence response;
} pick_place_orchestrator__action__PickPlaceMission_SendGoal_Event;

// Struct for a sequence of pick_place_orchestrator__action__PickPlaceMission_SendGoal_Event.
typedef struct pick_place_orchestrator__action__PickPlaceMission_SendGoal_Event__Sequence
{
  pick_place_orchestrator__action__PickPlaceMission_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pick_place_orchestrator__action__PickPlaceMission_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/PickPlaceMission in the package pick_place_orchestrator.
typedef struct pick_place_orchestrator__action__PickPlaceMission_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} pick_place_orchestrator__action__PickPlaceMission_GetResult_Request;

// Struct for a sequence of pick_place_orchestrator__action__PickPlaceMission_GetResult_Request.
typedef struct pick_place_orchestrator__action__PickPlaceMission_GetResult_Request__Sequence
{
  pick_place_orchestrator__action__PickPlaceMission_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pick_place_orchestrator__action__PickPlaceMission_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "pick_place_orchestrator/action/detail/pick_place_mission__struct.h"

/// Struct defined in action/PickPlaceMission in the package pick_place_orchestrator.
typedef struct pick_place_orchestrator__action__PickPlaceMission_GetResult_Response
{
  int8_t status;
  pick_place_orchestrator__action__PickPlaceMission_Result result;
} pick_place_orchestrator__action__PickPlaceMission_GetResult_Response;

// Struct for a sequence of pick_place_orchestrator__action__PickPlaceMission_GetResult_Response.
typedef struct pick_place_orchestrator__action__PickPlaceMission_GetResult_Response__Sequence
{
  pick_place_orchestrator__action__PickPlaceMission_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pick_place_orchestrator__action__PickPlaceMission_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  pick_place_orchestrator__action__PickPlaceMission_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  pick_place_orchestrator__action__PickPlaceMission_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/PickPlaceMission in the package pick_place_orchestrator.
typedef struct pick_place_orchestrator__action__PickPlaceMission_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  pick_place_orchestrator__action__PickPlaceMission_GetResult_Request__Sequence request;
  pick_place_orchestrator__action__PickPlaceMission_GetResult_Response__Sequence response;
} pick_place_orchestrator__action__PickPlaceMission_GetResult_Event;

// Struct for a sequence of pick_place_orchestrator__action__PickPlaceMission_GetResult_Event.
typedef struct pick_place_orchestrator__action__PickPlaceMission_GetResult_Event__Sequence
{
  pick_place_orchestrator__action__PickPlaceMission_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pick_place_orchestrator__action__PickPlaceMission_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "pick_place_orchestrator/action/detail/pick_place_mission__struct.h"

/// Struct defined in action/PickPlaceMission in the package pick_place_orchestrator.
typedef struct pick_place_orchestrator__action__PickPlaceMission_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  pick_place_orchestrator__action__PickPlaceMission_Feedback feedback;
} pick_place_orchestrator__action__PickPlaceMission_FeedbackMessage;

// Struct for a sequence of pick_place_orchestrator__action__PickPlaceMission_FeedbackMessage.
typedef struct pick_place_orchestrator__action__PickPlaceMission_FeedbackMessage__Sequence
{
  pick_place_orchestrator__action__PickPlaceMission_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pick_place_orchestrator__action__PickPlaceMission_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PICK_PLACE_ORCHESTRATOR__ACTION__DETAIL__PICK_PLACE_MISSION__STRUCT_H_
