//
// Created by user on 2022-12-03.
//

#include <iostream>
#include <vector>

std::vector<int> v;

int main() {
    for (int i = 1; i <= 6; i++) v.push_back(i);
    int i = 1;
    int temp = v[i];
    v[i] = v[i + 1];
    v[i + 1] = v[i + 2];
    v[i + 2] = v[i + 3];
    v[i + 3] = temp;
    for (int i : v) std::cout << i <<  ' ';
    return 0;
}