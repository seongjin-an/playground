cmake_minimum_required(VERSION 3.16)

project(
    CUSTOM_PACKAGE
    VERSION 0.1
    DESCRIPTION "EXAMPLE"
    LANGUAGES CXX#c: C / cpp: CXX
)

# 확인할 디렉토리 추가
add_subdirectory(libs)

add_executable(program main.cpp foo.cpp)
# 컴파일 옵션
target_compile_options(program PUBLIC -Wall -Werror)
# 헤더파일 디렉토리 지정
target_include_directories(program PUBLIC ${CMAKE_SOURCE_DIR}/includes)
# program 에 shape 를 링크
target_link_libraries(program shape)