cmake_minimum_required(VERSION 3.20)
project(Utils)

include(${CMAKE_SOURCE_DIR}/CMake/DefaultFlags.cmake)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 23)

add_library(${PROJECT_NAME}
    Private/Utils.cpp
)

target_include_directories(${PROJECT_NAME} PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/Public
)

target_compile_options(${PROJECT_NAME} PRIVATE
    ${BOXY_COMMON_FLAGS}
)