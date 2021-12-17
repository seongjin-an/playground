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

add_executable(structure src/complex/structure.cpp)
add_executable(union src/complex/union.cpp)
add_executable(array src/complex/array.cpp)
add_executable(rangefor src/complex/rangefor.cpp)

add_executable(pointer src/pointer/pointer.cpp)
add_executable(ptrArr src/pointer/ptrArr.cpp)
add_executable(ptrStr src/pointer/ptrStr.cpp)
add_executable(dynamicPtr src/pointer/dynamicPtr.cpp)
add_executable(nullPtr src/pointer/nullPtr.cpp)
add_executable(voidPtr src/pointer/voidPtr.cpp)
add_executable(vector src/pointer/vector.cpp)
add_executable(ref src/pointer/ref.cpp)

add_executable(func src/function/argFunc.cpp)
add_executable(recursive src/function/recursive.cpp)
add_executable(treeNode src/function/treeNode.cpp)
add_executable(callByValue src/function/callByValue.cpp)
add_executable(callByValue2 src/function/callByValue2.cpp)
add_executable(callByReference src/function/callByReference.cpp)
add_executable(callByReference2 src/function/callByReference2.cpp)
add_executable(callByReference3 src/function/callByReference3.cpp)
add_executable(defaultArg src/function/defaultArg.cpp)
add_executable(overloading src/function/overloading.cpp)
add_executable(functionPointer src/function/functionPointer.cpp)
add_executable(functionPointer2 src/function/functionPointer2.cpp)
add_executable(functionPointer3 src/function/functionPointer3.cpp)
add_executable(agreementCallingFunc src/function/agreementCallingFunc.cpp)
add_executable(inline src/function/inline.cpp)