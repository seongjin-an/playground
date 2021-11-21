//
// Created by seongjin on 21. 11. 21..
// you can get one row using cin.getline
// cin.getline until enter
//cin.getline(arg1, arg2) arg1's length < arg2

#include <iostream>

int main(){
    const int size = 20;
    char name[size];
    char dessert[size];

    std::cout << "enter your name: " << std::endl;
    std::cin.getline(name, size);
    std::cout << "enter your favorite dessert: " << std::endl;
    std::cin.getline(dessert, size);
    std::cout << "dessert: " << dessert << std::endl;
    std::cout << "name: " << name << std::endl;
}
