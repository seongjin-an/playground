//
// Created by seongjin on 22. 6. 28.
//

#include <iostream>

enum class Type {
    A, B, C
};

class Parent {
public:
    Parent() {}

    explicit Parent(int i) {}
};

int main() {
    int num0 = (int)Type::A;
    int num1 = int(Type::A);

    int i = 10;
    float &f = (float&)i;//reinterpret

    const int &j = i;
    int &k = (int&) j;//const cast
    int &k0 = const_cast<int&>(j);

    i = (int)Type::A;//setatic cast

    Parent p;
    p = Parent(10);
    p = (Parent)10;
}