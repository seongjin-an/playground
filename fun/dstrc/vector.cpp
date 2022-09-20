//
// Created by seongjin on 22. 9. 20.
//

#include <iostream>
#include <vector>
#include <algorithm>

void f(std::vector<int> &v);
void f(std::vector<int> v[10]);
void f(std::vector<std::vector<int>> &v);

int main() {
    std::vector<int> v0;
    for(int i = 0; i < 10; i++) v0.push_back(i);
    for(int a : v0) std::cout << a << " ";
    std::cout << '\n';
    v0.pop_back();

    for(int a : v0) std::cout << a << " ";
    std::cout << '\n';

    v0.erase(v0.begin(), v0.begin() + 1);

    for(int a : v0) std::cout << a << " ";
    std::cout << '\n';

    auto a = std::find(v0.begin(), v0.end(), 100);
    if(a == v0.end()) std::cout << "not found!!" << '\n';

    std::fill(v0.begin(), v0.end(), 10);
    for(int a : v0) std::cout << a << " ";
    std::cout << '\n';
    v0.clear();
    std::cout << "EMPTY??\n";
    for(int a : v0) std::cout << a << " ";
    std::cout << '\n';

    std::cout << "\n/////////////////////////////////////" << '\n';

    std::vector<int> v;
    for (int i = 1; i <= 3; i++) v.push_back(i);
    f(v);
    for (int i = 1; i <= 3; i++) std::cout << i << " ";

    std::cout << "\n/////////////////////////////////////" << '\n';

    std::vector<int> v2[10];
    v2[0].push_back(100);
    f(v2);
    for (int i : v2[0]) std::cout << i << " ";

    std::cout << "\n/////////////////////////////////////" << '\n';

    std::vector<std::vector<int>> v3;
    f(v3);
    for (int i : v3[0]) std::cout << i << " ";
    return 0;
}

void f(std::vector<int> &v) {
    v[0] = 100;
}
void f(std::vector<int> v[10]) {
    v[0][0] = 1000;
}
void f(std::vector<std::vector<int>> &v) {
    std::vector<int> vv;
    vv.push_back(10000);
    v.push_back(vv);
}