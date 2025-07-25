// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from robomaster_msgs:msg/PWM.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "robomaster_msgs/msg/detail/pwm__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace robomaster_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void PWM_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robomaster_msgs::msg::PWM(_init);
}

void PWM_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robomaster_msgs::msg::PWM *>(message_memory);
  typed_message->~PWM();
}

size_t size_function__PWM__fraction_of_duty_cycle(const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * get_const_function__PWM__fraction_of_duty_cycle(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 6> *>(untyped_member);
  return &member[index];
}

void * get_function__PWM__fraction_of_duty_cycle(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 6> *>(untyped_member);
  return &member[index];
}

void fetch_function__PWM__fraction_of_duty_cycle(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__PWM__fraction_of_duty_cycle(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__PWM__fraction_of_duty_cycle(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__PWM__fraction_of_duty_cycle(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PWM_message_member_array[1] = {
  {
    "fraction_of_duty_cycle",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(robomaster_msgs::msg::PWM, fraction_of_duty_cycle),  // bytes offset in struct
    nullptr,  // default value
    size_function__PWM__fraction_of_duty_cycle,  // size() function pointer
    get_const_function__PWM__fraction_of_duty_cycle,  // get_const(index) function pointer
    get_function__PWM__fraction_of_duty_cycle,  // get(index) function pointer
    fetch_function__PWM__fraction_of_duty_cycle,  // fetch(index, &value) function pointer
    assign_function__PWM__fraction_of_duty_cycle,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PWM_message_members = {
  "robomaster_msgs::msg",  // message namespace
  "PWM",  // message name
  1,  // number of fields
  sizeof(robomaster_msgs::msg::PWM),
  PWM_message_member_array,  // message members
  PWM_init_function,  // function to initialize message memory (memory has to be allocated)
  PWM_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PWM_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PWM_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace robomaster_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robomaster_msgs::msg::PWM>()
{
  return &::robomaster_msgs::msg::rosidl_typesupport_introspection_cpp::PWM_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robomaster_msgs, msg, PWM)() {
  return &::robomaster_msgs::msg::rosidl_typesupport_introspection_cpp::PWM_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
