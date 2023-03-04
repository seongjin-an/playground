add_library(workermi STATIC workermi.cpp)
target_include_directories(workermi PUBLIC ${CMAKE_SOURCE_DIR}/includes)