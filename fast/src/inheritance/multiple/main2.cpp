//
// Created by seongjin on 21. 12. 22..
//

#include <iostream>

using namespace std;

class Base{
public:
    int m = 10;
    Base(){}
    Base(int m): m(m){
        cout << "Base(" << m << ")" << endl;
    }
};
class BaseA: virtual public Base{
public:
    BaseA(): Base(10){
        cout << "BaseA" << endl;
    }
};
class BaseB: virtual public Base{
public:
    BaseB(): Base(20){
        cout << "BaseB" << endl;
    }
};
class Derived: public BaseA, public BaseB{
public:
    Derived(): Base(30){
        cout << "Derived" << endl;
    }
};

int main(){
    Derived d;
    cout << d.BaseA::m << endl;
    cout << d.BaseB::m << endl;
}