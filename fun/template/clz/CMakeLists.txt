cmake_minimum_required(VERSION 3.16)

project(
    CUSTOM_PACKAGE2
    VERSION 0.1
    DESCRIPTION "QUEUE"
    LANGUAGES CXX#c: C / cpp: CXX
)

add_executable(program main.cpp)
# 컴파일 옵션
target_compile_options(program PUBLIC -Wall -Werror)
# 헤더파일 디렉토리 지정
target_include_directories(program PUBLIC ${CMAKE_SOURCE_DIR}/includes)