//
// Created by seongjin on 21. 12. 19..
//

#include <iostream>
#include <functional>
using namespace std;
class Person{
public:
    void print(int i){
        cout << i << endl;
    }
    static void print2(int i){
        cout << i << endl;
    }
};
void imsi(int i){
    cout << i << endl;
}
int main(){
    void (Person::*fn)(int) = &Person::print;

    Person person;
    (person.*fn)(1);

    typedef void (Person::*FuncType)(int);
    FuncType fn2 = &Person::print;
    (person.*fn2)(2);

    using FuncType2 = void(Person::*)(int);
    FuncType2 fn3 = &Person::print;
    (person.*fn3)(3);

    function<void(Person*, int)> func = &Person::print;
    func(&person, 1);

    void (*fn4)(int) = &Person::print2;
    fn4(4);
}