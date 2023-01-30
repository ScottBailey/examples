cmake_minimum_required(VERSION 3.11)

project("enum insertion and extraction")

include(common.cmake)

set(target_name "example")

file(GLOB src_h   src/*.h)
file(GLOB src_cpp src/*.cpp)

add_executable(${target_name} ${src_h} ${src_cpp})
set_property(TARGET ${target_name} PROPERTY CXX_STANDARD 20)
target_include_directories(${target_name} PRIVATE src )
