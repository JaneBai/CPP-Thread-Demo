cmake_minimum_required(VERSION 3.15)
project(learnThread)

set(CMAKE_CXX_STANDARD 11)

# 增加FLAG以启用多线程功能
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")

# 如果需要调试再加几个参数
 set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -pthread -g -march=native")

# 由于会生成多个可执行文件，所以就添加了多个
add_executable(demo1 demo1.cpp)
add_executable(demo2 demo2.cpp)
add_executable(demo3 demo3.cpp)