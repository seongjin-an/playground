//
// Created by seongjin on 21. 12. 14..
//

#include <iostream>

using namespace std;

struct Weapon{
    int price;
    int power;
};

void upgrade(Weapon* pWeapon){
    pWeapon->price += 10;
    pWeapon->power += 10;
}
void print(const Weapon* weapon){
    cout << weapon->price << endl;
    cout << weapon->power << endl;
}
int main(){
    Weapon weapon{10, 20};
    upgrade(&weapon);
    print(&weapon);
//    int i = 0;
//    int q = 0;
//    int* const pi = &i;
//    pi = &q;//error
//    *pi = 1;
//
//    const int* pi2 = &i;
//    *pi2 = 1;//error
//    pi2 = &q;
}
