//
// Created by seongjin on 21. 12. 21..
//

#include <iostream>

using namespace std;

class Base{
private:
    int num;
public:
    Base(): num(0){
        cout << "Base" << endl;
    }
    Base(int num): num(num){
        cout << "Base(" << num << ")" << endl;
    }
    void print(){
        cout << num << endl;
    }

    void function0(){
        cout << "function0" << endl;
    }

    virtual ~Base(){
        cout << "~Base" << endl;
    }
};
class Derived: public Base{
public:
    Derived(){
        cout << "Derived" << endl;
    }
    Derived(int num): Base(num){
        cout << "Derived" << endl;
    }
    void function1(){

    }
    ~Derived(){
        cout << "~Derived" << endl;
    }
};

void func(Base& b){
    b.function0();
}
int main(){
//    Derived d(10);
    Derived d = Derived(10);
    d.print();

    Base* b = new Derived;
    b->function0();
    delete b;//need virtual...

    func(d);
}