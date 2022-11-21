//
// Created by seongjin on 22. 11. 18.
//

#include <iostream>

using namespace std;

// 소수
bool check(int n) {
    if (n <= 1) return 0;
    if (n == 2) return 1;
    if (n % 2 == 0) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    for (int i = 1; i<= 20; i++) {
        if (check(i)) {
            cout << i << "는 소수입니다.\n";
        }
    }
    return 0;
}