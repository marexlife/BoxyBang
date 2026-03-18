cmake_minimum_required(VERSION 3.20)
project(Lexer)

include(${CMAKE_SOURCE_DIR}/CMake/DefaultFlags.cmake)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 23)

add_library(${PROJECT_NAME})

target_sources(${PROJECT_NAME} PRIVATE
    Private/Lexer.cpp
)

target_include_directories(${PROJECT_NAME} PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/Public
)

target_link_libraries(${PROJECT_NAME} PRIVATE
    Utils
    Token
)

target_compile_options(${PROJECT_NAME} PRIVATE
    ${BOXY_COMMON_FLAGS}
)