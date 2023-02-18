# coordin 라이브러리 만들기
add_library(namesp STATIC namesp.cpp)
# 해당 라이브러리 컴파일 시 사용할 헤더파일 경로
target_include_directories(namesp PUBLIC ${CMAKE_SOURCE_DIR}/includes)
# 해당 라이브러리를 컴파일 할 옵션
target_compile_options(namesp PRIVATE -Wall -Werror)
