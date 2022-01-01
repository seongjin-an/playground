//
// Created by seongjin on 22. 1. 1..
//

#include <iostream>

using namespace std;

void func() noexcept {
    throw 1;
}

void func1(){

}

int main() noexcept(noexcept(func()) && noexcept(func1())) {
    func();
}
