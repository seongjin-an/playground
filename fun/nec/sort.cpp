//
// Created by seongjin on 22. 12. 5.
//

#include <iostream>
#include <vector>
#include <algorithm>

bool cmp (int a, int b) {
    return a > b;
}

int main() {

    std::vector<int> v;
    for (int i = 1; i<= 6; i++) v.push_back(i);
    std::sort(v.begin(), v.end(), std::greater<int>());
    for (int i : v) std::cout << i << " ";

    std::vector<std::pair<int,int>> v2;
    for (int i = 1; i <=6; i++) v2.push_back({i, i});
    std::sort(v2.begin(), v2.end(), std::greater<std::pair<int, int>>());
    for (auto i : v2) std::cout << i.first << ' ' << i.second << '\n';

    v.clear();
    for (int i = 1; i<= 6; i++) v.push_back(i);
    std::sort(v.begin(), v.end(), cmp);
    for (int i : v) std::cout << i << ' ';

    return 0;
}