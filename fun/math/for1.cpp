//
// Created by seongjin on 22. 11. 8.
//

#include <iostream>

using namespace std;

int n = 5;
int k = 3;
int a[5] = {1,2,3,4,5};

int main(){
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                std::cout << i << " " << j << " " << k << '\n';
            }
        }
    }
    return 0;
}