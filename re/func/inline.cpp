//
// Created by seongjin on 22. 6. 12..
//

#include <iostream>

inline int square(int x) {
    return x * x;
}

int main() {
    int x = square(10);
    std::cout << "x: " << x << std::endl;
}