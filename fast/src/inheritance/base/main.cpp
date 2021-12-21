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