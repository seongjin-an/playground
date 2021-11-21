//
// Created by seongjin on 21. 11. 21..
// cin white space ... white space!!

#include <iostream>
int main(){
    const int size = 20;
    char name[size];
    char dessert[size];

    std::cout << "enter your name: " << std::endl;
    std::cin >> name;
    std::cout << "enter your favorite dessert: " << std::endl;
    std::cin >> dessert;
    std::cout << "your favorite dessert is " << dessert << ", right? " << name << std::endl;
    return 0;
}