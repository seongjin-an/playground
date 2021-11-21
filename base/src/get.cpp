//
// Created by seongjin on 21. 11. 21..
//

#include <iostream>

int main(){
    int size = 20;
    char name[size];
    char dessert[size];

    std::cout << "enter name: " << std::endl;
    std::cin.get(name, size).get();
    std::cout << "enter dessert: " << std::endl;
    std::cin.get(dessert, size).get();
    std::cout << "name: " << name << std::endl;
    std::cout << "dessert: " << dessert << std::endl;

    return 0;
}