add_library(sales STATIC sales.cpp)
target_include_directories(sales PUBLIC ${CMAKE_SOURCE_DIR}/includes)