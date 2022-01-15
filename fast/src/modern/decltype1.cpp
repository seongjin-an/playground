//
// Created by seongjin on 22. 1. 15..
//

#include <iostream>

int func(float){
    return 10;
}
int f0(float){
    return 20;
}
struct Person{
    float weight;
    float height;
};
struct Wrapper0{
    int value;
    int getValue() const{
        return value;
    };
};
struct Wrapper1{

    float value;

    float& getValue() {
        return value;
    };
};
//template<typename T>
//auto getValue(T& t) -> decltype(t.getValue()){
//    return t.getValue();
//}
template<typename T>
decltype(auto) getValue(T& t) {
    return t.getValue();
}
int main(){
    decltype(1) num0 = 10;

    decltype(num0) num1 = 20;
    decltype(num1)& num2 = num1;

    std::cout << "num0: " << num0 << std::endl;
    std::cout << "num1: " << num1 << std::endl;
    std::cout << "num2: " << num2 << std::endl;
    num2 = 30;
    std::cout << "num1: " << num1 << std::endl;
    std::cout << "num2: " << num2 << std::endl;

    const decltype(num0) num3 = 10;
    const decltype(num0)& num4 = num2;

    decltype((num0)) num5 = num0;// int&
    decltype(1 + 22.2f) num6 = 1.f;

    std::cout << "num5: " << num5 << std::endl;
    num5 = 33;
    std::cout << "num0: " << num0 << std::endl;
    std::cout << "num5: " << num5 << std::endl;

    int nums0[] = {1,2,3};
    decltype(nums0) nums1 = {1,2,3};

    decltype(func) f0;
    std::cout << "f(10.f): " << f0(10.f) << std::endl;

    decltype(func)& f1 = func;
    std::cout << "f1(10.f): " << f1(10.f) << std::endl;

    decltype(func)* f2 = func;
    std::cout << "f2(10.f): " << f2(10.f) << std::endl;

    decltype(func(1.f)) num7 = 30;

    Person p;
    decltype(p.weight) weight0;
    decltype(Person::weight) weight1;

    int num8 = 10;
    auto num9 = 20;
    decltype(num8) num10 = 30;
    decltype(auto) num11 = 30;

    std::cout << "num8: " << num8 << std::endl;
    std::cout << "num9: " << num9 << std::endl;
    std::cout << "num10: " << num10 << std::endl;
    std::cout << "num11: " << num11 << std::endl;

    int& n = num0;
    auto n0 = n;//value........
    decltype(n) n1 = num0;//int&

    Wrapper0 w0{0};
    Wrapper1 w1{1};
    getValue(w0);
    getValue(w1) = 20.f;
    std::cout << getValue(w0) << std::endl;
    std::cout << getValue(w1) << std::endl;
}