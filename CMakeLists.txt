cmake_minimum_required(VERSION 3.20)
project(BoxyBang)

include(${CMAKE_SOURCE_DIR}/CMake/Cloner.cmake)

BOXY_CLONE()

add_subdirectory(Source)