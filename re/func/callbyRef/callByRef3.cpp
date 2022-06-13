//
// Created by seongjin on 22. 6. 13..
//

#include <iostream>

void swap(int &px, int &py) {
    int temp = px;
    px = py;
    py = temp;
}

struct Weapon {
    int price;
    int power;
};

void upgrade(Weapon &pWeapon) {
    std::cout << "&pWeapon: " << &pWeapon << std::endl;
    pWeapon.power += 10;
    pWeapon.price += 10;
}

void print(const Weapon &weapon) {
    std::cout << weapon.power << std::endl;
    std::cout << weapon.price << std::endl;
}

int main() {
    int x = 10, y = 20;
    swap(x, y);
    std::cout << x << std::endl;
    std::cout << y << std::endl;

    Weapon weapon{10, 20};
    std::cout << "&weapon: " << &weapon << std::endl;
    upgrade(weapon);
    std::cout << "&weapon: " << &weapon << std::endl;
    print(weapon);
    std::cout << "&weapon: " << &weapon << std::endl;
}