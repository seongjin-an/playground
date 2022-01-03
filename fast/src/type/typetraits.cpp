//
// Created by seongjin on 22. 1. 2..
//

#include <iostream>
#include <type_traits>

using std::cout;
using std::endl;

template<typename T>
struct is_pointer{
    static const bool value = false;
};
template<typename T>
struct is_pointer<T*>{
    static const bool value = true;
};
template<typename T>
void foo(T t){
    cout << is_pointer<T>::value << endl;
}

template<typename T>
struct remove_pointer{
    using type = T;
};
template<typename T>
struct remove_pointer<T*>{
    using type = T;
};

template<typename T>
struct add_pointer{
    using type = T*;
};
template<typename T>
struct add_pointer<T&>{
    using type = T*;
};

int main(){
    cout << std::boolalpha;
//    cout << std::is_pointer<int*>::value << endl;
    cout << is_pointer<int>::value << endl;

    int num = 0;
    int* pNum = &num;
    foo(num);
    foo(pNum);

    int num1 = 0;
    std::add_pointer<int>::type pNum1 = &num1;
//    std::add_pointer_t<int>;
    *pNum1 = 10;
    cout << num1 << endl;

    std::remove_pointer<int*>::type num2 = 100;
    cout << num2 << endl;

    remove_pointer<int*>::type num3 = 1000;
    cout << num3 << endl;

    int num4 = 10000;
    add_pointer<int>::type num5 = &num4;
    cout << *num5 << endl;

    int num6 = 22;
    add_pointer<int&>::type num7 = &num6;
    cout << *num7 << endl;
}