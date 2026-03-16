cmake_minimum_required(VERSION 3.20)
project(Lexer)

add_library(${PROJECT_NAME})

target_sources(${PROJECT_NAME} PRIVATE
    Private/Lexer.cpp
)

target_include_directories(${PROJECT_NAME} PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/Public
)

target_link_libraries(${PROJECT_NAME} PRIVATE
    Token
    Utils
)