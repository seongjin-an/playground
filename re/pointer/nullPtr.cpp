//
// Created by seongjin on 22. 7. 8.
//

#include <iostream>

int main() {
    int *p = new int;
    delete p;

    p = nullptr;

    if(p == nullptr){
        std::cout << "hello nullPtr" << std::endl;
    }

    std::nullptr_t a;
    int *ptr = a;
    p = a;
}