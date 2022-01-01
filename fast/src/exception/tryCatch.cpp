//
// Created by seongjin on 22. 1. 1..
//

#include <iostream>

using namespace std;

class Parent{
public:
    virtual ~Parent(){}
};

class Child: public Parent{

};

double divide(double d, double v){
    if(v == 0){
        throw Child();
    }
    return d / v;
}
void func1(){
    divide(10, 0);
}
void func0(){
    func1();
};
int main(){
//    terminate();
//    cout << divide(10, 0) << endl;

    try{
        cout << func0() << endl;
    }catch(const char* e){
        cout << e << endl;
    }catch(Child&){
        cout << "Child" << endl;
    }catch(Parent&){
        cout << "Parent" << endl;
    }catch(...){
        cout << "..." << endl;
    }
}