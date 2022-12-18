# 정적 라이브러리 shape 만들기
add_library(shape STATIC shape.cpp)
# 해당 라이브러리 컴파일 시 사용할 헤더파일 경로
target_include_directories(shape PUBLIC ${CMAKE_SOURCE_DIR}/includes)
# 해당 라이브러리를 컴파일 할 옵션
target_compile_options(shape PRIVATE -Wall -Werror)

# pthread 라이브러리를 링크
target_link_libraries(shape PRIVATE pthread)