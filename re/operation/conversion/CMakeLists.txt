add_library(conversionLib libs/conversion.cpp)
include_directories(includes)
add_executable(conversion main.cpp)
target_link_libraries(conversion conversionLib)