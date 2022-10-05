//
// Created by user on 2022-10-05.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>

void printV(std::vector<int> &v) {
    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i] << " ";
    }
    std::cout << '\n';
}

void makePermutation(int n, int r, int depth, std::vector<int> &v) {
    if (r == depth) {
        printV(v);
        return;
    }
    for (int i = depth; i < n; i++) {
        std::swap(v[i], v[depth]);
        makePermutation(n, r, depth + 1, v);
        std::swap(v[i], v[depth]);
    }
    return;
}

int main() {
    int a[3] = {1, 2, 3};
    std::vector<int> v;
    for (int i = 0; i < 3; i++) v.push_back(a[i]);
    //1,2,3 부터 오름차순으로 순열을 뽑는다.
    do {
        printV(v);
    } while (std::next_permutation(v.begin(), v.end()));

    std::cout << "----------------------------" << '\n';
    v.clear();

    for(int i = 2; i >= 0; i--) v.push_back(a[i]);
    //3,2,1 부터 내림차순으로 순열을 뽑는다.
    do {
        printV(v);
    } while (std::prev_permutation(v.begin(), v.end()));

    std::cout << "----------------------------" << '\n';
    v.clear();

    for (int i = 0; i < 3; i++) v.push_back(a[i]);
    makePermutation(3, 3, 0, v);

    std::cout << "----------------------------" << '\n';
    v.clear();

    for (int i = 2; i >= 0; i--) v.push_back(a[i]);
    makePermutation(3, 3, 0, v);

    std::cout << "----------------------------" << '\n';

    int x = 0;
    int y = 1;
    std::cout << "x = " << x << " / y = " << y << '\n';
    std::swap(x, y);
    std::cout << "x = " << x << " / y = " << y << '\n';
    return 0;
}