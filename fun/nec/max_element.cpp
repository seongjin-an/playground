//
// Created by seongjin on 22. 11. 30.
//

#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

int main() {
    std::vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int a = *std::max_element(v.begin(), v.end());
    std::cout << a << '\n';
}