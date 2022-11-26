//
// Created by seongjin on 22. 11. 26.
//

#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> v;

int main() {
    for (int i = 1; i < 10; i++) v.push_back(i);

    std::rotate(v.begin(), v.begin() + v.size() - 1, v.end());
    for (std::vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
        std::cout << ' ' << *it;
    }
    std::cout << '\n';
}