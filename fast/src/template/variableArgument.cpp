//
// Created by seongjin on 22. 1. 2..
//

#include <iostream>
#include <cstdarg>

using namespace std;

int sum(int count...){
    int result = 0;
    va_list args;
    va_start(args, count);
    for(int i = 0; i < count; ++i){
        result += va_arg(args, int);
    }
    va_end(args);
    return result;
}

template<typename T>
T sum0(T value){
    return value;
}
template<typename T, typename... Args>
T sum0(T value, Args... args){
    return value + sum0(args...);
}

int main(){
    cout << sum(4, 10, 20, 30, 40) << endl;
    cout << sum0<float>(10, 20.3f) << endl;
}