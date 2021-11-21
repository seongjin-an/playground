//
// Created by seongjin on 21. 11. 21..
//

#include <iostream>

int main(){
    int donuts = 6;
    double cups = 4.5;

    std::cout << "donuts value: " << donuts << ", donuts address: " << &donuts << std::endl;
    std::cout << "cups value: " << cups << ", cups address: " << &cups << std::endl;
    return 0;
}