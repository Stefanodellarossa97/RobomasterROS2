// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robomaster_msgs:action/Move.idl
// generated code does not contain a copyright notice

#ifndef ROBOMASTER_MSGS__ACTION__DETAIL__MOVE__STRUCT_HPP_
#define ROBOMASTER_MSGS__ACTION__DETAIL__MOVE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robomaster_msgs__action__Move_Goal __attribute__((deprecated))
#else
# define DEPRECATED__robomaster_msgs__action__Move_Goal __declspec(deprecated)
#endif

namespace robomaster_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Move_Goal_
{
  using Type = Move_Goal_<ContainerAllocator>;

  explicit Move_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->linear_speed = 0.5f;
      this->angular_speed = 0.5236f;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->x = 0.0f;
      this->y = 0.0f;
      this->theta = 0.0f;
      this->linear_speed = 0.0f;
      this->angular_speed = 0.0f;
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0f;
      this->y = 0.0f;
      this->theta = 0.0f;
    }
  }

  explicit Move_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->linear_speed = 0.5f;
      this->angular_speed = 0.5236f;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->x = 0.0f;
      this->y = 0.0f;
      this->theta = 0.0f;
      this->linear_speed = 0.0f;
      this->angular_speed = 0.0f;
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0f;
      this->y = 0.0f;
      this->theta = 0.0f;
    }
  }

  // field types and members
  using _x_type =
    float;
  _x_type x;
  using _y_type =
    float;
  _y_type y;
  using _theta_type =
    float;
  _theta_type theta;
  using _linear_speed_type =
    float;
  _linear_speed_type linear_speed;
  using _angular_speed_type =
    float;
  _angular_speed_type angular_speed;

  // setters for named parameter idiom
  Type & set__x(
    const float & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const float & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__theta(
    const float & _arg)
  {
    this->theta = _arg;
    return *this;
  }
  Type & set__linear_speed(
    const float & _arg)
  {
    this->linear_speed = _arg;
    return *this;
  }
  Type & set__angular_speed(
    const float & _arg)
  {
    this->angular_speed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robomaster_msgs::action::Move_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const robomaster_msgs::action::Move_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robomaster_msgs::action::Move_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robomaster_msgs::action::Move_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robomaster_msgs::action::Move_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robomaster_msgs::action::Move_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robomaster_msgs::action::Move_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robomaster_msgs::action::Move_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robomaster_msgs::action::Move_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robomaster_msgs::action::Move_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robomaster_msgs__action__Move_Goal
    std::shared_ptr<robomaster_msgs::action::Move_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robomaster_msgs__action__Move_Goal
    std::shared_ptr<robomaster_msgs::action::Move_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Move_Goal_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->theta != other.theta) {
      return false;
    }
    if (this->linear_speed != other.linear_speed) {
      return false;
    }
    if (this->angular_speed != other.angular_speed) {
      return false;
    }
    return true;
  }
  bool operator!=(const Move_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Move_Goal_

// alias to use template instance with default allocator
using Move_Goal =
  robomaster_msgs::action::Move_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace robomaster_msgs


#ifndef _WIN32
# define DEPRECATED__robomaster_msgs__action__Move_Result __attribute__((deprecated))
#else
# define DEPRECATED__robomaster_msgs__action__Move_Result __declspec(deprecated)
#endif

namespace robomaster_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Move_Result_
{
  using Type = Move_Result_<ContainerAllocator>;

  explicit Move_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit Move_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    robomaster_msgs::action::Move_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const robomaster_msgs::action::Move_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robomaster_msgs::action::Move_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robomaster_msgs::action::Move_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robomaster_msgs::action::Move_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robomaster_msgs::action::Move_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robomaster_msgs::action::Move_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robomaster_msgs::action::Move_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robomaster_msgs::action::Move_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robomaster_msgs::action::Move_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robomaster_msgs__action__Move_Result
    std::shared_ptr<robomaster_msgs::action::Move_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robomaster_msgs__action__Move_Result
    std::shared_ptr<robomaster_msgs::action::Move_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Move_Result_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const Move_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Move_Result_

// alias to use template instance with default allocator
using Move_Result =
  robomaster_msgs::action::Move_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace robomaster_msgs


#ifndef _WIN32
# define DEPRECATED__robomaster_msgs__action__Move_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__robomaster_msgs__action__Move_Feedback __declspec(deprecated)
#endif

namespace robomaster_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Move_Feedback_
{
  using Type = Move_Feedback_<ContainerAllocator>;

  explicit Move_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->progress = 0.0f;
    }
  }

  explicit Move_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->progress = 0.0f;
    }
  }

  // field types and members
  using _progress_type =
    float;
  _progress_type progress;

  // setters for named parameter idiom
  Type & set__progress(
    const float & _arg)
  {
    this->progress = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robomaster_msgs::action::Move_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const robomaster_msgs::action::Move_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robomaster_msgs::action::Move_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robomaster_msgs::action::Move_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robomaster_msgs::action::Move_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robomaster_msgs::action::Move_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robomaster_msgs::action::Move_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robomaster_msgs::action::Move_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robomaster_msgs::action::Move_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robomaster_msgs::action::Move_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robomaster_msgs__action__Move_Feedback
    std::shared_ptr<robomaster_msgs::action::Move_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robomaster_msgs__action__Move_Feedback
    std::shared_ptr<robomaster_msgs::action::Move_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Move_Feedback_ & other) const
  {
    if (this->progress != other.progress) {
      return false;
    }
    return true;
  }
  bool operator!=(const Move_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Move_Feedback_

// alias to use template instance with default allocator
using Move_Feedback =
  robomaster_msgs::action::Move_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace robomaster_msgs


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "robomaster_msgs/action/detail/move__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robomaster_msgs__action__Move_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__robomaster_msgs__action__Move_SendGoal_Request __declspec(deprecated)
#endif

namespace robomaster_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Move_SendGoal_Request_
{
  using Type = Move_SendGoal_Request_<ContainerAllocator>;

  explicit Move_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit Move_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    robomaster_msgs::action::Move_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const robomaster_msgs::action::Move_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robomaster_msgs::action::Move_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const robomaster_msgs::action::Move_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robomaster_msgs::action::Move_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robomaster_msgs::action::Move_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robomaster_msgs::action::Move_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robomaster_msgs::action::Move_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robomaster_msgs::action::Move_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robomaster_msgs::action::Move_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robomaster_msgs::action::Move_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robomaster_msgs::action::Move_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robomaster_msgs__action__Move_SendGoal_Request
    std::shared_ptr<robomaster_msgs::action::Move_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robomaster_msgs__action__Move_SendGoal_Request
    std::shared_ptr<robomaster_msgs::action::Move_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Move_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const Move_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Move_SendGoal_Request_

// alias to use template instance with default allocator
using Move_SendGoal_Request =
  robomaster_msgs::action::Move_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace robomaster_msgs


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robomaster_msgs__action__Move_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__robomaster_msgs__action__Move_SendGoal_Response __declspec(deprecated)
#endif

namespace robomaster_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Move_SendGoal_Response_
{
  using Type = Move_SendGoal_Response_<ContainerAllocator>;

  explicit Move_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit Move_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    robomaster_msgs::action::Move_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const robomaster_msgs::action::Move_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robomaster_msgs::action::Move_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robomaster_msgs::action::Move_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robomaster_msgs::action::Move_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robomaster_msgs::action::Move_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robomaster_msgs::action::Move_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robomaster_msgs::action::Move_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robomaster_msgs::action::Move_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robomaster_msgs::action::Move_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robomaster_msgs__action__Move_SendGoal_Response
    std::shared_ptr<robomaster_msgs::action::Move_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robomaster_msgs__action__Move_SendGoal_Response
    std::shared_ptr<robomaster_msgs::action::Move_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Move_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const Move_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Move_SendGoal_Response_

// alias to use template instance with default allocator
using Move_SendGoal_Response =
  robomaster_msgs::action::Move_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace robomaster_msgs

namespace robomaster_msgs
{

namespace action
{

struct Move_SendGoal
{
  using Request = robomaster_msgs::action::Move_SendGoal_Request;
  using Response = robomaster_msgs::action::Move_SendGoal_Response;
};

}  // namespace action

}  // namespace robomaster_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robomaster_msgs__action__Move_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__robomaster_msgs__action__Move_GetResult_Request __declspec(deprecated)
#endif

namespace robomaster_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Move_GetResult_Request_
{
  using Type = Move_GetResult_Request_<ContainerAllocator>;

  explicit Move_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit Move_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    robomaster_msgs::action::Move_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const robomaster_msgs::action::Move_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robomaster_msgs::action::Move_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robomaster_msgs::action::Move_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robomaster_msgs::action::Move_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robomaster_msgs::action::Move_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robomaster_msgs::action::Move_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robomaster_msgs::action::Move_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robomaster_msgs::action::Move_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robomaster_msgs::action::Move_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robomaster_msgs__action__Move_GetResult_Request
    std::shared_ptr<robomaster_msgs::action::Move_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robomaster_msgs__action__Move_GetResult_Request
    std::shared_ptr<robomaster_msgs::action::Move_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Move_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const Move_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Move_GetResult_Request_

// alias to use template instance with default allocator
using Move_GetResult_Request =
  robomaster_msgs::action::Move_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace robomaster_msgs


// Include directives for member types
// Member 'result'
// already included above
// #include "robomaster_msgs/action/detail/move__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robomaster_msgs__action__Move_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__robomaster_msgs__action__Move_GetResult_Response __declspec(deprecated)
#endif

namespace robomaster_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Move_GetResult_Response_
{
  using Type = Move_GetResult_Response_<ContainerAllocator>;

  explicit Move_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit Move_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    robomaster_msgs::action::Move_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const robomaster_msgs::action::Move_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robomaster_msgs::action::Move_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const robomaster_msgs::action::Move_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robomaster_msgs::action::Move_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robomaster_msgs::action::Move_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robomaster_msgs::action::Move_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robomaster_msgs::action::Move_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robomaster_msgs::action::Move_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robomaster_msgs::action::Move_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robomaster_msgs::action::Move_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robomaster_msgs::action::Move_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robomaster_msgs__action__Move_GetResult_Response
    std::shared_ptr<robomaster_msgs::action::Move_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robomaster_msgs__action__Move_GetResult_Response
    std::shared_ptr<robomaster_msgs::action::Move_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Move_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const Move_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Move_GetResult_Response_

// alias to use template instance with default allocator
using Move_GetResult_Response =
  robomaster_msgs::action::Move_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace robomaster_msgs

namespace robomaster_msgs
{

namespace action
{

struct Move_GetResult
{
  using Request = robomaster_msgs::action::Move_GetResult_Request;
  using Response = robomaster_msgs::action::Move_GetResult_Response;
};

}  // namespace action

}  // namespace robomaster_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "robomaster_msgs/action/detail/move__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robomaster_msgs__action__Move_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__robomaster_msgs__action__Move_FeedbackMessage __declspec(deprecated)
#endif

namespace robomaster_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Move_FeedbackMessage_
{
  using Type = Move_FeedbackMessage_<ContainerAllocator>;

  explicit Move_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit Move_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    robomaster_msgs::action::Move_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const robomaster_msgs::action::Move_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robomaster_msgs::action::Move_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const robomaster_msgs::action::Move_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robomaster_msgs::action::Move_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robomaster_msgs::action::Move_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robomaster_msgs::action::Move_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robomaster_msgs::action::Move_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robomaster_msgs::action::Move_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robomaster_msgs::action::Move_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robomaster_msgs::action::Move_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robomaster_msgs::action::Move_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robomaster_msgs__action__Move_FeedbackMessage
    std::shared_ptr<robomaster_msgs::action::Move_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robomaster_msgs__action__Move_FeedbackMessage
    std::shared_ptr<robomaster_msgs::action::Move_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Move_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const Move_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Move_FeedbackMessage_

// alias to use template instance with default allocator
using Move_FeedbackMessage =
  robomaster_msgs::action::Move_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace robomaster_msgs

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace robomaster_msgs
{

namespace action
{

struct Move
{
  /// The goal message defined in the action definition.
  using Goal = robomaster_msgs::action::Move_Goal;
  /// The result message defined in the action definition.
  using Result = robomaster_msgs::action::Move_Result;
  /// The feedback message defined in the action definition.
  using Feedback = robomaster_msgs::action::Move_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = robomaster_msgs::action::Move_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = robomaster_msgs::action::Move_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = robomaster_msgs::action::Move_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct Move Move;

}  // namespace action

}  // namespace robomaster_msgs

#endif  // ROBOMASTER_MSGS__ACTION__DETAIL__MOVE__STRUCT_HPP_
