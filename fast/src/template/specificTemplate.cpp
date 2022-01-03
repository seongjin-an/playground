//
// Created by seongjin on 22. 1. 2..
//

#include <iostream>
#include "swap.h"

using namespace std;

int main(){
    int x = 10, y = 20;
    float x1 = 1.f, y1 = 2.f;
    std::swap<int>(x, y);
    cout << x << endl;
    cout << y << endl;
}