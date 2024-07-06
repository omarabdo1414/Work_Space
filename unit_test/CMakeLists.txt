cmake_minimum_required(VERSION 3.28.1)

project(HelloWorld)

set(
    SRC_FILES
    main.cpp
)

add_executable(${PROJECT_NAME} ${SRC_FILES})