//
// Created by seongjin on 21. 12. 15..
//

#include <iostream>

using namespace std;
void swap(int& px, int& py){
    int temp = px;
    px = py;
    py = temp;
}
struct Weapon{
    int price;
    int power;
};
void upgrade(Weapon& pWeapon){
    pWeapon.power += 10;
    pWeapon.price += 10;
}
void print(const Weapon& weapon){
    cout << weapon.power << endl;
    cout << weapon.price << endl;
}
int main(){
    int x = 10, y = 20;
    swap(x, y);
    cout << x << endl;
    cout << y << endl;

    Weapon weapon{10,20};
    upgrade(weapon);
    print(weapon);
}