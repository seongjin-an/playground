#include <iostream>

using namespace std;

class BaseA{
    public:
        int m = 10;
        void foo() {
            cout << "BaseA" << '\n';
        }
};

class BaseB{
    public:
        int m = 20;
        void foo() {
            cout << "BaseB" << '\n';
        }
};

class Derived: public BaseA, public BaseB{

};

int main(){
    Derived d;
    d.BaseA::foo();
    d.BaseB::foo();
    cout << d.BaseA::m << '\n';
    cout << d.BaseB::m << '\n';

    BaseA & ba = d;
    ba.foo();

    BaseB * bb = &d;
    bb->foo();
}