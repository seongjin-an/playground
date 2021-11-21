//
// Created by seongjin on 21. 11. 21..
//

#include <iostream>

void getValue(int);
int main(){
    getValue(3);
    std::cout << "please enter an integer: ";
    int count;
    std::cin >> count;
    getValue(count);
    std::cout << "end" << std::endl;
    return 0;
}
void getValue(int n){
    std::cout << "value: " << n << ", right?" << std::endl;
};