//
// Created by seongjin on 22. 1. 16..
//

#include <iostream>
#include <vector>
#include <type_traits>

template<typename T>
void foo(T&& value){// universal reference
    std::cout << "lvalue ref T: " << std::is_lvalue_reference<T>::value << std::endl; // T -> int& // T -> int
    std::cout << "rvalue ref T: " << std::is_rvalue_reference<T>::value << std::endl;

    std::cout << "lvalue ref T&: " << std::is_lvalue_reference<T&>::value << std::endl; // T& -> int& & -> int&
    std::cout << "rvalue ref T&: " << std::is_rvalue_reference<T&>::value << std::endl;

    std::cout << "lvalue ref T&&: " << std::is_lvalue_reference<T&&>::value << std::endl; // T&& -> int& && -> int& // T&& -> int && -> int&&
    std::cout << "rvalue ref T&&: " << std::is_rvalue_reference<T&&>::value << std::endl;
}
void goo(int& value){
    std::cout << "int&" << std::endl;
}
void goo(int&& value){
    std::cout << "int&&" << std::endl;
}

template<typename T>
void foo0(T&& value){//T = int& && -> int& value // (T=int)&& -> int&& value
//    goo(static_cast<T&&>(value));
    goo(std::forward<T>(value));
}

int main(){
    std::cout << std::boolalpha;
    int num(10);
    foo(num);
    std::cout << std::endl;

    int& num0 = num;
    foo(num0);
    std::cout << std::endl;

    foo(10);
    std::cout << std::endl;

    std::cout << "//////////////////////" << std::endl;
    std::vector<int> v;
    v.push_back(10);

    int num1 = 10;
    v.push_back(num1);

    std::cout << "///////////////////////" << std::endl;
    foo0(10);
    std::cout << std::endl;

    int num2 = 10;
    foo0(num2);
}

// && -> &&
// && & -> &
// & && -> &
// && && -> &&