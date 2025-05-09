// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from robomaster_msgs:msg/ServoCommand.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__MSG__DETAIL__SERVO_COMMAND__FUNCTIONS_H_
#define ROBOMASTER_MSGS__MSG__DETAIL__SERVO_COMMAND__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "robomaster_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "robomaster_msgs/msg/detail/servo_command__struct.h"

/// Initialize msg/ServoCommand message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robomaster_msgs__msg__ServoCommand
 * )) before or use
 * robomaster_msgs__msg__ServoCommand__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
bool
robomaster_msgs__msg__ServoCommand__init(robomaster_msgs__msg__ServoCommand * msg);

/// Finalize msg/ServoCommand message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
void
robomaster_msgs__msg__ServoCommand__fini(robomaster_msgs__msg__ServoCommand * msg);

/// Create msg/ServoCommand message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robomaster_msgs__msg__ServoCommand__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
robomaster_msgs__msg__ServoCommand *
robomaster_msgs__msg__ServoCommand__create();

/// Destroy msg/ServoCommand message.
/**
 * It calls
 * robomaster_msgs__msg__ServoCommand__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
void
robomaster_msgs__msg__ServoCommand__destroy(robomaster_msgs__msg__ServoCommand * msg);

/// Check for msg/ServoCommand message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
bool
robomaster_msgs__msg__ServoCommand__are_equal(const robomaster_msgs__msg__ServoCommand * lhs, const robomaster_msgs__msg__ServoCommand * rhs);

/// Copy a msg/ServoCommand message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
bool
robomaster_msgs__msg__ServoCommand__copy(
  const robomaster_msgs__msg__ServoCommand * input,
  robomaster_msgs__msg__ServoCommand * output);

/// Initialize array of msg/ServoCommand messages.
/**
 * It allocates the memory for the number of elements and calls
 * robomaster_msgs__msg__ServoCommand__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
bool
robomaster_msgs__msg__ServoCommand__Sequence__init(robomaster_msgs__msg__ServoCommand__Sequence * array, size_t size);

/// Finalize array of msg/ServoCommand messages.
/**
 * It calls
 * robomaster_msgs__msg__ServoCommand__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
void
robomaster_msgs__msg__ServoCommand__Sequence__fini(robomaster_msgs__msg__ServoCommand__Sequence * array);

/// Create array of msg/ServoCommand messages.
/**
 * It allocates the memory for the array and calls
 * robomaster_msgs__msg__ServoCommand__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
robomaster_msgs__msg__ServoCommand__Sequence *
robomaster_msgs__msg__ServoCommand__Sequence__create(size_t size);

/// Destroy array of msg/ServoCommand messages.
/**
 * It calls
 * robomaster_msgs__msg__ServoCommand__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
void
robomaster_msgs__msg__ServoCommand__Sequence__destroy(robomaster_msgs__msg__ServoCommand__Sequence * array);

/// Check for msg/ServoCommand message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
bool
robomaster_msgs__msg__ServoCommand__Sequence__are_equal(const robomaster_msgs__msg__ServoCommand__Sequence * lhs, const robomaster_msgs__msg__ServoCommand__Sequence * rhs);

/// Copy an array of msg/ServoCommand messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
bool
robomaster_msgs__msg__ServoCommand__Sequence__copy(
  const robomaster_msgs__msg__ServoCommand__Sequence * input,
  robomaster_msgs__msg__ServoCommand__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ROBOMASTER_MSGS__MSG__DETAIL__SERVO_COMMAND__FUNCTIONS_H_
