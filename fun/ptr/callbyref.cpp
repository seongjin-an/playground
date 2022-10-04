//
// Created by user on 2022-10-04.
//

#include <iostream>

int idx = 2;

void go(int &idx) {
    idx = 1;
}

void go2(int idx) {
    idx = 100;
}

int main() {
    go(idx);
    std::cout << idx << '\n';
    go2(idx);
    std::cout << idx << '\n';
}