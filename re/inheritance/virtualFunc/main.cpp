//
// Created by seongjin on 22. 6. 14..
//

#include <iostream>

class Base{
public:
    virtual void func(){
        std::cout << "Base" << std::endl;
    }
};

class Derived: public Base {
public:
    virtual void func() override {
        std::cout << "Derived" << std::endl;
    }
};

class Drawn: public Derived {
public:
    virtual void func() override {
        std::cout << "Drawn" << std::endl;
    }
};

void foo(Base &base){
    base.func();
}

int main(){
    Base b;
    Derived d;

    b.func();//Base
    d.func();//Derived

    Base &b0 = d;
    b0.func();//Derived

    Base *b1 = &d;
    b1->func();//Derived

    foo(d);//Derived
    foo(b);//Base

    Drawn d2;
    foo(d2);//Drawn
}