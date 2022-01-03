//
// Created by seongjin on 22. 1. 2..
//

#include <iostream>
#include <typeinfo>

using std::cout;
using std::endl;

class Parent{
public:
    virtual ~Parent(){}
};
class Child: public Parent{

};
int main(){
    Parent* p = new Child;
    cout << typeid(*p).name() << endl;

    Parent* p1 = dynamic_cast<Parent*>(new Child);
    Parent* p2 = new Child;
//    dynamic_cast<Child*>(p2);
    cout << typeid(p2).name() << endl;
}