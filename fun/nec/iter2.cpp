//
// Created by seongjin on 22. 11. 25.
//

#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> v;

int main() {
    int a[4] = {2, 4, 6, 8};
    std::cout << a << '\n';
    std::cout << "&a[0] : " << &a[0] << '\n';
    std::cout << "&a[1] : " << &a[1] << '\n';
    std::cout << &a[1] - &a[0] << '\n'; // 상대적 거리;
    for (int i = 2; i <= 5; i++) v.push_back(i);
    v.push_back(7);
    std::cout << (std::upper_bound(v.begin(), v.end(), 6) - v.begin()) << '\n';
    std::cout << std::lower_bound(v.begin(), v.end(), 6) - v.begin() << '\n';
    std::cout << std::upper_bound(v.begin(), v.end(), 9) - v.begin() << '\n';
    std::cout << std::lower_bound(v.begin(), v.end(), 9) - v.begin() << '\n';
    std::cout << std::upper_bound(v.begin(), v.end(), 0) - v.begin() << '\n';
    std::cout << std::lower_bound(v.begin(), v.end(), 0) - v.begin() << '\n';
}