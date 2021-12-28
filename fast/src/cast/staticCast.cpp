//
// Created by seongjin on 21. 12. 29..
//

#include <iostream>

using namespace std;

class ClassA{

};

class ClassB{

};
enum class Type{
    A, B, C
};

enum class TypeA{
    A, B, C
};
enum class TypeB{
    A, B, C
};

class Test{
public:
    explicit Test(int num){
        cout << num << " Test" << endl;
    }

    explicit operator bool() const{
        return true;
    }
};

class Parent{

};
class Child: public Parent{
public:
    int num = 10;
};
int main(){
    ClassA a;
    ClassB* b = (ClassB*)&a;//not error
//    ClassB* b = static_cast<ClassB*>(&a);//error

    float f = 1.1f;
    int i = static_cast<int>(f);
    cout << i << endl;

//    int* i2 = static_cast<int*>(&f);//error
    int* i3 = (int*)(&f);//not error

    Type type = static_cast<Type>(0);
    cout << static_cast<int>(type) << endl;

    TypeA typeA = static_cast<TypeA>(0);
    TypeB typeB = static_cast<TypeB>(typeA);
    cout << static_cast<int>(typeA) << endl;
    cout << static_cast<int>(typeB) << endl;

    Test t = static_cast<Test>(1);
//    Test t2 = 2;
    Test t3 = Test(2);
    Test t4(10);

//    bool b2 = t4;
    bool b3 = static_cast<bool>(t4);

    Child c;
    Parent& p = static_cast<Parent&>(c);
    Child& c0 = static_cast<Child&>(p);//do not this!!

    Parent p1;
    Child& c1 = static_cast<Child&>(p1);
    cout << c1.num << endl;//do not this, danger
}