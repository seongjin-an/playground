cmake_minimum_required(VERSION 3.16)

set(CMAKE_CXX_STANDARD 14)

add_executable(printf src/stdio/printf.cpp)
add_executable(scanf src/stdio/scanf.cpp)
add_executable(scanfFlush src/stdio/scanfFlush.cpp)
add_executable(scanfInput src/stdio/scanfInput.cpp)

add_executable(cout src/stdio/cout.cpp)
add_executable(cin src/stdio/cin.cpp)
add_executable(cinFlush src/stdio/cinFlush.cpp)
add_executable(cinFlush2 src/stdio/cinFlush2.cpp)
add_executable(cinboolalpha src/stdio/cinboolalpha.cpp)

add_executable(bit src/oper/bit.cpp)
add_executable(bit2 src/oper/bit2.cpp)
add_executable(bit3 src/oper/bit3.cpp)
add_executable(bit4 src/oper/bit4.cpp)