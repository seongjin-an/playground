//
// Created by seongjin on 22. 9. 18.
//

#include <iostream>
#include <vector>
#include <algorithm>

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

    return 0;
}