add_library(stock STATIC stock20.cpp)
target_include_directories(stock PUBLIC ${CMAKE_SOURCE_DIR}/includes)
target_compile_options(stock PRIVATE -Wall -Werror)