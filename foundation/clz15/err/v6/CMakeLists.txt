CMAKE_MINIMUM_REQUIRED(VERSION 3.16)

project(
        program
        VERSION 0.1
        DESCRIPTION "INHERIT EXCEPTION"
        LANGUAGES CXX
)

add_subdirectory(libs)
add_executable(program use_sales.cpp)
target_include_directories(program PUBLIC ${CMAKE_SOURCE_DIR}/includes)
target_link_libraries(program sales)