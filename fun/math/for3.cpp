//
// Created by seongjin on 22. 11. 10.
//

#include <iostream>

int n = 5;
int k = 2;
int a[5] = {1,2,3,4,5};

int main(){
    for(int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            std::cout << i << " "<< j << '\n';
        }
    }
    return 0;
}