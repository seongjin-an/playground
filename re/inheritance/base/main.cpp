//
// Created by seongjin on 21. 12. 21..
//

#include <iostream>

using namespace std;

class Base{
private:
    int num0;
public:
    void set(int n){
        this->num0 = n;
    }
    void get(){
        cout << this->num0 << endl;
    }
};

class Derived: public Base{
public:
    void foo(){
        set(10);
        get();
    }
};

int main(){
    Derived d;
    d.foo();
}

/*
• public inheritance makes public members of the base class public in the derived class, and the protected members of the base class remain protected in the derived class.
• protected inheritance makes the public and protected members of the base class protected in the derived class.
• private inheritance makes the public and protected members of the base class private in the derived class.
출처: <https://www.programiz.com/cpp-programming/public-protected-private-inheritance>
*/