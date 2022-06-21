add_executable(proxy proxy/proxy.cpp)

add_executable(adaptor adaptor/main.cpp)
add_library(adaptorLib adaptor/libs/electronic.cpp)
include_directories(adaptor/includes)
target_link_libraries(adaptor adaptorLib)