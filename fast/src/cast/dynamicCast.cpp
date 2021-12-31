//
// Created by seongjin on 21. 12. 31..
//

#include <iostream>

using namespace std;

class Parent{
public:
    virtual ~Parent(){}
};
class Child: public Parent{
public:
    void func(){
        cout << "func" << endl;
    }
};
void foo(Parent* p){
//    Child* child = dynamic_cast<Child*>(p);
//    if(child != nullptr) {
//        child->func();
//    }
    Child& child = dynamic_cast<Child&>(*p);
    child.func();
}

class A{
public:
    ~A(){}
};
class B0: public A{

};
class B1: public A{

};
class D: public B0, public B1{

};
int main(){
    Parent* p = new Child;
    foo(p);

    A* a = new A;
    B0* b0 = static_cast<B0*>(a);//not good

}