//
// Created by seongjin on 21. 11. 21..
//

#include <iostream>

void cheers(int);
double cube(double x);
int main(void){
    cheers(5);
    std::cout << "enter value: ";
    double side;
    std::cin >> side;
    double volume = cube(side);
    std::cout << "length of one side " << side << ", volume=" << volume << std::endl;
    cheers(cube(2));
    return 0;
}

void cheers(int n){
    for(int i=0; i<n; i++){
        std::cout << "Cheers! ";
    }
    std::cout << std::endl;
}

double cube(double x){
    return x * x * x;
}