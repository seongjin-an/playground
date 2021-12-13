//
// Created by seongjin on 21. 12. 14..
//

#include <iostream>

using namespace std;

struct Weapon{
    int price;
    int power;
};

Weapon upgrade(Weapon weapon){
    weapon.power += 10;
    weapon.price += 10;
    return weapon;
}

int main(){
    Weapon weapon{10, 20};

    cout << "PRICE: " << weapon.price << endl;
    cout << "POWER: " << weapon.power << endl;

    weapon = upgrade(weapon);

    cout << "PRICE: " << weapon.price << endl;
    cout << "POWER: " << weapon.power << endl;
}
//call by value
//prox: do not overwrite
//cons: overhead

