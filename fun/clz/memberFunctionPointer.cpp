//
// Created by 안성진 on 2023/01/11.
//
#include <iostream>
#include <functional>

using namespace std;

class Person {
public:
    void print(int i) {
        cout << i << '\n';
    }
    static void print2(int i) {
        cout << i << '\n';
    }
};
void func(int i) {
    cout << i << '\n';
}

int main() {
    void (Person::*fn)(int) = &Person::print;

    Person person;
    (person.*fn)(1);

    typedef void (Person::*Print)(int);
    Print fn2 = &Person::print;
    (person.*fn2)(2);

    using Print2 = void (Person::*)(int);
    Print2 fn3 = &Person::print;
    (person.*fn3)(33);


}