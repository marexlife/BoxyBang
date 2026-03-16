cmake_minimum_required(VERSION 3.20)
project(Token)

include(${CMAKE_SOURCE_DIR}/CMake/DefaultFlags.cmake)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_library(${PROJECT_NAME})

target_sources(${PROJECT_NAME} PRIVATE
    Private/TokenFactorySingleton.cpp
    Private/TokenStream.cpp
)

target_include_directories(${PROJECT_NAME} PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/Public
)

target_link_libraries(${PROJECT_NAME} PRIVATE
    Utils
)

target_compile_options(${PROJECT_NAME} PRIVATE
    ${BOXY_COMMON_FLAGS}
)