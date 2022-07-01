//
// Created by seongjin on 22. 7. 1.
//

#include <iostream>

union Union {
    int i;
    float f;
    double d;
};

int main() {
    int num = 127;
    int *pNum0 = &num;
    int *pNum1 = &num;
    int *pNum2 = pNum0;

    std::cout << "&num: " << &num << std::endl;
    std::cout << "pNum0: " << pNum0 << std::endl;
    std::cout << "pNum1: " << pNum1 << std::endl;
    std::cout << "pNum2: " << pNum2 << std::endl;
    std::cout << std::endl;
    std::cout << "&num: " << &num << std::endl;
    std::cout << "&pNum0: " << &pNum0 << std::endl;
    std::cout << "&pNum1: " << &pNum1 << std::endl;
    std::cout << "&pNum2: " << &pNum2 << std::endl;
    std::cout << std::endl;
    std::cout << "num: " << num << std::endl;
    std::cout << "*pNum0: " << *pNum0 << std::endl;
    std::cout << "*pNum1: " << *pNum1 << std::endl;
    std::cout << "*pNum2: " << *pNum2 << std::endl;
    std::cout << std::endl;
    num = 100;
    std::cout << "num: " << num << std::endl;
    std::cout << "*pNum0: " << *pNum0 << std::endl;
    std::cout << "*pNum1: " << *pNum1 << std::endl;
    std::cout << "*pNum2: " << *pNum2 << std::endl;

    Union u;

    int *ip = (int*)&u;
    float *fp = (float*)&u;
    double *dp = (double*)&u;

    u.d = 1;
//    u.i = 1;
//    u.f = 1;

    std::cout << *ip << std::endl;
    std::cout << *fp << std::endl;
    std::cout << *dp << std::endl;

    int num2 = 10;
    const int* pNum22 = &num2;

    int num0 = 20;
    pNum22 = &num0;
//    *pNum22 = 30;//error const int*

    int num3 = 10;
    int *const pNum33 = &num3;//address const
//    pNum33 = &num0;//eeror int *const
}