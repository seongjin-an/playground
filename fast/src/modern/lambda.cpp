//
// Created by seongjin on 22. 1. 15..
//

#include <iostream>
#include <functional>
#include <set>

void foo(std::function<void(void)> func){
    func();
}
struct Func{
    int value;
    void operator()(){
        value = 20;
        std::cout << "in struct: " << value << std::endl;
    }
};
auto fun(){
    int num = 10;
    return [=]{
        return num;
    };
}

struct Test{
    int num = 10;
    auto func(){
        std::cout << this << std::endl;
        int num = this->num;//cpp11
        return [num=num]{//cpp14
            return num;
        };
    }
};
int main(){
    int value = 10;

    auto func = [value]() mutable{
        value = 20;
        std::cout << "in lambda: " << value << std::endl;
    };
    foo(func);

    Func strFunc;
    strFunc.value = 10;
    strFunc();

    std::cout << value << std::endl;
    std::cout << "////////////////////////////////////////////////" << std::endl;
    int num = 10;
    auto func0 = [num]() mutable{
        ++num;
        return num;
    };

    std::cout << func0() << std::endl;
    std::cout << func0() << std::endl;
    std::cout << "num: " << num << std::endl;

    int num0 = 10;
    int num1 = 20;
    auto func1 = [=]() {
        return num0 + num1;
    };
    auto func2 = [&](){
        return num0 + num1;
    };
    auto func3 = [&, num0](){
        return num0 + num1;
    };
    auto func4 = [=, &num0](){
        return num0 + num1;
    };
    auto f = fun();
    std::cout << "f(): " << f() << std::endl;

    Test* t = new Test;
    auto fun0 = t->func();
    printf("%p\n", t);
    std::cout << fun0() << std::endl;
    delete t;

    void(*pfun)(int) = [](int){};

    auto fun2 = [](const int& x, const int& y){
        return x>y;
    };
    std::set<int, std::greater<int>> s{1, 2, 3};
    std::set<int, decltype(fun2)> s2(fun2);
    s2.insert(1);
    s2.insert(2);
    s2.insert(3);
    for(int num: s){
        std::cout << num << std::endl;
    }
    for(int num: s2){
        std::cout << num << std::endl;
    }

    auto fun3 = []<typename T>(T value){
        return value;
    };
    std::cout << fun3(10) << std::endl;
    std::cout << fun3("10") << std::endl;
}