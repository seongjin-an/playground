//
// Created by seongjin on 22. 6. 14..
//

#include <iostream>

class Animal {
public:
    int *p;
//    virtual void imsi() const = 0;//pure virtual function
    virtual void eat() const {}
};

class Cat : public Animal {
public:
    virtual void eat() const override {
        std::cout << "Cat" << std::endl;
    }
};

class Dog : public Animal {
public:
    virtual void eat() const override {
        std::cout << "Dog" << std::endl;
    }
};

void func(Animal *animal) {
    animal->eat();
}

int main() {
    Animal *a = new Dog;
    func(a);

    Animal a1;
    std::cout << &a1 << std::endl;
    std::cout << &(a1.p) << std::endl;

    Animal *animal = new Cat;
    animal->eat();
}