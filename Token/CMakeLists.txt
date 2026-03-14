cmake_minimum_required(VERSION 3.30)
project(Token)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(${PROJECT_NAME})

target_sources(${PROJECT_NAME}
    Private/TokenFactorySingleton.cpp
)