//
// Created by seongjin on 22. 6. 13..
//

#include <iostream>

struct Weapon {
    int price;
    int power;
};

Weapon upgrade(Weapon weapon) {
    std::cout << "=======================" << std::endl;
    std::cout << "weapon address: " << &weapon << std::endl;
    std::cout << "=======================" << std::endl;
    weapon.power += 10;
    weapon.price += 10;
    return weapon;
}

int main() {
    Weapon weapon{10, 20};
    std::cout << "weapon address: " << &weapon << std::endl;
    std::cout << "price: " << weapon.price << std::endl;
    std::cout << "power: " << weapon.power << std::endl;

    weapon = upgrade(weapon);

    std::cout << "weapon address: " << &weapon << std::endl;
    std::cout << "price: " << weapon.price << std::endl;
    std::cout << "power: " << weapon.power << std::endl;
}