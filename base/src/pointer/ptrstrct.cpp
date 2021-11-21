//
// Created by seongjin on 21. 11. 21..
//

#include <iostream>
struct inflatable{
    char name[20];
    float volume;
    double price;
};

int main(){
    inflatable *ps = new inflatable;
    std::cout << "enter name: ";
    std::cin.get(ps->name, 20);
    std::cout << "enter volume: ";
    std::cin >> (*ps).volume;
    std::cout << "enter price: ";
    std::cin >> ps->price;
    std::cout << "name: " << (*ps).name << std::endl;
    std::cout << "volume: " << ps->volume << std::endl;
    std::cout << "price: " << ps->price << std::endl;
    delete ps;
    return 0;
}