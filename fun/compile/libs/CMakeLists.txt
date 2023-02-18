# coordin 라이브러리 만들기
add_library(coordin STATIC file2.cpp)
# 해당 라이브러리 컴파일 시 사용할 헤더파일 경로
target_include_directories(coordin PUBLIC ${CMAKE_SOURCE_DIR}/includes)
# 해당 라이브러리를 컴파일 할 옵션
target_compile_options(coordin PRIVATE -Wall -Werror)
