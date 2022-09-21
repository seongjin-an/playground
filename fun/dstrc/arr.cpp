//
// Created by user on 2022-09-21.
//

#include <iostream>

int main() {
    int a[5];
    int temp[5];
    for(int i = 2; i < 7; i++) a[i] = i;
    std::cout << "sizeof(a) : " << sizeof(a) << '\n';
    memcpy(temp, a, sizeof(a) / sizeof(int));
    for(int i : temp) std::cout << i << ' ';
    return 0;
}