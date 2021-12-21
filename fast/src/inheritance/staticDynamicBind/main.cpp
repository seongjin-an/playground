//
// Created by seongjin on 21. 12. 22..
// overloading: static / overriding: dynamic

#include <iostream>

using namespace std;

class A{
public:
    int num;
};
class B: public A{

};
A operator+(const A& x, const A& y){
    A a;
    a.num = x.num + y.num;
    return a;
}
B operator+(const B& x, const B& y){
    B b;
    b.num = x.num * y.num;
    return b;
}
int main(){
    B b0, b1;
    b0.num = 10;
    b1.num = 20;

    A& a0 = b0;
    A& a1 = b1;

    A a2 = a0 + a1;
    cout << a2.num << endl;
}