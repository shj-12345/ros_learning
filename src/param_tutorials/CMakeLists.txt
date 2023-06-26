cmake_minimum_required(VERSION 3.0.2)
project(param_tutorials)


find_package(catkin REQUIRED COMPONENTS
  roscpp
)

catkin_package()

include_directories(
# include
  ${catkin_INCLUDE_DIRS}
)

add_executable(main src/main.cpp)
target_link_libraries(main
  ${catkin_LIBRARIES}
)
