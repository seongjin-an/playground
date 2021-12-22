//
// Created by seongjin on 21. 12. 22..
//

#include <iostream>

using namespace std;

class BaseA{
public:
    int m = 10;
    void foo(){
        cout << "BaseA" << endl;
    }
};
class BaseB{
public:
    int m = 20;
    void foo(){
        cout << "BaseB" << endl;
    }
};
class Derived: public BaseA, public BaseB{

};

int main(){
    Derived d;
    d.BaseA::foo();
    d.BaseB::foo();
    cout << d.BaseA::m << endl;
    cout << d.BaseB::m << endl;

    BaseA& ba = d;
    ba.foo();

    BaseB* bb = &d;
    bb->foo();
}