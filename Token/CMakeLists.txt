cmake_minimum_required(VERSION 3.30)
project(Token)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_library(${PROJECT_NAME})

target_sources(${PROJECT_NAME} PRIVATE
    Private/TokenFactorySingleton.cpp
)