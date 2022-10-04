//
// Created by user on 2022-10-04.
//

#include <iostream>
#include <vector>

int main() {
    std::vector<int> v;
    for (int i = 0; i < 5; i++) v.push_back(i);
    for (int i = 0; i < 5; i++) {
        std::cout << i << " : " << *(v.begin() + i) << '\n';
        std::cout << &*(v.begin() + i) << '\n';
    }
    return 0;
}