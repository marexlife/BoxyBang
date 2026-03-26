cmake_minimum_required(VERSION 3.20)
project(Token)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 20)

add_library(${PROJECT_NAME}
    Private/Token.cpp
)

target_include_directories(${PROJECT_NAME} PUBLIC
    Public
)