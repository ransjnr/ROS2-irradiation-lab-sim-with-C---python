// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from base_placement_optimizer:action/OptimizePlacement.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "base_placement_optimizer/action/optimize_placement.h"


#ifndef BASE_PLACEMENT_OPTIMIZER__ACTION__DETAIL__OPTIMIZE_PLACEMENT__STRUCT_H_
#define BASE_PLACEMENT_OPTIMIZER__ACTION__DETAIL__OPTIMIZE_PLACEMENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'target_pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"

/// Struct defined in action/OptimizePlacement in the package base_placement_optimizer.
typedef struct base_placement_optimizer__action__OptimizePlacement_Goal
{
  geometry_msgs__msg__PoseStamped target_pose;
} base_placement_optimizer__action__OptimizePlacement_Goal;

// Struct for a sequence of base_placement_optimizer__action__OptimizePlacement_Goal.
typedef struct base_placement_optimizer__action__OptimizePlacement_Goal__Sequence
{
  base_placement_optimizer__action__OptimizePlacement_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_placement_optimizer__action__OptimizePlacement_Goal__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'error_reason'
#include "rosidl_runtime_c/string.h"
// Member 'base_pose'
// already included above
// #include "geometry_msgs/msg/detail/pose_stamped__struct.h"

/// Struct defined in action/OptimizePlacement in the package base_placement_optimizer.
typedef struct base_placement_optimizer__action__OptimizePlacement_Result
{
  bool success;
  rosidl_runtime_c__String error_reason;
  geometry_msgs__msg__PoseStamped base_pose;
  float manipulability_score;
  float path_distance;
  float composite_score;
} base_placement_optimizer__action__OptimizePlacement_Result;

// Struct for a sequence of base_placement_optimizer__action__OptimizePlacement_Result.
typedef struct base_placement_optimizer__action__OptimizePlacement_Result__Sequence
{
  base_placement_optimizer__action__OptimizePlacement_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_placement_optimizer__action__OptimizePlacement_Result__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'current_phase'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/OptimizePlacement in the package base_placement_optimizer.
typedef struct base_placement_optimizer__action__OptimizePlacement_Feedback
{
  rosidl_runtime_c__String current_phase;
} base_placement_optimizer__action__OptimizePlacement_Feedback;

// Struct for a sequence of base_placement_optimizer__action__OptimizePlacement_Feedback.
typedef struct base_placement_optimizer__action__OptimizePlacement_Feedback__Sequence
{
  base_placement_optimizer__action__OptimizePlacement_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_placement_optimizer__action__OptimizePlacement_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "base_placement_optimizer/action/detail/optimize_placement__struct.h"

/// Struct defined in action/OptimizePlacement in the package base_placement_optimizer.
typedef struct base_placement_optimizer__action__OptimizePlacement_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  base_placement_optimizer__action__OptimizePlacement_Goal goal;
} base_placement_optimizer__action__OptimizePlacement_SendGoal_Request;

// Struct for a sequence of base_placement_optimizer__action__OptimizePlacement_SendGoal_Request.
typedef struct base_placement_optimizer__action__OptimizePlacement_SendGoal_Request__Sequence
{
  base_placement_optimizer__action__OptimizePlacement_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_placement_optimizer__action__OptimizePlacement_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/OptimizePlacement in the package base_placement_optimizer.
typedef struct base_placement_optimizer__action__OptimizePlacement_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} base_placement_optimizer__action__OptimizePlacement_SendGoal_Response;

// Struct for a sequence of base_placement_optimizer__action__OptimizePlacement_SendGoal_Response.
typedef struct base_placement_optimizer__action__OptimizePlacement_SendGoal_Response__Sequence
{
  base_placement_optimizer__action__OptimizePlacement_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_placement_optimizer__action__OptimizePlacement_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  base_placement_optimizer__action__OptimizePlacement_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  base_placement_optimizer__action__OptimizePlacement_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/OptimizePlacement in the package base_placement_optimizer.
typedef struct base_placement_optimizer__action__OptimizePlacement_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  base_placement_optimizer__action__OptimizePlacement_SendGoal_Request__Sequence request;
  base_placement_optimizer__action__OptimizePlacement_SendGoal_Response__Sequence response;
} base_placement_optimizer__action__OptimizePlacement_SendGoal_Event;

// Struct for a sequence of base_placement_optimizer__action__OptimizePlacement_SendGoal_Event.
typedef struct base_placement_optimizer__action__OptimizePlacement_SendGoal_Event__Sequence
{
  base_placement_optimizer__action__OptimizePlacement_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_placement_optimizer__action__OptimizePlacement_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/OptimizePlacement in the package base_placement_optimizer.
typedef struct base_placement_optimizer__action__OptimizePlacement_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} base_placement_optimizer__action__OptimizePlacement_GetResult_Request;

// Struct for a sequence of base_placement_optimizer__action__OptimizePlacement_GetResult_Request.
typedef struct base_placement_optimizer__action__OptimizePlacement_GetResult_Request__Sequence
{
  base_placement_optimizer__action__OptimizePlacement_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_placement_optimizer__action__OptimizePlacement_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "base_placement_optimizer/action/detail/optimize_placement__struct.h"

/// Struct defined in action/OptimizePlacement in the package base_placement_optimizer.
typedef struct base_placement_optimizer__action__OptimizePlacement_GetResult_Response
{
  int8_t status;
  base_placement_optimizer__action__OptimizePlacement_Result result;
} base_placement_optimizer__action__OptimizePlacement_GetResult_Response;

// Struct for a sequence of base_placement_optimizer__action__OptimizePlacement_GetResult_Response.
typedef struct base_placement_optimizer__action__OptimizePlacement_GetResult_Response__Sequence
{
  base_placement_optimizer__action__OptimizePlacement_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_placement_optimizer__action__OptimizePlacement_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  base_placement_optimizer__action__OptimizePlacement_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  base_placement_optimizer__action__OptimizePlacement_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/OptimizePlacement in the package base_placement_optimizer.
typedef struct base_placement_optimizer__action__OptimizePlacement_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  base_placement_optimizer__action__OptimizePlacement_GetResult_Request__Sequence request;
  base_placement_optimizer__action__OptimizePlacement_GetResult_Response__Sequence response;
} base_placement_optimizer__action__OptimizePlacement_GetResult_Event;

// Struct for a sequence of base_placement_optimizer__action__OptimizePlacement_GetResult_Event.
typedef struct base_placement_optimizer__action__OptimizePlacement_GetResult_Event__Sequence
{
  base_placement_optimizer__action__OptimizePlacement_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_placement_optimizer__action__OptimizePlacement_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "base_placement_optimizer/action/detail/optimize_placement__struct.h"

/// Struct defined in action/OptimizePlacement in the package base_placement_optimizer.
typedef struct base_placement_optimizer__action__OptimizePlacement_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  base_placement_optimizer__action__OptimizePlacement_Feedback feedback;
} base_placement_optimizer__action__OptimizePlacement_FeedbackMessage;

// Struct for a sequence of base_placement_optimizer__action__OptimizePlacement_FeedbackMessage.
typedef struct base_placement_optimizer__action__OptimizePlacement_FeedbackMessage__Sequence
{
  base_placement_optimizer__action__OptimizePlacement_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_placement_optimizer__action__OptimizePlacement_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BASE_PLACEMENT_OPTIMIZER__ACTION__DETAIL__OPTIMIZE_PLACEMENT__STRUCT_H_
