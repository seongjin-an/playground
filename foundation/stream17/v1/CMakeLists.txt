CMAKE_MINIMUM_REQUIRED(VERSION 3.16)

project(
        program
        VERSION 0.1
        DESCRIPTION "STREAM"
        LANGUAGES CXX
)

add_executable(write write.cpp)
add_executable(defaults defaults.cpp)
add_executable(manip manip.cpp)
add_executable(width width.cpp)
add_executable(fill fill.cpp)
add_executable(precise precise.cpp)
add_executable(showpt showpt.cpp)