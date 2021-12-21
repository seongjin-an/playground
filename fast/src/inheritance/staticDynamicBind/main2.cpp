//
// Created by seongjin on 21. 12. 22..
//

#include <iostream>

using namespace std;

class Animal{
public:
    int* p;
    virtual void eat() const{
        cout << "냠" << endl;
    }
};

class Cat: public Animal{
public:
    virtual void eat() const override{
        cout << "냥" << endl;
    }
};

class Dog: public Animal{
public:
    virtual void eat() const override{
        cout << "멍" << endl;
    }
};

void func(Animal* animal){
    animal->eat();//
}

int main(){
    Animal* a = new Dog();
    func(a);

    Animal a1;
    cout << &a1 << endl;
    cout << &(a1.p) << endl;

    Animal* animal = new Cat;
    animal->eat();
}