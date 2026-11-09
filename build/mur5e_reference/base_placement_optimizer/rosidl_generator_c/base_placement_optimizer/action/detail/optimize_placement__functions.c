// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from base_placement_optimizer:action/OptimizePlacement.idl
// generated code does not contain a copyright notice
#include "base_placement_optimizer/action/detail/optimize_placement__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `target_pose`
#include "geometry_msgs/msg/detail/pose_stamped__functions.h"

bool
base_placement_optimizer__action__OptimizePlacement_Goal__init(base_placement_optimizer__action__OptimizePlacement_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // target_pose
  if (!geometry_msgs__msg__PoseStamped__init(&msg->target_pose)) {
    base_placement_optimizer__action__OptimizePlacement_Goal__fini(msg);
    return false;
  }
  return true;
}

void
base_placement_optimizer__action__OptimizePlacement_Goal__fini(base_placement_optimizer__action__OptimizePlacement_Goal * msg)
{
  if (!msg) {
    return;
  }
  // target_pose
  geometry_msgs__msg__PoseStamped__fini(&msg->target_pose);
}

bool
base_placement_optimizer__action__OptimizePlacement_Goal__are_equal(const base_placement_optimizer__action__OptimizePlacement_Goal * lhs, const base_placement_optimizer__action__OptimizePlacement_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // target_pose
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->target_pose), &(rhs->target_pose)))
  {
    return false;
  }
  return true;
}

bool
base_placement_optimizer__action__OptimizePlacement_Goal__copy(
  const base_placement_optimizer__action__OptimizePlacement_Goal * input,
  base_placement_optimizer__action__OptimizePlacement_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // target_pose
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->target_pose), &(output->target_pose)))
  {
    return false;
  }
  return true;
}

