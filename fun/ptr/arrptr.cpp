//
// Created by user on 2022-10-04.
//

#include <iostream>

void go(int a[]) {
    a[2] = 100;
}



int main() {
    int a[3] = {1, 2, 3};
    go(a);
    for (const auto &item: a) {
        std::cout << item << '\n';
    }
}