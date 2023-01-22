#include <iostream>

using namespace std;

class Animal{
    public:
        int * p;
        virtual void eat() const {
            cout << "yummy" << '\n';
        }
};

class Cat: public Animal {
    public:
        virtual void eat() const override {
            cout << "yum yum" << '\n';
        }
};

class Dog: public Animal{
    public:
        virtual void eat() const override {
            cout << "yummy yummy" << '\n';
        }
};

void func(Animal *animal) {
    animal->eat();
}

int main() {
    Animal * a = new Dog();
    func(a);

    Animal a1;
    cout << &a1 << '\n';
    cout << &(a1.p) << '\n';

    Animal * animal = new Cat;
    animal->eat();
}