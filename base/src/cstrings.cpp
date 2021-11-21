//
// Created by seongjin on 21. 11. 21..
// \0

#include <iostream>
#include <cstring>

int main(){
    const int size = 15;
    char name1[size];
    char name2[size] = "C++owboy";

    std::cout << "name2: " << name2;
    std::cout << "plz enter your name: ";
    std::cin >> name1;
    std::cout << "your name is " << name1 << "!! and length is " << strlen(name1) << "...but \n";
    std::cout << sizeof(name1) << "byte array" << std::endl;
    name2[3] = '\0';
    std::cout << name2 << std::endl;
    return 0;
}