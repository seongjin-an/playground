//
// Created by seongjin on 22. 11. 9.
//

#include <iostream>

using namespace std;

int n = 5;
int k = 3;
int a[5] = {1,2,3,4,5};

int main() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            for (int k = 0; k < j; k++) {
                cout << i << " " << j << " " << k << '\n';
            }
        }
    }
    return 0;
}