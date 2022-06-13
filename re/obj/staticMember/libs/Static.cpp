//
// Created by seongjin on 21. 12. 19..
//

#include <iostream>
#include "Static.h"

Person::Person() {
    num++;
}

void Person::print() {
    std::cout << num << std::endl;
}