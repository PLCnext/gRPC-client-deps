cmake_minimum_required(VERSION 3.5)
project(grpc_plcnext)

# Default to C99
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

set (TOOLCHAIN "/opt/pxc/sdks/AXCF2152/2022.6.0")
set (ARPVERSION "2022.6.0.43")
set (TARGETNAME "AXCF2152")

set (CMAKE_TOOLCHAIN_FILE ${TOOLCHAIN}/toolchain.cmake CACHE STRING "PLCnext toolchain file")
set (ARP_TOOLCHAIN_ROOT ${TOOLCHAIN} CACHE STRING "PLCnext toolchain root directory")
set (ARP_DEVICE ${TARGETNAME} CACHE STRING "PLCnext target device name")

set (WILDCARD_SOURCE *.cpp *.cc)
set (WILDCARD_HEADER *.h *.hpp *.hxx)


file(GLOB_RECURSE Sources 
    include/grpc_plcnext/${WILDCARD_SOURCE}
)

file(GLOB_RECURSE Headers 
    include/grpc_plcnext/${WILDCARD_HEADER}
)

# find dependencies
find_package(ament_cmake REQUIRED)
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # uncomment the line when a copyright and license is not present in all source files
  #set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # uncomment the line when this package is not in a git repo
  #set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(gRPC CONFIG REQUIRED)
add_executable(pub src/pub.cpp src/grpc_client.cpp src/dataaccess_client.cpp src/subscription_client.cpp ${Headers} ${Sources})
# ament_target_dependencies(pub rclcpp std_msgs geometry_msgs )
target_link_libraries(pub  gRPC::gpr gRPC::grpc gRPC::grpc++)
ament_target_dependencies(pub rclcpp std_msgs geometry_msgs)

#add_executable(sub src/sub.cpp)
#ament_target_dependencies(sub rclcpp std_msgs geometry_msgs)


add_executable(sub src/sub.cpp src/grpc_client.cpp src/dataaccess_client.cpp src/subscription_client.cpp ${Headers} ${Sources})
target_link_libraries(sub  gRPC::gpr gRPC::grpc gRPC::grpc++)
ament_target_dependencies(sub rclcpp std_msgs geometry_msgs)

# message(STATU "---- rclcpp_FOUND=${rclcpp_FOUND} rclcpp_INDCLUDE_DIR=${rclcpp_INCLUDE_DIRS}")
if (rclcpp_FOUND)
  target_include_directories(sub
     PUBLIC
     $<BUILD_INTERFACE:${rclcpp_INCLUDE_DIRS}>
     $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
     $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/grpc_plcnext/ServiceStubs>
     $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/grpc_plcnext/ServiceStubs/Includes>
  )
  target_include_directories(pub
     PUBLIC
     $<BUILD_INTERFACE:${rclcpp_INCLUDE_DIRS}>
     $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
     $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/grpc_plcnext/ServiceStubs>
     $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/grpc_plcnext/ServiceStubs/Includes>
  )
endif()


install(TARGETS
  pub
  sub
  DESTINATION lib/${PROJECT_NAME})

ament_package()
