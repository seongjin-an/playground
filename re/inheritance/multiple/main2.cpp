//
// Created by seongjin on 22. 6. 14..
//

#include <iostream>

class Base {
public:
    int m = 10;

    Base() {}

    Base(int m) : m(m) {
        std::cout << "Base(" << m << ")" << std::endl;
    }
};

class BaseA : virtual public Base {
public:
    BaseA() : Base(10) {
        std::cout << "BaseA" << std::endl;
    }
};

class BaseB : virtual public Base {
public:
    BaseB() : Base(20) {
        std::cout << "BaseB" << std::endl;
    }
};

class Derived : public BaseA, public BaseB {
public:
    Derived() : Base(30) {
        std::cout << "Derived" << std::endl;
    }
};

int main() {
    Derived d;
    std::cout << d.BaseA::m << std::endl;
    std::cout << d.BaseB::m << std::endl;
}

/*
    virtual 을 통해 가상 상속 받게 되면 A, B가 동시에 상속받는 Base클래스의
    멤버는 하나씩만 존재하게 된다.
 */