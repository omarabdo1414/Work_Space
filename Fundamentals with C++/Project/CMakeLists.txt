cmake_minimum_required(VERSION 3.28.1)
project(HELLOAPP)

set(
    SRC 
    main.cpp 
    src/calc.cpp
)

add_executable(hellobinary ${SRC})
target_include_directories(hellobinary PUBLIC src/ include/)

message("Path is ${CMAKE_SOURCE_DIR}")

if(EXISTS ${CMAKE_SOURCE_DIR}/main.cpp)
    message(STATUS "Files exists")
else()
    message(FATAL_ERROR "File Does not exist")
endif()

add_subdirectory(lib)

target_link_libraries(hellobinary PUBLIC wifi_lib)