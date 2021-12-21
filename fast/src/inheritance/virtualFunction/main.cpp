//
// Created by seongjin on 21. 12. 21..
// virtual overriding

#include <iostream>

using namespace std;

class Base{
public:
    virtual void func(){
        cout << "Base" << endl;
    }
};

class Derived: public Base{
public:
    virtual void func(){
        cout << "Dervied" << endl;
    }
};
class Derived1: public Derived{
    virtual void func(){
        cout << "Derived1" << endl;
    }
};
void foo(Base& base){
    base.func();
}
int main(){
    Base b;
    Derived d;

    b.func();//Base;
    d.func();//Derived;

    Base& b0 = d;
    b0.func();//Base

    Base* b1 = &d;
    b1->func();//Base

    foo(d);
    foo(b);

    Derived1 d1;
    foo(d1);
}
