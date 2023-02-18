cmake_minimum_required(VERSION 3.22)
project(namesp)

set(CMAKE_CXX_STANDARD 14)
add_subdirectory(libs)

add_executable(program usenmsp.cpp)
# 컴파일 옵션
target_compile_options(program PUBLIC -Wall -Werror)
# 헤더파일 디렉토리 지정
target_include_directories(program PUBLIC ${CMAKE_SOURCE_DIR}/includes)
# program 에 coordin 추가
target_link_libraries(program namesp)