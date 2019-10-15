# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "pr2_package: 1 messages, 1 services")

set(MSG_I_FLAGS "-Ipr2_package:/home/tawfiq/pr2_ws/src/pr2_package/msg;-Istd_msgs:/opt/ros/indigo/share/std_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(genlisp REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(pr2_package_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/home/tawfiq/pr2_ws/src/pr2_package/msg/Pose.msg" NAME_WE)
add_custom_target(_pr2_package_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "pr2_package" "/home/tawfiq/pr2_ws/src/pr2_package/msg/Pose.msg" ""
)

get_filename_component(_filename "/home/tawfiq/pr2_ws/src/pr2_package/srv/PoseSend.srv" NAME_WE)
add_custom_target(_pr2_package_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "pr2_package" "/home/tawfiq/pr2_ws/src/pr2_package/srv/PoseSend.srv" ""
)

#
#  langs = gencpp;genlisp;genpy
#

### Section generating for lang: gencpp
### Generating Messages
_generate_msg_cpp(pr2_package
  "/home/tawfiq/pr2_ws/src/pr2_package/msg/Pose.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/pr2_package
)

### Generating Services
_generate_srv_cpp(pr2_package
  "/home/tawfiq/pr2_ws/src/pr2_package/srv/PoseSend.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/pr2_package
)

### Generating Module File
_generate_module_cpp(pr2_package
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/pr2_package
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(pr2_package_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(pr2_package_generate_messages pr2_package_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/tawfiq/pr2_ws/src/pr2_package/msg/Pose.msg" NAME_WE)
add_dependencies(pr2_package_generate_messages_cpp _pr2_package_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/tawfiq/pr2_ws/src/pr2_package/srv/PoseSend.srv" NAME_WE)
add_dependencies(pr2_package_generate_messages_cpp _pr2_package_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(pr2_package_gencpp)
add_dependencies(pr2_package_gencpp pr2_package_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS pr2_package_generate_messages_cpp)

### Section generating for lang: genlisp
### Generating Messages
_generate_msg_lisp(pr2_package
  "/home/tawfiq/pr2_ws/src/pr2_package/msg/Pose.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/pr2_package
)

### Generating Services
_generate_srv_lisp(pr2_package
  "/home/tawfiq/pr2_ws/src/pr2_package/srv/PoseSend.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/pr2_package
)

### Generating Module File
_generate_module_lisp(pr2_package
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/pr2_package
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(pr2_package_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(pr2_package_generate_messages pr2_package_generate_messages_lisp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/tawfiq/pr2_ws/src/pr2_package/msg/Pose.msg" NAME_WE)
add_dependencies(pr2_package_generate_messages_lisp _pr2_package_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/tawfiq/pr2_ws/src/pr2_package/srv/PoseSend.srv" NAME_WE)
add_dependencies(pr2_package_generate_messages_lisp _pr2_package_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(pr2_package_genlisp)
add_dependencies(pr2_package_genlisp pr2_package_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS pr2_package_generate_messages_lisp)

### Section generating for lang: genpy
### Generating Messages
_generate_msg_py(pr2_package
  "/home/tawfiq/pr2_ws/src/pr2_package/msg/Pose.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/pr2_package
)

### Generating Services
_generate_srv_py(pr2_package
  "/home/tawfiq/pr2_ws/src/pr2_package/srv/PoseSend.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/pr2_package
)

### Generating Module File
_generate_module_py(pr2_package
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/pr2_package
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(pr2_package_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(pr2_package_generate_messages pr2_package_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/tawfiq/pr2_ws/src/pr2_package/msg/Pose.msg" NAME_WE)
add_dependencies(pr2_package_generate_messages_py _pr2_package_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/tawfiq/pr2_ws/src/pr2_package/srv/PoseSend.srv" NAME_WE)
add_dependencies(pr2_package_generate_messages_py _pr2_package_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(pr2_package_genpy)
add_dependencies(pr2_package_genpy pr2_package_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS pr2_package_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/pr2_package)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/pr2_package
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_cpp)
  add_dependencies(pr2_package_generate_messages_cpp std_msgs_generate_messages_cpp)
endif()

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/pr2_package)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/pr2_package
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_lisp)
  add_dependencies(pr2_package_generate_messages_lisp std_msgs_generate_messages_lisp)
endif()

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/pr2_package)
  install(CODE "execute_process(COMMAND \"/usr/bin/python\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/pr2_package\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/pr2_package
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_py)
  add_dependencies(pr2_package_generate_messages_py std_msgs_generate_messages_py)
endif()
