cmake_minimum_required(VERSION 3.22)

project(
        STACK
        VERSION 0.1
        DESCRIPTION "EXAMPLE"
        LANGUAGES CXX
)

add_subdirectory(libs)
add_executable(program stacker.cpp)
target_include_directories(program PUBLIC ${CMAKE_SOURCE_DIR}/includes)
target_link_libraries(program stack0)