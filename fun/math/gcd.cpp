//
// Created by seongjin on 22. 11. 16.
//

#include <iostream>

// 최대공약수
int gcd(int a, int b) {
    if (a == 0) return b;
    return gcd(b % a, a);
}

// 최소공배수
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int a = 10, b = 12;
    std::cout << lcm(a, b) << '\n';
    return 0;
}