base_placement_optimizer__action__OptimizePlacement_Goal *
base_placement_optimizer__action__OptimizePlacement_Goal__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_placement_optimizer__action__OptimizePlacement_Goal * msg = (base_placement_optimizer__action__OptimizePlacement_Goal *)allocator.allocate(sizeof(base_placement_optimizer__action__OptimizePlacement_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(base_placement_optimizer__action__OptimizePlacement_Goal));
  bool success = base_placement_optimizer__action__OptimizePlacement_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
base_placement_optimizer__action__OptimizePlacement_Goal__destroy(base_placement_optimizer__action__OptimizePlacement_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    base_placement_optimizer__action__OptimizePlacement_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
base_placement_optimizer__action__OptimizePlacement_Goal__Sequence__init(base_placement_optimizer__action__OptimizePlacement_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_placement_optimizer__action__OptimizePlacement_Goal * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(base_placement_optimizer__action__OptimizePlacement_Goal)) {
      return false;
    }
    data = (base_placement_optimizer__action__OptimizePlacement_Goal *)allocator.zero_allocate(size, sizeof(base_placement_optimizer__action__OptimizePlacement_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = base_placement_optimizer__action__OptimizePlacement_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        base_placement_optimizer__action__OptimizePlacement_Goal__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
base_placement_optimizer__action__OptimizePlacement_Goal__Sequence__fini(base_placement_optimizer__action__OptimizePlacement_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      base_placement_optimizer__action__OptimizePlacement_Goal__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

base_placement_optimizer__action__OptimizePlacement_Goal__Sequence *
base_placement_optimizer__action__OptimizePlacement_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_placement_optimizer__action__OptimizePlacement_Goal__Sequence * array = (base_placement_optimizer__action__OptimizePlacement_Goal__Sequence *)allocator.allocate(sizeof(base_placement_optimizer__action__OptimizePlacement_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = base_placement_optimizer__action__OptimizePlacement_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
base_placement_optimizer__action__OptimizePlacement_Goal__Sequence__destroy(base_placement_optimizer__action__OptimizePlacement_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    base_placement_optimizer__action__OptimizePlacement_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
base_placement_optimizer__action__OptimizePlacement_Goal__Sequence__are_equal(const base_placement_optimizer__action__OptimizePlacement_Goal__Sequence * lhs, const base_placement_optimizer__action__OptimizePlacement_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!base_placement_optimizer__action__OptimizePlacement_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
base_placement_optimizer__action__OptimizePlacement_Goal__Sequence__copy(
  const base_placement_optimizer__action__OptimizePlacement_Goal__Sequence * input,
  base_placement_optimizer__action__OptimizePlacement_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(base_placement_optimizer__action__OptimizePlacement_Goal)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(base_placement_optimizer__action__OptimizePlacement_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    base_placement_optimizer__action__OptimizePlacement_Goal * data =
      (base_placement_optimizer__action__OptimizePlacement_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!base_placement_optimizer__action__OptimizePlacement_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          base_placement_optimizer__action__OptimizePlacement_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!base_placement_optimizer__action__OptimizePlacement_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `error_reason`
#include "rosidl_runtime_c/string_functions.h"
// Member `base_pose`
// already included above
// #include "geometry_msgs/msg/detail/pose_stamped__functions.h"

bool
base_placement_optimizer__action__OptimizePlacement_Result__init(base_placement_optimizer__action__OptimizePlacement_Result * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // error_reason
  if (!rosidl_runtime_c__String__init(&msg->error_reason)) {
    base_placement_optimizer__action__OptimizePlacement_Result__fini(msg);
    return false;
  }
  // base_pose
  if (!geometry_msgs__msg__PoseStamped__init(&msg->base_pose)) {
    base_placement_optimizer__action__OptimizePlacement_Result__fini(msg);
    return false;
  }
  // manipulability_score
  // path_distance
  // composite_score
  return true;
}

void
base_placement_optimizer__action__OptimizePlacement_Result__fini(base_placement_optimizer__action__OptimizePlacement_Result * msg)
{
  if (!msg) {
    return;
  }
  // success
  // error_reason
  rosidl_runtime_c__String__fini(&msg->error_reason);
  // base_pose
  geometry_msgs__msg__PoseStamped__fini(&msg->base_pose);
  // manipulability_score
  // path_distance
  // composite_score
}

bool
base_placement_optimizer__action__OptimizePlacement_Result__are_equal(const base_placement_optimizer__action__OptimizePlacement_Result * lhs, const base_placement_optimizer__action__OptimizePlacement_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // error_reason
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->error_reason), &(rhs->error_reason)))
  {
    return false;
  }
  // base_pose
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->base_pose), &(rhs->base_pose)))
  {
    return false;
  }
  // manipulability_score
  if (lhs->manipulability_score != rhs->manipulability_score) {
    return false;
  }
  // path_distance
  if (lhs->path_distance != rhs->path_distance) {
    return false;
  }
  // composite_score
  if (lhs->composite_score != rhs->composite_score) {
    return false;
  }
  return true;
}

bool
base_placement_optimizer__action__OptimizePlacement_Result__copy(
  const base_placement_optimizer__action__OptimizePlacement_Result * input,
  base_placement_optimizer__action__OptimizePlacement_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // error_reason
  if (!rosidl_runtime_c__String__copy(
      &(input->error_reason), &(output->error_reason)))
  {
    return false;
  }
  // base_pose
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->base_pose), &(output->base_pose)))
  {
    return false;
  }
  // manipulability_score
  output->manipulability_score = input->manipulability_score;
  // path_distance
  output->path_distance = input->path_distance;
  // composite_score
  output->composite_score = input->composite_score;
  return true;
}

base_placement_optimizer__action__OptimizePlacement_Result *
base_placement_optimizer__action__OptimizePlacement_Result__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_placement_optimizer__action__OptimizePlacement_Result * msg = (base_placement_optimizer__action__OptimizePlacement_Result *)allocator.allocate(sizeof(base_placement_optimizer__action__OptimizePlacement_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(base_placement_optimizer__action__OptimizePlacement_Result));
  bool success = base_placement_optimizer__action__OptimizePlacement_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
base_placement_optimizer__action__OptimizePlacement_Result__destroy(base_placement_optimizer__action__OptimizePlacement_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    base_placement_optimizer__action__OptimizePlacement_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
base_placement_optimizer__action__OptimizePlacement_Result__Sequence__init(base_placement_optimizer__action__OptimizePlacement_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_placement_optimizer__action__OptimizePlacement_Result * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(base_placement_optimizer__action__OptimizePlacement_Result)) {
      return false;
    }
    data = (base_placement_optimizer__action__OptimizePlacement_Result *)allocator.zero_allocate(size, sizeof(base_placement_optimizer__action__OptimizePlacement_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = base_placement_optimizer__action__OptimizePlacement_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        base_placement_optimizer__action__OptimizePlacement_Result__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
base_placement_optimizer__action__OptimizePlacement_Result__Sequence__fini(base_placement_optimizer__action__OptimizePlacement_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      base_placement_optimizer__action__OptimizePlacement_Result__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

base_placement_optimizer__action__OptimizePlacement_Result__Sequence *
base_placement_optimizer__action__OptimizePlacement_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_placement_optimizer__action__OptimizePlacement_Result__Sequence * array = (base_placement_optimizer__action__OptimizePlacement_Result__Sequence *)allocator.allocate(sizeof(base_placement_optimizer__action__OptimizePlacement_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = base_placement_optimizer__action__OptimizePlacement_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
base_placement_optimizer__action__OptimizePlacement_Result__Sequence__destroy(base_placement_optimizer__action__OptimizePlacement_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    base_placement_optimizer__action__OptimizePlacement_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
base_placement_optimizer__action__OptimizePlacement_Result__Sequence__are_equal(const base_placement_optimizer__action__OptimizePlacement_Result__Sequence * lhs, const base_placement_optimizer__action__OptimizePlacement_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!base_placement_optimizer__action__OptimizePlacement_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
base_placement_optimizer__action__OptimizePlacement_Result__Sequence__copy(
  const base_placement_optimizer__action__OptimizePlacement_Result__Sequence * input,
  base_placement_optimizer__action__OptimizePlacement_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(base_placement_optimizer__action__OptimizePlacement_Result)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(base_placement_optimizer__action__OptimizePlacement_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    base_placement_optimizer__action__OptimizePlacement_Result * data =
      (base_placement_optimizer__action__OptimizePlacement_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!base_placement_optimizer__action__OptimizePlacement_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          base_placement_optimizer__action__OptimizePlacement_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!base_placement_optimizer__action__OptimizePlacement_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `current_phase`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
base_placement_optimizer__action__OptimizePlacement_Feedback__init(base_placement_optimizer__action__OptimizePlacement_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // current_phase
  if (!rosidl_runtime_c__String__init(&msg->current_phase)) {
    base_placement_optimizer__action__OptimizePlacement_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
base_placement_optimizer__action__OptimizePlacement_Feedback__fini(base_placement_optimizer__action__OptimizePlacement_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // current_phase
  rosidl_runtime_c__String__fini(&msg->current_phase);
}

bool
base_placement_optimizer__action__OptimizePlacement_Feedback__are_equal(const base_placement_optimizer__action__OptimizePlacement_Feedback * lhs, const base_placement_optimizer__action__OptimizePlacement_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // current_phase
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->current_phase), &(rhs->current_phase)))
  {
    return false;
  }
  return true;
}

bool
base_placement_optimizer__action__OptimizePlacement_Feedback__copy(
  const base_placement_optimizer__action__OptimizePlacement_Feedback * input,
  base_placement_optimizer__action__OptimizePlacement_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // current_phase
  if (!rosidl_runtime_c__String__copy(
      &(input->current_phase), &(output->current_phase)))
  {
    return false;
  }
  return true;
}

base_placement_optimizer__action__OptimizePlacement_Feedback *
base_placement_optimizer__action__OptimizePlacement_Feedback__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_placement_optimizer__action__OptimizePlacement_Feedback * msg = (base_placement_optimizer__action__OptimizePlacement_Feedback *)allocator.allocate(sizeof(base_placement_optimizer__action__OptimizePlacement_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(base_placement_optimizer__action__OptimizePlacement_Feedback));
  bool success = base_placement_optimizer__action__OptimizePlacement_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
base_placement_optimizer__action__OptimizePlacement_Feedback__destroy(base_placement_optimizer__action__OptimizePlacement_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    base_placement_optimizer__action__OptimizePlacement_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
base_placement_optimizer__action__OptimizePlacement_Feedback__Sequence__init(base_placement_optimizer__action__OptimizePlacement_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_placement_optimizer__action__OptimizePlacement_Feedback * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(base_placement_optimizer__action__OptimizePlacement_Feedback)) {
      return false;
    }
    data = (base_placement_optimizer__action__OptimizePlacement_Feedback *)allocator.zero_allocate(size, sizeof(base_placement_optimizer__action__OptimizePlacement_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = base_placement_optimizer__action__OptimizePlacement_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        base_placement_optimizer__action__OptimizePlacement_Feedback__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
base_placement_optimizer__action__OptimizePlacement_Feedback__Sequence__fini(base_placement_optimizer__action__OptimizePlacement_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      base_placement_optimizer__action__OptimizePlacement_Feedback__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

base_placement_optimizer__action__OptimizePlacement_Feedback__Sequence *
base_placement_optimizer__action__OptimizePlacement_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_placement_optimizer__action__OptimizePlacement_Feedback__Sequence * array = (base_placement_optimizer__action__OptimizePlacement_Feedback__Sequence *)allocator.allocate(sizeof(base_placement_optimizer__action__OptimizePlacement_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = base_placement_optimizer__action__OptimizePlacement_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
base_placement_optimizer__action__OptimizePlacement_Feedback__Sequence__destroy(base_placement_optimizer__action__OptimizePlacement_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    base_placement_optimizer__action__OptimizePlacement_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
base_placement_optimizer__action__OptimizePlacement_Feedback__Sequence__are_equal(const base_placement_optimizer__action__OptimizePlacement_Feedback__Sequence * lhs, const base_placement_optimizer__action__OptimizePlacement_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!base_placement_optimizer__action__OptimizePlacement_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
base_placement_optimizer__action__OptimizePlacement_Feedback__Sequence__copy(
  const base_placement_optimizer__action__OptimizePlacement_Feedback__Sequence * input,
  base_placement_optimizer__action__OptimizePlacement_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(base_placement_optimizer__action__OptimizePlacement_Feedback)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(base_placement_optimizer__action__OptimizePlacement_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    base_placement_optimizer__action__OptimizePlacement_Feedback * data =
      (base_placement_optimizer__action__OptimizePlacement_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!base_placement_optimizer__action__OptimizePlacement_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          base_placement_optimizer__action__OptimizePlacement_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!base_placement_optimizer__action__OptimizePlacement_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "base_placement_optimizer/action/detail/optimize_placement__functions.h"

bool
base_placement_optimizer__action__OptimizePlacement_SendGoal_Request__init(base_placement_optimizer__action__OptimizePlacement_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    base_placement_optimizer__action__OptimizePlacement_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!base_placement_optimizer__action__OptimizePlacement_Goal__init(&msg->goal)) {
    base_placement_optimizer__action__OptimizePlacement_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
base_placement_optimizer__action__OptimizePlacement_SendGoal_Request__fini(base_placement_optimizer__action__OptimizePlacement_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  base_placement_optimizer__action__OptimizePlacement_Goal__fini(&msg->goal);
}

bool
base_placement_optimizer__action__OptimizePlacement_SendGoal_Request__are_equal(const base_placement_optimizer__action__OptimizePlacement_SendGoal_Request * lhs, const base_placement_optimizer__action__OptimizePlacement_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!base_placement_optimizer__action__OptimizePlacement_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
base_placement_optimizer__action__OptimizePlacement_SendGoal_Request__copy(
  const base_placement_optimizer__action__OptimizePlacement_SendGoal_Request * input,
  base_placement_optimizer__action__OptimizePlacement_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!base_placement_optimizer__action__OptimizePlacement_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

base_placement_optimizer__action__OptimizePlacement_SendGoal_Request *
base_placement_optimizer__action__OptimizePlacement_SendGoal_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_placement_optimizer__action__OptimizePlacement_SendGoal_Request * msg = (base_placement_optimizer__action__OptimizePlacement_SendGoal_Request *)allocator.allocate(sizeof(base_placement_optimizer__action__OptimizePlacement_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(base_placement_optimizer__action__OptimizePlacement_SendGoal_Request));
  bool success = base_placement_optimizer__action__OptimizePlacement_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
base_placement_optimizer__action__OptimizePlacement_SendGoal_Request__destroy(base_placement_optimizer__action__OptimizePlacement_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    base_placement_optimizer__action__OptimizePlacement_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
base_placement_optimizer__action__OptimizePlacement_SendGoal_Request__Sequence__init(base_placement_optimizer__action__OptimizePlacement_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_placement_optimizer__action__OptimizePlacement_SendGoal_Request * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(base_placement_optimizer__action__OptimizePlacement_SendGoal_Request)) {
      return false;
    }
    data = (base_placement_optimizer__action__OptimizePlacement_SendGoal_Request *)allocator.zero_allocate(size, sizeof(base_placement_optimizer__action__OptimizePlacement_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = base_placement_optimizer__action__OptimizePlacement_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        base_placement_optimizer__action__OptimizePlacement_SendGoal_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
base_placement_optimizer__action__OptimizePlacement_SendGoal_Request__Sequence__fini(base_placement_optimizer__action__OptimizePlacement_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      base_placement_optimizer__action__OptimizePlacement_SendGoal_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

base_placement_optimizer__action__OptimizePlacement_SendGoal_Request__Sequence *
base_placement_optimizer__action__OptimizePlacement_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_placement_optimizer__action__OptimizePlacement_SendGoal_Request__Sequence * array = (base_placement_optimizer__action__OptimizePlacement_SendGoal_Request__Sequence *)allocator.allocate(sizeof(base_placement_optimizer__action__OptimizePlacement_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = base_placement_optimizer__action__OptimizePlacement_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
base_placement_optimizer__action__OptimizePlacement_SendGoal_Request__Sequence__destroy(base_placement_optimizer__action__OptimizePlacement_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    base_placement_optimizer__action__OptimizePlacement_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
base_placement_optimizer__action__OptimizePlacement_SendGoal_Request__Sequence__are_equal(const base_placement_optimizer__action__OptimizePlacement_SendGoal_Request__Sequence * lhs, const base_placement_optimizer__action__OptimizePlacement_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!base_placement_optimizer__action__OptimizePlacement_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
base_placement_optimizer__action__OptimizePlacement_SendGoal_Request__Sequence__copy(
  const base_placement_optimizer__action__OptimizePlacement_SendGoal_Request__Sequence * input,
  base_placement_optimizer__action__OptimizePlacement_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(base_placement_optimizer__action__OptimizePlacement_SendGoal_Request)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(base_placement_optimizer__action__OptimizePlacement_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    base_placement_optimizer__action__OptimizePlacement_SendGoal_Request * data =
      (base_placement_optimizer__action__OptimizePlacement_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!base_placement_optimizer__action__OptimizePlacement_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          base_placement_optimizer__action__OptimizePlacement_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!base_placement_optimizer__action__OptimizePlacement_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
base_placement_optimizer__action__OptimizePlacement_SendGoal_Response__init(base_placement_optimizer__action__OptimizePlacement_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    base_placement_optimizer__action__OptimizePlacement_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
base_placement_optimizer__action__OptimizePlacement_SendGoal_Response__fini(base_placement_optimizer__action__OptimizePlacement_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
base_placement_optimizer__action__OptimizePlacement_SendGoal_Response__are_equal(const base_placement_optimizer__action__OptimizePlacement_SendGoal_Response * lhs, const base_placement_optimizer__action__OptimizePlacement_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
base_placement_optimizer__action__OptimizePlacement_SendGoal_Response__copy(
  const base_placement_optimizer__action__OptimizePlacement_SendGoal_Response * input,
  base_placement_optimizer__action__OptimizePlacement_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

base_placement_optimizer__action__OptimizePlacement_SendGoal_Response *
base_placement_optimizer__action__OptimizePlacement_SendGoal_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_placement_optimizer__action__OptimizePlacement_SendGoal_Response * msg = (base_placement_optimizer__action__OptimizePlacement_SendGoal_Response *)allocator.allocate(sizeof(base_placement_optimizer__action__OptimizePlacement_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(base_placement_optimizer__action__OptimizePlacement_SendGoal_Response));
  bool success = base_placement_optimizer__action__OptimizePlacement_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
base_placement_optimizer__action__OptimizePlacement_SendGoal_Response__destroy(base_placement_optimizer__action__OptimizePlacement_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    base_placement_optimizer__action__OptimizePlacement_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
base_placement_optimizer__action__OptimizePlacement_SendGoal_Response__Sequence__init(base_placement_optimizer__action__OptimizePlacement_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_placement_optimizer__action__OptimizePlacement_SendGoal_Response * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(base_placement_optimizer__action__OptimizePlacement_SendGoal_Response)) {
      return false;
    }
    data = (base_placement_optimizer__action__OptimizePlacement_SendGoal_Response *)allocator.zero_allocate(size, sizeof(base_placement_optimizer__action__OptimizePlacement_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = base_placement_optimizer__action__OptimizePlacement_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        base_placement_optimizer__action__OptimizePlacement_SendGoal_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
base_placement_optimizer__action__OptimizePlacement_SendGoal_Response__Sequence__fini(base_placement_optimizer__action__OptimizePlacement_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      base_placement_optimizer__action__OptimizePlacement_SendGoal_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

base_placement_optimizer__action__OptimizePlacement_SendGoal_Response__Sequence *
base_placement_optimizer__action__OptimizePlacement_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_placement_optimizer__action__OptimizePlacement_SendGoal_Response__Sequence * array = (base_placement_optimizer__action__OptimizePlacement_SendGoal_Response__Sequence *)allocator.allocate(sizeof(base_placement_optimizer__action__OptimizePlacement_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = base_placement_optimizer__action__OptimizePlacement_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
base_placement_optimizer__action__OptimizePlacement_SendGoal_Response__Sequence__destroy(base_placement_optimizer__action__OptimizePlacement_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    base_placement_optimizer__action__OptimizePlacement_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
base_placement_optimizer__action__OptimizePlacement_SendGoal_Response__Sequence__are_equal(const base_placement_optimizer__action__OptimizePlacement_SendGoal_Response__Sequence * lhs, const base_placement_optimizer__action__OptimizePlacement_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!base_placement_optimizer__action__OptimizePlacement_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
base_placement_optimizer__action__OptimizePlacement_SendGoal_Response__Sequence__copy(
  const base_placement_optimizer__action__OptimizePlacement_SendGoal_Response__Sequence * input,
  base_placement_optimizer__action__OptimizePlacement_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(base_placement_optimizer__action__OptimizePlacement_SendGoal_Response)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(base_placement_optimizer__action__OptimizePlacement_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    base_placement_optimizer__action__OptimizePlacement_SendGoal_Response * data =
      (base_placement_optimizer__action__OptimizePlacement_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!base_placement_optimizer__action__OptimizePlacement_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          base_placement_optimizer__action__OptimizePlacement_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!base_placement_optimizer__action__OptimizePlacement_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "base_placement_optimizer/action/detail/optimize_placement__functions.h"

bool
base_placement_optimizer__action__OptimizePlacement_SendGoal_Event__init(base_placement_optimizer__action__OptimizePlacement_SendGoal_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    base_placement_optimizer__action__OptimizePlacement_SendGoal_Event__fini(msg);
    return false;
  }
  // request
  if (!base_placement_optimizer__action__OptimizePlacement_SendGoal_Request__Sequence__init(&msg->request, 0)) {
    base_placement_optimizer__action__OptimizePlacement_SendGoal_Event__fini(msg);
    return false;
  }
  // response
  if (!base_placement_optimizer__action__OptimizePlacement_SendGoal_Response__Sequence__init(&msg->response, 0)) {
    base_placement_optimizer__action__OptimizePlacement_SendGoal_Event__fini(msg);
    return false;
  }
  return true;
}

void
base_placement_optimizer__action__OptimizePlacement_SendGoal_Event__fini(base_placement_optimizer__action__OptimizePlacement_SendGoal_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  base_placement_optimizer__action__OptimizePlacement_SendGoal_Request__Sequence__fini(&msg->request);
  // response
  base_placement_optimizer__action__OptimizePlacement_SendGoal_Response__Sequence__fini(&msg->response);
}

bool
base_placement_optimizer__action__OptimizePlacement_SendGoal_Event__are_equal(const base_placement_optimizer__action__OptimizePlacement_SendGoal_Event * lhs, const base_placement_optimizer__action__OptimizePlacement_SendGoal_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!base_placement_optimizer__action__OptimizePlacement_SendGoal_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!base_placement_optimizer__action__OptimizePlacement_SendGoal_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
base_placement_optimizer__action__OptimizePlacement_SendGoal_Event__copy(
  const base_placement_optimizer__action__OptimizePlacement_SendGoal_Event * input,
  base_placement_optimizer__action__OptimizePlacement_SendGoal_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!base_placement_optimizer__action__OptimizePlacement_SendGoal_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!base_placement_optimizer__action__OptimizePlacement_SendGoal_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

base_placement_optimizer__action__OptimizePlacement_SendGoal_Event *
base_placement_optimizer__action__OptimizePlacement_SendGoal_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_placement_optimizer__action__OptimizePlacement_SendGoal_Event * msg = (base_placement_optimizer__action__OptimizePlacement_SendGoal_Event *)allocator.allocate(sizeof(base_placement_optimizer__action__OptimizePlacement_SendGoal_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(base_placement_optimizer__action__OptimizePlacement_SendGoal_Event));
  bool success = base_placement_optimizer__action__OptimizePlacement_SendGoal_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
base_placement_optimizer__action__OptimizePlacement_SendGoal_Event__destroy(base_placement_optimizer__action__OptimizePlacement_SendGoal_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    base_placement_optimizer__action__OptimizePlacement_SendGoal_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
base_placement_optimizer__action__OptimizePlacement_SendGoal_Event__Sequence__init(base_placement_optimizer__action__OptimizePlacement_SendGoal_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_placement_optimizer__action__OptimizePlacement_SendGoal_Event * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(base_placement_optimizer__action__OptimizePlacement_SendGoal_Event)) {
      return false;
    }
    data = (base_placement_optimizer__action__OptimizePlacement_SendGoal_Event *)allocator.zero_allocate(size, sizeof(base_placement_optimizer__action__OptimizePlacement_SendGoal_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = base_placement_optimizer__action__OptimizePlacement_SendGoal_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        base_placement_optimizer__action__OptimizePlacement_SendGoal_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
base_placement_optimizer__action__OptimizePlacement_SendGoal_Event__Sequence__fini(base_placement_optimizer__action__OptimizePlacement_SendGoal_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      base_placement_optimizer__action__OptimizePlacement_SendGoal_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

base_placement_optimizer__action__OptimizePlacement_SendGoal_Event__Sequence *
base_placement_optimizer__action__OptimizePlacement_SendGoal_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_placement_optimizer__action__OptimizePlacement_SendGoal_Event__Sequence * array = (base_placement_optimizer__action__OptimizePlacement_SendGoal_Event__Sequence *)allocator.allocate(sizeof(base_placement_optimizer__action__OptimizePlacement_SendGoal_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = base_placement_optimizer__action__OptimizePlacement_SendGoal_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
base_placement_optimizer__action__OptimizePlacement_SendGoal_Event__Sequence__destroy(base_placement_optimizer__action__OptimizePlacement_SendGoal_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    base_placement_optimizer__action__OptimizePlacement_SendGoal_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
base_placement_optimizer__action__OptimizePlacement_SendGoal_Event__Sequence__are_equal(const base_placement_optimizer__action__OptimizePlacement_SendGoal_Event__Sequence * lhs, const base_placement_optimizer__action__OptimizePlacement_SendGoal_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!base_placement_optimizer__action__OptimizePlacement_SendGoal_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
base_placement_optimizer__action__OptimizePlacement_SendGoal_Event__Sequence__copy(
  const base_placement_optimizer__action__OptimizePlacement_SendGoal_Event__Sequence * input,
  base_placement_optimizer__action__OptimizePlacement_SendGoal_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(base_placement_optimizer__action__OptimizePlacement_SendGoal_Event)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(base_placement_optimizer__action__OptimizePlacement_SendGoal_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    base_placement_optimizer__action__OptimizePlacement_SendGoal_Event * data =
      (base_placement_optimizer__action__OptimizePlacement_SendGoal_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!base_placement_optimizer__action__OptimizePlacement_SendGoal_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          base_placement_optimizer__action__OptimizePlacement_SendGoal_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!base_placement_optimizer__action__OptimizePlacement_SendGoal_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
base_placement_optimizer__action__OptimizePlacement_GetResult_Request__init(base_placement_optimizer__action__OptimizePlacement_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    base_placement_optimizer__action__OptimizePlacement_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
base_placement_optimizer__action__OptimizePlacement_GetResult_Request__fini(base_placement_optimizer__action__OptimizePlacement_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
base_placement_optimizer__action__OptimizePlacement_GetResult_Request__are_equal(const base_placement_optimizer__action__OptimizePlacement_GetResult_Request * lhs, const base_placement_optimizer__action__OptimizePlacement_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
base_placement_optimizer__action__OptimizePlacement_GetResult_Request__copy(
  const base_placement_optimizer__action__OptimizePlacement_GetResult_Request * input,
  base_placement_optimizer__action__OptimizePlacement_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

base_placement_optimizer__action__OptimizePlacement_GetResult_Request *
base_placement_optimizer__action__OptimizePlacement_GetResult_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_placement_optimizer__action__OptimizePlacement_GetResult_Request * msg = (base_placement_optimizer__action__OptimizePlacement_GetResult_Request *)allocator.allocate(sizeof(base_placement_optimizer__action__OptimizePlacement_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(base_placement_optimizer__action__OptimizePlacement_GetResult_Request));
  bool success = base_placement_optimizer__action__OptimizePlacement_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
base_placement_optimizer__action__OptimizePlacement_GetResult_Request__destroy(base_placement_optimizer__action__OptimizePlacement_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    base_placement_optimizer__action__OptimizePlacement_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
base_placement_optimizer__action__OptimizePlacement_GetResult_Request__Sequence__init(base_placement_optimizer__action__OptimizePlacement_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_placement_optimizer__action__OptimizePlacement_GetResult_Request * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(base_placement_optimizer__action__OptimizePlacement_GetResult_Request)) {
      return false;
    }
    data = (base_placement_optimizer__action__OptimizePlacement_GetResult_Request *)allocator.zero_allocate(size, sizeof(base_placement_optimizer__action__OptimizePlacement_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = base_placement_optimizer__action__OptimizePlacement_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        base_placement_optimizer__action__OptimizePlacement_GetResult_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
base_placement_optimizer__action__OptimizePlacement_GetResult_Request__Sequence__fini(base_placement_optimizer__action__OptimizePlacement_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      base_placement_optimizer__action__OptimizePlacement_GetResult_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

base_placement_optimizer__action__OptimizePlacement_GetResult_Request__Sequence *
base_placement_optimizer__action__OptimizePlacement_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_placement_optimizer__action__OptimizePlacement_GetResult_Request__Sequence * array = (base_placement_optimizer__action__OptimizePlacement_GetResult_Request__Sequence *)allocator.allocate(sizeof(base_placement_optimizer__action__OptimizePlacement_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = base_placement_optimizer__action__OptimizePlacement_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
base_placement_optimizer__action__OptimizePlacement_GetResult_Request__Sequence__destroy(base_placement_optimizer__action__OptimizePlacement_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    base_placement_optimizer__action__OptimizePlacement_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
base_placement_optimizer__action__OptimizePlacement_GetResult_Request__Sequence__are_equal(const base_placement_optimizer__action__OptimizePlacement_GetResult_Request__Sequence * lhs, const base_placement_optimizer__action__OptimizePlacement_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!base_placement_optimizer__action__OptimizePlacement_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
base_placement_optimizer__action__OptimizePlacement_GetResult_Request__Sequence__copy(
  const base_placement_optimizer__action__OptimizePlacement_GetResult_Request__Sequence * input,
  base_placement_optimizer__action__OptimizePlacement_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(base_placement_optimizer__action__OptimizePlacement_GetResult_Request)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(base_placement_optimizer__action__OptimizePlacement_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    base_placement_optimizer__action__OptimizePlacement_GetResult_Request * data =
      (base_placement_optimizer__action__OptimizePlacement_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!base_placement_optimizer__action__OptimizePlacement_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          base_placement_optimizer__action__OptimizePlacement_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!base_placement_optimizer__action__OptimizePlacement_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "base_placement_optimizer/action/detail/optimize_placement__functions.h"

bool
base_placement_optimizer__action__OptimizePlacement_GetResult_Response__init(base_placement_optimizer__action__OptimizePlacement_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!base_placement_optimizer__action__OptimizePlacement_Result__init(&msg->result)) {
    base_placement_optimizer__action__OptimizePlacement_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
base_placement_optimizer__action__OptimizePlacement_GetResult_Response__fini(base_placement_optimizer__action__OptimizePlacement_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  base_placement_optimizer__action__OptimizePlacement_Result__fini(&msg->result);
}

bool
base_placement_optimizer__action__OptimizePlacement_GetResult_Response__are_equal(const base_placement_optimizer__action__OptimizePlacement_GetResult_Response * lhs, const base_placement_optimizer__action__OptimizePlacement_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!base_placement_optimizer__action__OptimizePlacement_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
base_placement_optimizer__action__OptimizePlacement_GetResult_Response__copy(
  const base_placement_optimizer__action__OptimizePlacement_GetResult_Response * input,
  base_placement_optimizer__action__OptimizePlacement_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!base_placement_optimizer__action__OptimizePlacement_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

base_placement_optimizer__action__OptimizePlacement_GetResult_Response *
base_placement_optimizer__action__OptimizePlacement_GetResult_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_placement_optimizer__action__OptimizePlacement_GetResult_Response * msg = (base_placement_optimizer__action__OptimizePlacement_GetResult_Response *)allocator.allocate(sizeof(base_placement_optimizer__action__OptimizePlacement_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(base_placement_optimizer__action__OptimizePlacement_GetResult_Response));
  bool success = base_placement_optimizer__action__OptimizePlacement_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
base_placement_optimizer__action__OptimizePlacement_GetResult_Response__destroy(base_placement_optimizer__action__OptimizePlacement_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    base_placement_optimizer__action__OptimizePlacement_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
base_placement_optimizer__action__OptimizePlacement_GetResult_Response__Sequence__init(base_placement_optimizer__action__OptimizePlacement_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_placement_optimizer__action__OptimizePlacement_GetResult_Response * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(base_placement_optimizer__action__OptimizePlacement_GetResult_Response)) {
      return false;
    }
    data = (base_placement_optimizer__action__OptimizePlacement_GetResult_Response *)allocator.zero_allocate(size, sizeof(base_placement_optimizer__action__OptimizePlacement_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = base_placement_optimizer__action__OptimizePlacement_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        base_placement_optimizer__action__OptimizePlacement_GetResult_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
base_placement_optimizer__action__OptimizePlacement_GetResult_Response__Sequence__fini(base_placement_optimizer__action__OptimizePlacement_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      base_placement_optimizer__action__OptimizePlacement_GetResult_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

base_placement_optimizer__action__OptimizePlacement_GetResult_Response__Sequence *
base_placement_optimizer__action__OptimizePlacement_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_placement_optimizer__action__OptimizePlacement_GetResult_Response__Sequence * array = (base_placement_optimizer__action__OptimizePlacement_GetResult_Response__Sequence *)allocator.allocate(sizeof(base_placement_optimizer__action__OptimizePlacement_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = base_placement_optimizer__action__OptimizePlacement_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
base_placement_optimizer__action__OptimizePlacement_GetResult_Response__Sequence__destroy(base_placement_optimizer__action__OptimizePlacement_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    base_placement_optimizer__action__OptimizePlacement_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
base_placement_optimizer__action__OptimizePlacement_GetResult_Response__Sequence__are_equal(const base_placement_optimizer__action__OptimizePlacement_GetResult_Response__Sequence * lhs, const base_placement_optimizer__action__OptimizePlacement_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!base_placement_optimizer__action__OptimizePlacement_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
base_placement_optimizer__action__OptimizePlacement_GetResult_Response__Sequence__copy(
  const base_placement_optimizer__action__OptimizePlacement_GetResult_Response__Sequence * input,
  base_placement_optimizer__action__OptimizePlacement_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(base_placement_optimizer__action__OptimizePlacement_GetResult_Response)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(base_placement_optimizer__action__OptimizePlacement_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    base_placement_optimizer__action__OptimizePlacement_GetResult_Response * data =
      (base_placement_optimizer__action__OptimizePlacement_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!base_placement_optimizer__action__OptimizePlacement_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          base_placement_optimizer__action__OptimizePlacement_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!base_placement_optimizer__action__OptimizePlacement_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
// already included above
// #include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "base_placement_optimizer/action/detail/optimize_placement__functions.h"

bool
base_placement_optimizer__action__OptimizePlacement_GetResult_Event__init(base_placement_optimizer__action__OptimizePlacement_GetResult_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    base_placement_optimizer__action__OptimizePlacement_GetResult_Event__fini(msg);
    return false;
  }
  // request
  if (!base_placement_optimizer__action__OptimizePlacement_GetResult_Request__Sequence__init(&msg->request, 0)) {
    base_placement_optimizer__action__OptimizePlacement_GetResult_Event__fini(msg);
    return false;
  }
  // response
  if (!base_placement_optimizer__action__OptimizePlacement_GetResult_Response__Sequence__init(&msg->response, 0)) {
    base_placement_optimizer__action__OptimizePlacement_GetResult_Event__fini(msg);
    return false;
  }
  return true;
}

void
base_placement_optimizer__action__OptimizePlacement_GetResult_Event__fini(base_placement_optimizer__action__OptimizePlacement_GetResult_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  base_placement_optimizer__action__OptimizePlacement_GetResult_Request__Sequence__fini(&msg->request);
  // response
  base_placement_optimizer__action__OptimizePlacement_GetResult_Response__Sequence__fini(&msg->response);
}

bool
base_placement_optimizer__action__OptimizePlacement_GetResult_Event__are_equal(const base_placement_optimizer__action__OptimizePlacement_GetResult_Event * lhs, const base_placement_optimizer__action__OptimizePlacement_GetResult_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!base_placement_optimizer__action__OptimizePlacement_GetResult_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!base_placement_optimizer__action__OptimizePlacement_GetResult_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
base_placement_optimizer__action__OptimizePlacement_GetResult_Event__copy(
  const base_placement_optimizer__action__OptimizePlacement_GetResult_Event * input,
  base_placement_optimizer__action__OptimizePlacement_GetResult_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!base_placement_optimizer__action__OptimizePlacement_GetResult_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!base_placement_optimizer__action__OptimizePlacement_GetResult_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

base_placement_optimizer__action__OptimizePlacement_GetResult_Event *
base_placement_optimizer__action__OptimizePlacement_GetResult_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_placement_optimizer__action__OptimizePlacement_GetResult_Event * msg = (base_placement_optimizer__action__OptimizePlacement_GetResult_Event *)allocator.allocate(sizeof(base_placement_optimizer__action__OptimizePlacement_GetResult_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(base_placement_optimizer__action__OptimizePlacement_GetResult_Event));
  bool success = base_placement_optimizer__action__OptimizePlacement_GetResult_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
base_placement_optimizer__action__OptimizePlacement_GetResult_Event__destroy(base_placement_optimizer__action__OptimizePlacement_GetResult_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    base_placement_optimizer__action__OptimizePlacement_GetResult_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
base_placement_optimizer__action__OptimizePlacement_GetResult_Event__Sequence__init(base_placement_optimizer__action__OptimizePlacement_GetResult_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_placement_optimizer__action__OptimizePlacement_GetResult_Event * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(base_placement_optimizer__action__OptimizePlacement_GetResult_Event)) {
      return false;
    }
    data = (base_placement_optimizer__action__OptimizePlacement_GetResult_Event *)allocator.zero_allocate(size, sizeof(base_placement_optimizer__action__OptimizePlacement_GetResult_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = base_placement_optimizer__action__OptimizePlacement_GetResult_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        base_placement_optimizer__action__OptimizePlacement_GetResult_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
base_placement_optimizer__action__OptimizePlacement_GetResult_Event__Sequence__fini(base_placement_optimizer__action__OptimizePlacement_GetResult_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      base_placement_optimizer__action__OptimizePlacement_GetResult_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

base_placement_optimizer__action__OptimizePlacement_GetResult_Event__Sequence *
base_placement_optimizer__action__OptimizePlacement_GetResult_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_placement_optimizer__action__OptimizePlacement_GetResult_Event__Sequence * array = (base_placement_optimizer__action__OptimizePlacement_GetResult_Event__Sequence *)allocator.allocate(sizeof(base_placement_optimizer__action__OptimizePlacement_GetResult_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = base_placement_optimizer__action__OptimizePlacement_GetResult_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
base_placement_optimizer__action__OptimizePlacement_GetResult_Event__Sequence__destroy(base_placement_optimizer__action__OptimizePlacement_GetResult_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    base_placement_optimizer__action__OptimizePlacement_GetResult_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
base_placement_optimizer__action__OptimizePlacement_GetResult_Event__Sequence__are_equal(const base_placement_optimizer__action__OptimizePlacement_GetResult_Event__Sequence * lhs, const base_placement_optimizer__action__OptimizePlacement_GetResult_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!base_placement_optimizer__action__OptimizePlacement_GetResult_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
base_placement_optimizer__action__OptimizePlacement_GetResult_Event__Sequence__copy(
  const base_placement_optimizer__action__OptimizePlacement_GetResult_Event__Sequence * input,
  base_placement_optimizer__action__OptimizePlacement_GetResult_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(base_placement_optimizer__action__OptimizePlacement_GetResult_Event)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(base_placement_optimizer__action__OptimizePlacement_GetResult_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    base_placement_optimizer__action__OptimizePlacement_GetResult_Event * data =
      (base_placement_optimizer__action__OptimizePlacement_GetResult_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!base_placement_optimizer__action__OptimizePlacement_GetResult_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          base_placement_optimizer__action__OptimizePlacement_GetResult_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!base_placement_optimizer__action__OptimizePlacement_GetResult_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "base_placement_optimizer/action/detail/optimize_placement__functions.h"

bool
base_placement_optimizer__action__OptimizePlacement_FeedbackMessage__init(base_placement_optimizer__action__OptimizePlacement_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    base_placement_optimizer__action__OptimizePlacement_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!base_placement_optimizer__action__OptimizePlacement_Feedback__init(&msg->feedback)) {
    base_placement_optimizer__action__OptimizePlacement_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
base_placement_optimizer__action__OptimizePlacement_FeedbackMessage__fini(base_placement_optimizer__action__OptimizePlacement_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  base_placement_optimizer__action__OptimizePlacement_Feedback__fini(&msg->feedback);
}

bool
base_placement_optimizer__action__OptimizePlacement_FeedbackMessage__are_equal(const base_placement_optimizer__action__OptimizePlacement_FeedbackMessage * lhs, const base_placement_optimizer__action__OptimizePlacement_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!base_placement_optimizer__action__OptimizePlacement_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
base_placement_optimizer__action__OptimizePlacement_FeedbackMessage__copy(
  const base_placement_optimizer__action__OptimizePlacement_FeedbackMessage * input,
  base_placement_optimizer__action__OptimizePlacement_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!base_placement_optimizer__action__OptimizePlacement_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

base_placement_optimizer__action__OptimizePlacement_FeedbackMessage *
base_placement_optimizer__action__OptimizePlacement_FeedbackMessage__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_placement_optimizer__action__OptimizePlacement_FeedbackMessage * msg = (base_placement_optimizer__action__OptimizePlacement_FeedbackMessage *)allocator.allocate(sizeof(base_placement_optimizer__action__OptimizePlacement_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(base_placement_optimizer__action__OptimizePlacement_FeedbackMessage));
  bool success = base_placement_optimizer__action__OptimizePlacement_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
base_placement_optimizer__action__OptimizePlacement_FeedbackMessage__destroy(base_placement_optimizer__action__OptimizePlacement_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    base_placement_optimizer__action__OptimizePlacement_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
base_placement_optimizer__action__OptimizePlacement_FeedbackMessage__Sequence__init(base_placement_optimizer__action__OptimizePlacement_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_placement_optimizer__action__OptimizePlacement_FeedbackMessage * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(base_placement_optimizer__action__OptimizePlacement_FeedbackMessage)) {
      return false;
    }
    data = (base_placement_optimizer__action__OptimizePlacement_FeedbackMessage *)allocator.zero_allocate(size, sizeof(base_placement_optimizer__action__OptimizePlacement_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = base_placement_optimizer__action__OptimizePlacement_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        base_placement_optimizer__action__OptimizePlacement_FeedbackMessage__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
base_placement_optimizer__action__OptimizePlacement_FeedbackMessage__Sequence__fini(base_placement_optimizer__action__OptimizePlacement_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      base_placement_optimizer__action__OptimizePlacement_FeedbackMessage__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

base_placement_optimizer__action__OptimizePlacement_FeedbackMessage__Sequence *
base_placement_optimizer__action__OptimizePlacement_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_placement_optimizer__action__OptimizePlacement_FeedbackMessage__Sequence * array = (base_placement_optimizer__action__OptimizePlacement_FeedbackMessage__Sequence *)allocator.allocate(sizeof(base_placement_optimizer__action__OptimizePlacement_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = base_placement_optimizer__action__OptimizePlacement_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
base_placement_optimizer__action__OptimizePlacement_FeedbackMessage__Sequence__destroy(base_placement_optimizer__action__OptimizePlacement_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    base_placement_optimizer__action__OptimizePlacement_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
base_placement_optimizer__action__OptimizePlacement_FeedbackMessage__Sequence__are_equal(const base_placement_optimizer__action__OptimizePlacement_FeedbackMessage__Sequence * lhs, const base_placement_optimizer__action__OptimizePlacement_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!base_placement_optimizer__action__OptimizePlacement_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
base_placement_optimizer__action__OptimizePlacement_FeedbackMessage__Sequence__copy(
  const base_placement_optimizer__action__OptimizePlacement_FeedbackMessage__Sequence * input,
  base_placement_optimizer__action__OptimizePlacement_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(base_placement_optimizer__action__OptimizePlacement_FeedbackMessage)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(base_placement_optimizer__action__OptimizePlacement_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    base_placement_optimizer__action__OptimizePlacement_FeedbackMessage * data =
      (base_placement_optimizer__action__OptimizePlacement_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!base_placement_optimizer__action__OptimizePlacement_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          base_placement_optimizer__action__OptimizePlacement_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!base_placement_optimizer__action__OptimizePlacement_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
