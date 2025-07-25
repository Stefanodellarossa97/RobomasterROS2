// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robomaster_msgs:srv/GetIO.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robomaster_msgs/srv/detail/get_io__rosidl_typesupport_introspection_c.h"
#include "robomaster_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robomaster_msgs/srv/detail/get_io__functions.h"
#include "robomaster_msgs/srv/detail/get_io__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void robomaster_msgs__srv__GetIO_Request__rosidl_typesupport_introspection_c__GetIO_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robomaster_msgs__srv__GetIO_Request__init(message_memory);
}

void robomaster_msgs__srv__GetIO_Request__rosidl_typesupport_introspection_c__GetIO_Request_fini_function(void * message_memory)
{
  robomaster_msgs__srv__GetIO_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember robomaster_msgs__srv__GetIO_Request__rosidl_typesupport_introspection_c__GetIO_Request_message_member_array[2] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robomaster_msgs__srv__GetIO_Request, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "port",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robomaster_msgs__srv__GetIO_Request, port),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robomaster_msgs__srv__GetIO_Request__rosidl_typesupport_introspection_c__GetIO_Request_message_members = {
  "robomaster_msgs__srv",  // message namespace
  "GetIO_Request",  // message name
  2,  // number of fields
  sizeof(robomaster_msgs__srv__GetIO_Request),
  robomaster_msgs__srv__GetIO_Request__rosidl_typesupport_introspection_c__GetIO_Request_message_member_array,  // message members
  robomaster_msgs__srv__GetIO_Request__rosidl_typesupport_introspection_c__GetIO_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  robomaster_msgs__srv__GetIO_Request__rosidl_typesupport_introspection_c__GetIO_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robomaster_msgs__srv__GetIO_Request__rosidl_typesupport_introspection_c__GetIO_Request_message_type_support_handle = {
  0,
  &robomaster_msgs__srv__GetIO_Request__rosidl_typesupport_introspection_c__GetIO_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robomaster_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robomaster_msgs, srv, GetIO_Request)() {
  if (!robomaster_msgs__srv__GetIO_Request__rosidl_typesupport_introspection_c__GetIO_Request_message_type_support_handle.typesupport_identifier) {
    robomaster_msgs__srv__GetIO_Request__rosidl_typesupport_introspection_c__GetIO_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robomaster_msgs__srv__GetIO_Request__rosidl_typesupport_introspection_c__GetIO_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "robomaster_msgs/srv/detail/get_io__rosidl_typesupport_introspection_c.h"
// already included above
// #include "robomaster_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "robomaster_msgs/srv/detail/get_io__functions.h"
// already included above
// #include "robomaster_msgs/srv/detail/get_io__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void robomaster_msgs__srv__GetIO_Response__rosidl_typesupport_introspection_c__GetIO_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robomaster_msgs__srv__GetIO_Response__init(message_memory);
}

void robomaster_msgs__srv__GetIO_Response__rosidl_typesupport_introspection_c__GetIO_Response_fini_function(void * message_memory)
{
  robomaster_msgs__srv__GetIO_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember robomaster_msgs__srv__GetIO_Response__rosidl_typesupport_introspection_c__GetIO_Response_message_member_array[2] = {
  {
    "valid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robomaster_msgs__srv__GetIO_Response, valid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robomaster_msgs__srv__GetIO_Response, value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robomaster_msgs__srv__GetIO_Response__rosidl_typesupport_introspection_c__GetIO_Response_message_members = {
  "robomaster_msgs__srv",  // message namespace
  "GetIO_Response",  // message name
  2,  // number of fields
  sizeof(robomaster_msgs__srv__GetIO_Response),
  robomaster_msgs__srv__GetIO_Response__rosidl_typesupport_introspection_c__GetIO_Response_message_member_array,  // message members
  robomaster_msgs__srv__GetIO_Response__rosidl_typesupport_introspection_c__GetIO_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  robomaster_msgs__srv__GetIO_Response__rosidl_typesupport_introspection_c__GetIO_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robomaster_msgs__srv__GetIO_Response__rosidl_typesupport_introspection_c__GetIO_Response_message_type_support_handle = {
  0,
  &robomaster_msgs__srv__GetIO_Response__rosidl_typesupport_introspection_c__GetIO_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robomaster_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robomaster_msgs, srv, GetIO_Response)() {
  if (!robomaster_msgs__srv__GetIO_Response__rosidl_typesupport_introspection_c__GetIO_Response_message_type_support_handle.typesupport_identifier) {
    robomaster_msgs__srv__GetIO_Response__rosidl_typesupport_introspection_c__GetIO_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robomaster_msgs__srv__GetIO_Response__rosidl_typesupport_introspection_c__GetIO_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "robomaster_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "robomaster_msgs/srv/detail/get_io__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers robomaster_msgs__srv__detail__get_io__rosidl_typesupport_introspection_c__GetIO_service_members = {
  "robomaster_msgs__srv",  // service namespace
  "GetIO",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // robomaster_msgs__srv__detail__get_io__rosidl_typesupport_introspection_c__GetIO_Request_message_type_support_handle,
  NULL  // response message
  // robomaster_msgs__srv__detail__get_io__rosidl_typesupport_introspection_c__GetIO_Response_message_type_support_handle
};

static rosidl_service_type_support_t robomaster_msgs__srv__detail__get_io__rosidl_typesupport_introspection_c__GetIO_service_type_support_handle = {
  0,
  &robomaster_msgs__srv__detail__get_io__rosidl_typesupport_introspection_c__GetIO_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robomaster_msgs, srv, GetIO_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robomaster_msgs, srv, GetIO_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robomaster_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robomaster_msgs, srv, GetIO)() {
  if (!robomaster_msgs__srv__detail__get_io__rosidl_typesupport_introspection_c__GetIO_service_type_support_handle.typesupport_identifier) {
    robomaster_msgs__srv__detail__get_io__rosidl_typesupport_introspection_c__GetIO_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)robomaster_msgs__srv__detail__get_io__rosidl_typesupport_introspection_c__GetIO_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robomaster_msgs, srv, GetIO_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robomaster_msgs, srv, GetIO_Response)()->data;
  }

  return &robomaster_msgs__srv__detail__get_io__rosidl_typesupport_introspection_c__GetIO_service_type_support_handle;
}
