//
// Created by seongjin on 22. 6. 14..
//

#include <iostream>

class BaseA {
public:
    int m = 10;

    void foo() {
        std::cout << "BaseA foo()" << std::endl;
    }
};

class BaseB {
public:
    int m = 20;

    void foo() {
        std::cout << "BaseB foo()" << std::endl;
    }
};

class Derived : public BaseA, public BaseB {

};



int main() {
    Derived d;
    d.BaseA::foo();
    d.BaseB::foo();

    std::cout << d.BaseA::m << std::endl;
    std::cout << d.BaseB::m << std::endl;

    BaseA &ba = d;
    ba.foo();

    BaseB *bb = &d;
    bb->foo();
}