// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robomaster_msgs:msg/BlasterLED.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__MSG__DETAIL__BLASTER_LED__BUILDER_HPP_
#define ROBOMASTER_MSGS__MSG__DETAIL__BLASTER_LED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robomaster_msgs/msg/detail/blaster_led__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robomaster_msgs
{

namespace msg
{

namespace builder
{

class Init_BlasterLED_brightness
{
public:
  Init_BlasterLED_brightness()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robomaster_msgs::msg::BlasterLED brightness(::robomaster_msgs::msg::BlasterLED::_brightness_type arg)
  {
    msg_.brightness = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robomaster_msgs::msg::BlasterLED msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robomaster_msgs::msg::BlasterLED>()
{
  return robomaster_msgs::msg::builder::Init_BlasterLED_brightness();
}

}  // namespace robomaster_msgs

#endif  // ROBOMASTER_MSGS__MSG__DETAIL__BLASTER_LED__BUILDER_HPP_
