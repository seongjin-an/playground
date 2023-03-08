// 템플릿 매개변수를 사용하는 템플릿
#include <iostream>
#include "stacktp.h"

template<template<typename T> class Thing>
class Crab {
private:
    Thing<int> s1;
    Thing<double> s2;
public:
    Crab() {};

    // Thing 클래스가 push() 와 pop() 멤버를 가지고 있다고 가정
    bool push(int a, double x) { return s1.push(a) && s2.push(x); }

    bool pop(int &a, double &x) { return s1.pop(a) && s2.pop(x); }
};

int main() {
    using std::cout;
    using std::cin;
    Crab<Stack> nebula;
    int ni;
    double nb;
    cout << "4 4.5 와 같이 int double 쌍을 입력하라(끝내려면 0 0):\n";
    while (cin >> ni >> nb && ni > 0 && nb > 0) {
        if (!nebula.push(ni, nb))
            break;
    }
    while (nebula.pop(ni, nb))
        cout << ni << ", " << nb << '\n';
    cout << "프로그램을 종료합니다.\n";
    return 0;
}