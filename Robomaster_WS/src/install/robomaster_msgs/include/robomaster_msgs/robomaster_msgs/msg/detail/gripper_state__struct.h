// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robomaster_msgs:msg/GripperState.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__MSG__DETAIL__GRIPPER_STATE__STRUCT_H_
#define ROBOMASTER_MSGS__MSG__DETAIL__GRIPPER_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'PAUSE'.
/**
  * Gripper inactive
 */
enum
{
  robomaster_msgs__msg__GripperState__PAUSE = 0
};

/// Constant 'OPEN'.
/**
  * Gripper open
 */
enum
{
  robomaster_msgs__msg__GripperState__OPEN = 1
};

/// Constant 'CLOSE'.
/**
  * Gripper closed
 */
enum
{
  robomaster_msgs__msg__GripperState__CLOSE = 2
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/GripperState in the package robomaster_msgs.
/**
  * State of the gripper
 */
typedef struct robomaster_msgs__msg__GripperState
{
  /// header with the time stamp of the update
  std_msgs__msg__Header header;
  /// one of ``PAUSE``. ``OPEN``. or ``CLOSE``
  uint8_t state;
} robomaster_msgs__msg__GripperState;

// Struct for a sequence of robomaster_msgs__msg__GripperState.
typedef struct robomaster_msgs__msg__GripperState__Sequence
{
  robomaster_msgs__msg__GripperState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robomaster_msgs__msg__GripperState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOMASTER_MSGS__MSG__DETAIL__GRIPPER_STATE__STRUCT_H_
