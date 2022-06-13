//
// Created by seongjin on 22. 6. 13..
//

#include <iostream>

struct Weapon {
    int price;
    int power;
};

void func(int *num){
    std::cout << "num: " << num << std::endl;
    std::cout << "&num: " << &num << std::endl;
    std::cout << "*num: " << *num << std::endl;
}

void upgrade(Weapon* pWeapon){
    std::cout << "pWeapon: " << pWeapon << std::endl;
    pWeapon->price += 10;
    pWeapon->power += 10;
}

void print(const Weapon *weapon){
    std::cout << weapon->price << std::endl;
    std::cout << weapon->power << std::endl;
}

int main(){
    Weapon weapon{10, 20};
    std::cout << "&weapon: " << &weapon << std::endl;
    upgrade(&weapon);
    std::cout << "&weapon: " << &weapon << std::endl;
    print(&weapon);
    std::cout << "&weapon: " << &weapon << std::endl;

    int num1 = 11;
    std::cout << "&num1:" << &num1 << std::endl;
    func(&num1);
}