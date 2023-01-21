#include <iostream>

using namespace std;

class Base{
    public:
        int m = 10;
        Base(){
            cout << "Base" << '\n';
        }
        Base(int m): m(m){
            cout << "Base(" << m << ")" << '\n';
        }
};

class BaseA: virtual public Base{
    public:
        BaseA(): Base(10){
            cout << "BaseA" << '\n';
        }
};

class BaseB: virtual public Base{
    public:
        BaseB(): Base(20){
            cout << "BaseB" << '\n';
        }
};

class Derived: public BaseA, public BaseB{
    public:
        Derived(): Base(30){
            cout << "Derived" << '\n';
        }
};

int main() {
    Derived d;
    // cout << d.m <<'\n';
    // cout << d.BaseA::m << '\n';
    // cout << d.BaseB::m << '\n';
    return 0;
}   
