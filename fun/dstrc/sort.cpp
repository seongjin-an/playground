//
// Created by seongjin on 22. 9. 18.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

bool cmp(std::pair<int, int> a, std::pair<int, int> b);

bool func(int a, int b);

int main() {
    std::vector<int> a;
    int b[5];
    std::cout << "initialize b" << '\n';
    for (int i = 5; i >= 1; i--) {
        b[i - 1] = i;
        std::cout << i << ' ';
    }
    std::cout << '\n';
    std::cout << "initialize a" << '\n';
    for (int i = 5; i >= 1; i--) {
        a.push_back(i);
        std::cout << i << ' ';
    }
    std::cout << "\n\n";


    //오름차순
    std::cout << "sort b ascending" << '\n';
    std::sort(b, b + 5);
    for(int i : b) std::cout << i << ' ';
    std::cout << '\n';
    std::cout << "sort a ascending" << '\n';
    std::sort(a.begin(), a.end());
    for(int i : a) std::cout << i << ' ';
    std::cout << '\n';

    //내림차순
    std::cout << "sort b descending" << '\n';
    std::sort(b, b + 5, std::greater<int>());
    for(int i : b) std::cout << i << ' ';
    std::cout << '\n';
    std::cout << "sort a descending" << '\n';
    std::sort(a.begin(), a.end(), std::greater<int>());
    for(int i : a) std::cout << i << ' ';
    std::cout << '\n';

    //ascending default
    std::cout << "sort b ascending" << '\n';
    std::sort(b, b + 5, std::less<int>());
    for(int i : b) std::cout << i << ' ';
    std::cout << '\n';
    std::cout << "sort a ascending" << '\n';
    std::sort(a.begin(), a.end(), std::less<int>());
    for(int i : a) std::cout << i << ' ';
    std::cout << '\n';
    std::cout <<"/////////////////////////////////////////////////////////////////////////////" << '\n';

    std::vector<std::pair<int , int>> v;
    for (int i = 10; i >= 1; i--) {
        std::pair<int, int> p = std::make_pair(i, 10 - i);
        v.push_back(p);
    }
    std::sort(v.begin(), v.end()); // first, second, third 순으로 오름차순 정렬을 한다.
//    for (std::pair<int, int> it : v) std::cout << "first : " << it.first << " / second : " << it.second << '\n';
    for (auto it : v) std::cout << "first : " << it.first << " / second : " << it.second << '\n';

    std::cout <<"/////////////////////////////////////////////////////////////////////////////" << '\n';

    std::vector<std::pair<int, int>> v2;
    for (int i = 10; i >= 1; i--) {
        v2.push_back({i, 10 - i});
    }
    std::sort(v2.begin(), v2.end(), cmp);
    for(std::pair<int, int> it : v) std::cout << "first : " << it.first << " / second : " << it.second << '\n';
//    for(auto it: v) std::cout << "first : " << it.first << " / second : " << it.second << '\n';

    std::cout <<"/////////////////////////////////////////////////////////////////////////////" << '\n';

    std::vector<int> v3;
    for(int i = 0; i < 10; i++) v3.push_back(i);
    std::sort(v3.begin(), v3.end(), func);

    std::cout <<"finished" << '\n';
    return 0;
}

bool cmp(std::pair<int, int> a, std::pair<int, int> b) {
    return a.first > b.first;
}

bool func(int a, int b) {
    return a > b;
}