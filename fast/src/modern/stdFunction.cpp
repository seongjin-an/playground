//
// Created by seongjin on 22. 1. 18..
//

#include <iostream>
#include <functional>

struct Func{
    int operator()(float value){
        return value;
    }
};
struct Func2{
    static int func(float value){
        return value;
    }
};
struct Func3{
    Func3(){
        std::cout << "Func3" << std::endl;
    }
    int func(float value) const{
        return value;
    }
};

void func(int n1, int n2, int n3){
    std::cout << n1 << std::endl;
    std::cout << n2 << std::endl;
    std::cout << n3 << std::endl;
}
int main(){
    std::function<int(float)> f = [](float value){return value;};
    std::cout << f(1.5f) << std::endl;

    std::function<int(float)> f2 = Func();
    std::cout << f2(5.1f) << std::endl;

    std::function<int(float)> f3 = Func2::func;
    std::cout << f3(6.5f) << std::endl;

    int(Func3::*f4)(float) const = &Func3::func;
    std::cout << (Func3().*f4)(8.2f) << std::endl;

    std::function<int(const Func3*, float)> f5 = &Func3::func;
    std::cout << f5(new Func3(), 9.1f) << std::endl;
    std::function<int(const Func3&, float)> f6 = &Func3::func;
    std::cout << f6(Func3(), 9.1f) << std::endl;

    std::function<int(float)> f7 = std::bind(&Func3::func, Func3(), std::placeholders::_1);
    std::cout << f7(10.1f) << std::endl;

    std::function<int()> f8 = std::bind(f7, 12.f);
    std::cout << f8() << std::endl;

    std::function<int(const Func3&)> f9 = std::bind(f6, std::placeholders::_1, 13.f);
    std::cout << f9(Func3()) << std::endl;

    std::bind(func, std::placeholders::_3, std::placeholders::_1, std::placeholders::_2)(1,2,3);
}