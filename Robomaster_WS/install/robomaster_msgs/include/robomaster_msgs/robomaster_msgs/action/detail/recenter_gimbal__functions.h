// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from robomaster_msgs:action/RecenterGimbal.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__ACTION__DETAIL__RECENTER_GIMBAL__FUNCTIONS_H_
#define ROBOMASTER_MSGS__ACTION__DETAIL__RECENTER_GIMBAL__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "robomaster_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "robomaster_msgs/action/detail/recenter_gimbal__struct.h"

/// Initialize action/RecenterGimbal message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robomaster_msgs__action__RecenterGimbal_Goal
 * )) before or use
 * robomaster_msgs__action__RecenterGimbal_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
bool
robomaster_msgs__action__RecenterGimbal_Goal__init(robomaster_msgs__action__RecenterGimbal_Goal * msg);

/// Finalize action/RecenterGimbal message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
void
robomaster_msgs__action__RecenterGimbal_Goal__fini(robomaster_msgs__action__RecenterGimbal_Goal * msg);

/// Create action/RecenterGimbal message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robomaster_msgs__action__RecenterGimbal_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
robomaster_msgs__action__RecenterGimbal_Goal *
robomaster_msgs__action__RecenterGimbal_Goal__create();

/// Destroy action/RecenterGimbal message.
/**
 * It calls
 * robomaster_msgs__action__RecenterGimbal_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
void
robomaster_msgs__action__RecenterGimbal_Goal__destroy(robomaster_msgs__action__RecenterGimbal_Goal * msg);

/// Check for action/RecenterGimbal message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
bool
robomaster_msgs__action__RecenterGimbal_Goal__are_equal(const robomaster_msgs__action__RecenterGimbal_Goal * lhs, const robomaster_msgs__action__RecenterGimbal_Goal * rhs);

/// Copy a action/RecenterGimbal message.
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
robomaster_msgs__action__RecenterGimbal_Goal__copy(
  const robomaster_msgs__action__RecenterGimbal_Goal * input,
  robomaster_msgs__action__RecenterGimbal_Goal * output);

/// Initialize array of action/RecenterGimbal messages.
/**
 * It allocates the memory for the number of elements and calls
 * robomaster_msgs__action__RecenterGimbal_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
bool
robomaster_msgs__action__RecenterGimbal_Goal__Sequence__init(robomaster_msgs__action__RecenterGimbal_Goal__Sequence * array, size_t size);

/// Finalize array of action/RecenterGimbal messages.
/**
 * It calls
 * robomaster_msgs__action__RecenterGimbal_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
void
robomaster_msgs__action__RecenterGimbal_Goal__Sequence__fini(robomaster_msgs__action__RecenterGimbal_Goal__Sequence * array);

/// Create array of action/RecenterGimbal messages.
/**
 * It allocates the memory for the array and calls
 * robomaster_msgs__action__RecenterGimbal_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
robomaster_msgs__action__RecenterGimbal_Goal__Sequence *
robomaster_msgs__action__RecenterGimbal_Goal__Sequence__create(size_t size);

/// Destroy array of action/RecenterGimbal messages.
/**
 * It calls
 * robomaster_msgs__action__RecenterGimbal_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
void
robomaster_msgs__action__RecenterGimbal_Goal__Sequence__destroy(robomaster_msgs__action__RecenterGimbal_Goal__Sequence * array);

/// Check for action/RecenterGimbal message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
bool
robomaster_msgs__action__RecenterGimbal_Goal__Sequence__are_equal(const robomaster_msgs__action__RecenterGimbal_Goal__Sequence * lhs, const robomaster_msgs__action__RecenterGimbal_Goal__Sequence * rhs);

/// Copy an array of action/RecenterGimbal messages.
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
robomaster_msgs__action__RecenterGimbal_Goal__Sequence__copy(
  const robomaster_msgs__action__RecenterGimbal_Goal__Sequence * input,
  robomaster_msgs__action__RecenterGimbal_Goal__Sequence * output);

/// Initialize action/RecenterGimbal message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robomaster_msgs__action__RecenterGimbal_Result
 * )) before or use
 * robomaster_msgs__action__RecenterGimbal_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
bool
robomaster_msgs__action__RecenterGimbal_Result__init(robomaster_msgs__action__RecenterGimbal_Result * msg);

/// Finalize action/RecenterGimbal message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
void
robomaster_msgs__action__RecenterGimbal_Result__fini(robomaster_msgs__action__RecenterGimbal_Result * msg);

/// Create action/RecenterGimbal message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robomaster_msgs__action__RecenterGimbal_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
robomaster_msgs__action__RecenterGimbal_Result *
robomaster_msgs__action__RecenterGimbal_Result__create();

/// Destroy action/RecenterGimbal message.
/**
 * It calls
 * robomaster_msgs__action__RecenterGimbal_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
void
robomaster_msgs__action__RecenterGimbal_Result__destroy(robomaster_msgs__action__RecenterGimbal_Result * msg);

/// Check for action/RecenterGimbal message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
bool
robomaster_msgs__action__RecenterGimbal_Result__are_equal(const robomaster_msgs__action__RecenterGimbal_Result * lhs, const robomaster_msgs__action__RecenterGimbal_Result * rhs);

/// Copy a action/RecenterGimbal message.
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
robomaster_msgs__action__RecenterGimbal_Result__copy(
  const robomaster_msgs__action__RecenterGimbal_Result * input,
  robomaster_msgs__action__RecenterGimbal_Result * output);

/// Initialize array of action/RecenterGimbal messages.
/**
 * It allocates the memory for the number of elements and calls
 * robomaster_msgs__action__RecenterGimbal_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
bool
robomaster_msgs__action__RecenterGimbal_Result__Sequence__init(robomaster_msgs__action__RecenterGimbal_Result__Sequence * array, size_t size);

/// Finalize array of action/RecenterGimbal messages.
/**
 * It calls
 * robomaster_msgs__action__RecenterGimbal_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
void
robomaster_msgs__action__RecenterGimbal_Result__Sequence__fini(robomaster_msgs__action__RecenterGimbal_Result__Sequence * array);

/// Create array of action/RecenterGimbal messages.
/**
 * It allocates the memory for the array and calls
 * robomaster_msgs__action__RecenterGimbal_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
robomaster_msgs__action__RecenterGimbal_Result__Sequence *
robomaster_msgs__action__RecenterGimbal_Result__Sequence__create(size_t size);

/// Destroy array of action/RecenterGimbal messages.
/**
 * It calls
 * robomaster_msgs__action__RecenterGimbal_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
void
robomaster_msgs__action__RecenterGimbal_Result__Sequence__destroy(robomaster_msgs__action__RecenterGimbal_Result__Sequence * array);

/// Check for action/RecenterGimbal message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
bool
robomaster_msgs__action__RecenterGimbal_Result__Sequence__are_equal(const robomaster_msgs__action__RecenterGimbal_Result__Sequence * lhs, const robomaster_msgs__action__RecenterGimbal_Result__Sequence * rhs);

/// Copy an array of action/RecenterGimbal messages.
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
robomaster_msgs__action__RecenterGimbal_Result__Sequence__copy(
  const robomaster_msgs__action__RecenterGimbal_Result__Sequence * input,
  robomaster_msgs__action__RecenterGimbal_Result__Sequence * output);

/// Initialize action/RecenterGimbal message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robomaster_msgs__action__RecenterGimbal_Feedback
 * )) before or use
 * robomaster_msgs__action__RecenterGimbal_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
bool
robomaster_msgs__action__RecenterGimbal_Feedback__init(robomaster_msgs__action__RecenterGimbal_Feedback * msg);

/// Finalize action/RecenterGimbal message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
void
robomaster_msgs__action__RecenterGimbal_Feedback__fini(robomaster_msgs__action__RecenterGimbal_Feedback * msg);

/// Create action/RecenterGimbal message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robomaster_msgs__action__RecenterGimbal_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
robomaster_msgs__action__RecenterGimbal_Feedback *
robomaster_msgs__action__RecenterGimbal_Feedback__create();

/// Destroy action/RecenterGimbal message.
/**
 * It calls
 * robomaster_msgs__action__RecenterGimbal_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
void
robomaster_msgs__action__RecenterGimbal_Feedback__destroy(robomaster_msgs__action__RecenterGimbal_Feedback * msg);

/// Check for action/RecenterGimbal message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
bool
robomaster_msgs__action__RecenterGimbal_Feedback__are_equal(const robomaster_msgs__action__RecenterGimbal_Feedback * lhs, const robomaster_msgs__action__RecenterGimbal_Feedback * rhs);

/// Copy a action/RecenterGimbal message.
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
robomaster_msgs__action__RecenterGimbal_Feedback__copy(
  const robomaster_msgs__action__RecenterGimbal_Feedback * input,
  robomaster_msgs__action__RecenterGimbal_Feedback * output);

/// Initialize array of action/RecenterGimbal messages.
/**
 * It allocates the memory for the number of elements and calls
 * robomaster_msgs__action__RecenterGimbal_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
bool
robomaster_msgs__action__RecenterGimbal_Feedback__Sequence__init(robomaster_msgs__action__RecenterGimbal_Feedback__Sequence * array, size_t size);

/// Finalize array of action/RecenterGimbal messages.
/**
 * It calls
 * robomaster_msgs__action__RecenterGimbal_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
void
robomaster_msgs__action__RecenterGimbal_Feedback__Sequence__fini(robomaster_msgs__action__RecenterGimbal_Feedback__Sequence * array);

/// Create array of action/RecenterGimbal messages.
/**
 * It allocates the memory for the array and calls
 * robomaster_msgs__action__RecenterGimbal_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
robomaster_msgs__action__RecenterGimbal_Feedback__Sequence *
robomaster_msgs__action__RecenterGimbal_Feedback__Sequence__create(size_t size);

/// Destroy array of action/RecenterGimbal messages.
/**
 * It calls
 * robomaster_msgs__action__RecenterGimbal_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
void
robomaster_msgs__action__RecenterGimbal_Feedback__Sequence__destroy(robomaster_msgs__action__RecenterGimbal_Feedback__Sequence * array);

/// Check for action/RecenterGimbal message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
bool
robomaster_msgs__action__RecenterGimbal_Feedback__Sequence__are_equal(const robomaster_msgs__action__RecenterGimbal_Feedback__Sequence * lhs, const robomaster_msgs__action__RecenterGimbal_Feedback__Sequence * rhs);

/// Copy an array of action/RecenterGimbal messages.
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
robomaster_msgs__action__RecenterGimbal_Feedback__Sequence__copy(
  const robomaster_msgs__action__RecenterGimbal_Feedback__Sequence * input,
  robomaster_msgs__action__RecenterGimbal_Feedback__Sequence * output);

/// Initialize action/RecenterGimbal message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robomaster_msgs__action__RecenterGimbal_SendGoal_Request
 * )) before or use
 * robomaster_msgs__action__RecenterGimbal_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
bool
robomaster_msgs__action__RecenterGimbal_SendGoal_Request__init(robomaster_msgs__action__RecenterGimbal_SendGoal_Request * msg);

/// Finalize action/RecenterGimbal message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
void
robomaster_msgs__action__RecenterGimbal_SendGoal_Request__fini(robomaster_msgs__action__RecenterGimbal_SendGoal_Request * msg);

/// Create action/RecenterGimbal message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robomaster_msgs__action__RecenterGimbal_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
robomaster_msgs__action__RecenterGimbal_SendGoal_Request *
robomaster_msgs__action__RecenterGimbal_SendGoal_Request__create();

/// Destroy action/RecenterGimbal message.
/**
 * It calls
 * robomaster_msgs__action__RecenterGimbal_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
void
robomaster_msgs__action__RecenterGimbal_SendGoal_Request__destroy(robomaster_msgs__action__RecenterGimbal_SendGoal_Request * msg);

/// Check for action/RecenterGimbal message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
bool
robomaster_msgs__action__RecenterGimbal_SendGoal_Request__are_equal(const robomaster_msgs__action__RecenterGimbal_SendGoal_Request * lhs, const robomaster_msgs__action__RecenterGimbal_SendGoal_Request * rhs);

/// Copy a action/RecenterGimbal message.
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
robomaster_msgs__action__RecenterGimbal_SendGoal_Request__copy(
  const robomaster_msgs__action__RecenterGimbal_SendGoal_Request * input,
  robomaster_msgs__action__RecenterGimbal_SendGoal_Request * output);

/// Initialize array of action/RecenterGimbal messages.
/**
 * It allocates the memory for the number of elements and calls
 * robomaster_msgs__action__RecenterGimbal_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
bool
robomaster_msgs__action__RecenterGimbal_SendGoal_Request__Sequence__init(robomaster_msgs__action__RecenterGimbal_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/RecenterGimbal messages.
/**
 * It calls
 * robomaster_msgs__action__RecenterGimbal_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
void
robomaster_msgs__action__RecenterGimbal_SendGoal_Request__Sequence__fini(robomaster_msgs__action__RecenterGimbal_SendGoal_Request__Sequence * array);

/// Create array of action/RecenterGimbal messages.
/**
 * It allocates the memory for the array and calls
 * robomaster_msgs__action__RecenterGimbal_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
robomaster_msgs__action__RecenterGimbal_SendGoal_Request__Sequence *
robomaster_msgs__action__RecenterGimbal_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/RecenterGimbal messages.
/**
 * It calls
 * robomaster_msgs__action__RecenterGimbal_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
void
robomaster_msgs__action__RecenterGimbal_SendGoal_Request__Sequence__destroy(robomaster_msgs__action__RecenterGimbal_SendGoal_Request__Sequence * array);

/// Check for action/RecenterGimbal message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
bool
robomaster_msgs__action__RecenterGimbal_SendGoal_Request__Sequence__are_equal(const robomaster_msgs__action__RecenterGimbal_SendGoal_Request__Sequence * lhs, const robomaster_msgs__action__RecenterGimbal_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/RecenterGimbal messages.
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
robomaster_msgs__action__RecenterGimbal_SendGoal_Request__Sequence__copy(
  const robomaster_msgs__action__RecenterGimbal_SendGoal_Request__Sequence * input,
  robomaster_msgs__action__RecenterGimbal_SendGoal_Request__Sequence * output);

/// Initialize action/RecenterGimbal message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robomaster_msgs__action__RecenterGimbal_SendGoal_Response
 * )) before or use
 * robomaster_msgs__action__RecenterGimbal_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
bool
robomaster_msgs__action__RecenterGimbal_SendGoal_Response__init(robomaster_msgs__action__RecenterGimbal_SendGoal_Response * msg);

/// Finalize action/RecenterGimbal message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
void
robomaster_msgs__action__RecenterGimbal_SendGoal_Response__fini(robomaster_msgs__action__RecenterGimbal_SendGoal_Response * msg);

/// Create action/RecenterGimbal message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robomaster_msgs__action__RecenterGimbal_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
robomaster_msgs__action__RecenterGimbal_SendGoal_Response *
robomaster_msgs__action__RecenterGimbal_SendGoal_Response__create();

/// Destroy action/RecenterGimbal message.
/**
 * It calls
 * robomaster_msgs__action__RecenterGimbal_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
void
robomaster_msgs__action__RecenterGimbal_SendGoal_Response__destroy(robomaster_msgs__action__RecenterGimbal_SendGoal_Response * msg);

/// Check for action/RecenterGimbal message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
bool
robomaster_msgs__action__RecenterGimbal_SendGoal_Response__are_equal(const robomaster_msgs__action__RecenterGimbal_SendGoal_Response * lhs, const robomaster_msgs__action__RecenterGimbal_SendGoal_Response * rhs);

/// Copy a action/RecenterGimbal message.
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
robomaster_msgs__action__RecenterGimbal_SendGoal_Response__copy(
  const robomaster_msgs__action__RecenterGimbal_SendGoal_Response * input,
  robomaster_msgs__action__RecenterGimbal_SendGoal_Response * output);

/// Initialize array of action/RecenterGimbal messages.
/**
 * It allocates the memory for the number of elements and calls
 * robomaster_msgs__action__RecenterGimbal_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
bool
robomaster_msgs__action__RecenterGimbal_SendGoal_Response__Sequence__init(robomaster_msgs__action__RecenterGimbal_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/RecenterGimbal messages.
/**
 * It calls
 * robomaster_msgs__action__RecenterGimbal_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
void
robomaster_msgs__action__RecenterGimbal_SendGoal_Response__Sequence__fini(robomaster_msgs__action__RecenterGimbal_SendGoal_Response__Sequence * array);

/// Create array of action/RecenterGimbal messages.
/**
 * It allocates the memory for the array and calls
 * robomaster_msgs__action__RecenterGimbal_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
robomaster_msgs__action__RecenterGimbal_SendGoal_Response__Sequence *
robomaster_msgs__action__RecenterGimbal_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/RecenterGimbal messages.
/**
 * It calls
 * robomaster_msgs__action__RecenterGimbal_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
void
robomaster_msgs__action__RecenterGimbal_SendGoal_Response__Sequence__destroy(robomaster_msgs__action__RecenterGimbal_SendGoal_Response__Sequence * array);

/// Check for action/RecenterGimbal message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
bool
robomaster_msgs__action__RecenterGimbal_SendGoal_Response__Sequence__are_equal(const robomaster_msgs__action__RecenterGimbal_SendGoal_Response__Sequence * lhs, const robomaster_msgs__action__RecenterGimbal_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/RecenterGimbal messages.
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
robomaster_msgs__action__RecenterGimbal_SendGoal_Response__Sequence__copy(
  const robomaster_msgs__action__RecenterGimbal_SendGoal_Response__Sequence * input,
  robomaster_msgs__action__RecenterGimbal_SendGoal_Response__Sequence * output);

/// Initialize action/RecenterGimbal message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robomaster_msgs__action__RecenterGimbal_GetResult_Request
 * )) before or use
 * robomaster_msgs__action__RecenterGimbal_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
bool
robomaster_msgs__action__RecenterGimbal_GetResult_Request__init(robomaster_msgs__action__RecenterGimbal_GetResult_Request * msg);

/// Finalize action/RecenterGimbal message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
void
robomaster_msgs__action__RecenterGimbal_GetResult_Request__fini(robomaster_msgs__action__RecenterGimbal_GetResult_Request * msg);

/// Create action/RecenterGimbal message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robomaster_msgs__action__RecenterGimbal_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
robomaster_msgs__action__RecenterGimbal_GetResult_Request *
robomaster_msgs__action__RecenterGimbal_GetResult_Request__create();

/// Destroy action/RecenterGimbal message.
/**
 * It calls
 * robomaster_msgs__action__RecenterGimbal_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
void
robomaster_msgs__action__RecenterGimbal_GetResult_Request__destroy(robomaster_msgs__action__RecenterGimbal_GetResult_Request * msg);

/// Check for action/RecenterGimbal message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
bool
robomaster_msgs__action__RecenterGimbal_GetResult_Request__are_equal(const robomaster_msgs__action__RecenterGimbal_GetResult_Request * lhs, const robomaster_msgs__action__RecenterGimbal_GetResult_Request * rhs);

/// Copy a action/RecenterGimbal message.
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
robomaster_msgs__action__RecenterGimbal_GetResult_Request__copy(
  const robomaster_msgs__action__RecenterGimbal_GetResult_Request * input,
  robomaster_msgs__action__RecenterGimbal_GetResult_Request * output);

/// Initialize array of action/RecenterGimbal messages.
/**
 * It allocates the memory for the number of elements and calls
 * robomaster_msgs__action__RecenterGimbal_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
bool
robomaster_msgs__action__RecenterGimbal_GetResult_Request__Sequence__init(robomaster_msgs__action__RecenterGimbal_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/RecenterGimbal messages.
/**
 * It calls
 * robomaster_msgs__action__RecenterGimbal_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
void
robomaster_msgs__action__RecenterGimbal_GetResult_Request__Sequence__fini(robomaster_msgs__action__RecenterGimbal_GetResult_Request__Sequence * array);

/// Create array of action/RecenterGimbal messages.
/**
 * It allocates the memory for the array and calls
 * robomaster_msgs__action__RecenterGimbal_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
robomaster_msgs__action__RecenterGimbal_GetResult_Request__Sequence *
robomaster_msgs__action__RecenterGimbal_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/RecenterGimbal messages.
/**
 * It calls
 * robomaster_msgs__action__RecenterGimbal_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
void
robomaster_msgs__action__RecenterGimbal_GetResult_Request__Sequence__destroy(robomaster_msgs__action__RecenterGimbal_GetResult_Request__Sequence * array);

/// Check for action/RecenterGimbal message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
bool
robomaster_msgs__action__RecenterGimbal_GetResult_Request__Sequence__are_equal(const robomaster_msgs__action__RecenterGimbal_GetResult_Request__Sequence * lhs, const robomaster_msgs__action__RecenterGimbal_GetResult_Request__Sequence * rhs);

/// Copy an array of action/RecenterGimbal messages.
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
robomaster_msgs__action__RecenterGimbal_GetResult_Request__Sequence__copy(
  const robomaster_msgs__action__RecenterGimbal_GetResult_Request__Sequence * input,
  robomaster_msgs__action__RecenterGimbal_GetResult_Request__Sequence * output);

/// Initialize action/RecenterGimbal message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robomaster_msgs__action__RecenterGimbal_GetResult_Response
 * )) before or use
 * robomaster_msgs__action__RecenterGimbal_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
bool
robomaster_msgs__action__RecenterGimbal_GetResult_Response__init(robomaster_msgs__action__RecenterGimbal_GetResult_Response * msg);

/// Finalize action/RecenterGimbal message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
void
robomaster_msgs__action__RecenterGimbal_GetResult_Response__fini(robomaster_msgs__action__RecenterGimbal_GetResult_Response * msg);

/// Create action/RecenterGimbal message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robomaster_msgs__action__RecenterGimbal_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
robomaster_msgs__action__RecenterGimbal_GetResult_Response *
robomaster_msgs__action__RecenterGimbal_GetResult_Response__create();

/// Destroy action/RecenterGimbal message.
/**
 * It calls
 * robomaster_msgs__action__RecenterGimbal_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
void
robomaster_msgs__action__RecenterGimbal_GetResult_Response__destroy(robomaster_msgs__action__RecenterGimbal_GetResult_Response * msg);

/// Check for action/RecenterGimbal message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
bool
robomaster_msgs__action__RecenterGimbal_GetResult_Response__are_equal(const robomaster_msgs__action__RecenterGimbal_GetResult_Response * lhs, const robomaster_msgs__action__RecenterGimbal_GetResult_Response * rhs);

/// Copy a action/RecenterGimbal message.
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
robomaster_msgs__action__RecenterGimbal_GetResult_Response__copy(
  const robomaster_msgs__action__RecenterGimbal_GetResult_Response * input,
  robomaster_msgs__action__RecenterGimbal_GetResult_Response * output);

/// Initialize array of action/RecenterGimbal messages.
/**
 * It allocates the memory for the number of elements and calls
 * robomaster_msgs__action__RecenterGimbal_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
bool
robomaster_msgs__action__RecenterGimbal_GetResult_Response__Sequence__init(robomaster_msgs__action__RecenterGimbal_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/RecenterGimbal messages.
/**
 * It calls
 * robomaster_msgs__action__RecenterGimbal_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
void
robomaster_msgs__action__RecenterGimbal_GetResult_Response__Sequence__fini(robomaster_msgs__action__RecenterGimbal_GetResult_Response__Sequence * array);

/// Create array of action/RecenterGimbal messages.
/**
 * It allocates the memory for the array and calls
 * robomaster_msgs__action__RecenterGimbal_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
robomaster_msgs__action__RecenterGimbal_GetResult_Response__Sequence *
robomaster_msgs__action__RecenterGimbal_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/RecenterGimbal messages.
/**
 * It calls
 * robomaster_msgs__action__RecenterGimbal_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
void
robomaster_msgs__action__RecenterGimbal_GetResult_Response__Sequence__destroy(robomaster_msgs__action__RecenterGimbal_GetResult_Response__Sequence * array);

/// Check for action/RecenterGimbal message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
bool
robomaster_msgs__action__RecenterGimbal_GetResult_Response__Sequence__are_equal(const robomaster_msgs__action__RecenterGimbal_GetResult_Response__Sequence * lhs, const robomaster_msgs__action__RecenterGimbal_GetResult_Response__Sequence * rhs);

/// Copy an array of action/RecenterGimbal messages.
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
robomaster_msgs__action__RecenterGimbal_GetResult_Response__Sequence__copy(
  const robomaster_msgs__action__RecenterGimbal_GetResult_Response__Sequence * input,
  robomaster_msgs__action__RecenterGimbal_GetResult_Response__Sequence * output);

/// Initialize action/RecenterGimbal message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robomaster_msgs__action__RecenterGimbal_FeedbackMessage
 * )) before or use
 * robomaster_msgs__action__RecenterGimbal_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
bool
robomaster_msgs__action__RecenterGimbal_FeedbackMessage__init(robomaster_msgs__action__RecenterGimbal_FeedbackMessage * msg);

/// Finalize action/RecenterGimbal message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
void
robomaster_msgs__action__RecenterGimbal_FeedbackMessage__fini(robomaster_msgs__action__RecenterGimbal_FeedbackMessage * msg);

/// Create action/RecenterGimbal message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robomaster_msgs__action__RecenterGimbal_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
robomaster_msgs__action__RecenterGimbal_FeedbackMessage *
robomaster_msgs__action__RecenterGimbal_FeedbackMessage__create();

/// Destroy action/RecenterGimbal message.
/**
 * It calls
 * robomaster_msgs__action__RecenterGimbal_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
void
robomaster_msgs__action__RecenterGimbal_FeedbackMessage__destroy(robomaster_msgs__action__RecenterGimbal_FeedbackMessage * msg);

/// Check for action/RecenterGimbal message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
bool
robomaster_msgs__action__RecenterGimbal_FeedbackMessage__are_equal(const robomaster_msgs__action__RecenterGimbal_FeedbackMessage * lhs, const robomaster_msgs__action__RecenterGimbal_FeedbackMessage * rhs);

/// Copy a action/RecenterGimbal message.
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
robomaster_msgs__action__RecenterGimbal_FeedbackMessage__copy(
  const robomaster_msgs__action__RecenterGimbal_FeedbackMessage * input,
  robomaster_msgs__action__RecenterGimbal_FeedbackMessage * output);

/// Initialize array of action/RecenterGimbal messages.
/**
 * It allocates the memory for the number of elements and calls
 * robomaster_msgs__action__RecenterGimbal_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
bool
robomaster_msgs__action__RecenterGimbal_FeedbackMessage__Sequence__init(robomaster_msgs__action__RecenterGimbal_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/RecenterGimbal messages.
/**
 * It calls
 * robomaster_msgs__action__RecenterGimbal_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
void
robomaster_msgs__action__RecenterGimbal_FeedbackMessage__Sequence__fini(robomaster_msgs__action__RecenterGimbal_FeedbackMessage__Sequence * array);

/// Create array of action/RecenterGimbal messages.
/**
 * It allocates the memory for the array and calls
 * robomaster_msgs__action__RecenterGimbal_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
robomaster_msgs__action__RecenterGimbal_FeedbackMessage__Sequence *
robomaster_msgs__action__RecenterGimbal_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/RecenterGimbal messages.
/**
 * It calls
 * robomaster_msgs__action__RecenterGimbal_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
void
robomaster_msgs__action__RecenterGimbal_FeedbackMessage__Sequence__destroy(robomaster_msgs__action__RecenterGimbal_FeedbackMessage__Sequence * array);

/// Check for action/RecenterGimbal message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robomaster_msgs
bool
robomaster_msgs__action__RecenterGimbal_FeedbackMessage__Sequence__are_equal(const robomaster_msgs__action__RecenterGimbal_FeedbackMessage__Sequence * lhs, const robomaster_msgs__action__RecenterGimbal_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/RecenterGimbal messages.
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
robomaster_msgs__action__RecenterGimbal_FeedbackMessage__Sequence__copy(
  const robomaster_msgs__action__RecenterGimbal_FeedbackMessage__Sequence * input,
  robomaster_msgs__action__RecenterGimbal_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ROBOMASTER_MSGS__ACTION__DETAIL__RECENTER_GIMBAL__FUNCTIONS_H_
