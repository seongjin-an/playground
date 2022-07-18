//
// Created by seongjin on 22. 7. 18.
//

#include "conversion.h"

class Foo{
public:
    int m_foo;
    explicit Foo(int foo): m_foo(foo){}
};
void printM_foo(Foo foo){
    std::cout << foo.m_foo << std::endl;
}

int main() {
    String s0("abc");
    String s1("abc", "def");
    String s2{"a", "b", "c"};

    bool result = bool(s0);
    std::cout << result << std::endl;
    if(s0){
        std::cout <<"!!" << std::endl;
    }
    int num = 43;
    Foo foo(num);
    printM_foo(foo);
}