//
// Created by seongjin on 22. 11. 24.
//

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> a;
    for (int i = 1; i <= 3; i++) a.push_back(i);
    for (int i = 5; i <= 10; i++) a.push_back(i);
    std::cout << std::lower_bound(a.begin(), a.end(), 4) - a.begin() << '\n';
    return 0;
}