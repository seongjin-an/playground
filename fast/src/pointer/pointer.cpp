//
// Created by seongjin on 21. 12. 12..
//

#include <iostream>

using namespace std;

union Union{
    int i;
    float f;
    double d;
};

int main(){
    int num = 147;
    int* pNum0 = &num;
    int* pNum1 = &num;
    int* pNum2 = pNum0;

    cout << "&num: " << &num << endl;
    cout << "pNum0: " << pNum0 << endl;
    cout << "pNum1: " << pNum1 << endl;
    cout << "pNum2: " << pNum2 << endl;
    cout << endl;

    cout << "num: " << num << endl;
    cout << "*pNum0: " << *pNum0 << endl;
    cout << "*pNum1: " << *pNum1 << endl;
    cout << "*pNum2: " << *pNum2 << endl;
    cout << endl;

    num = 100;
    cout << "num: " << num << endl;
    cout << "*pNum0: " << *pNum0 << endl;
    cout << "*pNum1: " << *pNum1 << endl;
    cout << "*pNum2: " << *pNum2 << endl;

    Union u;

    int* ip = (int*)&u;
    float* fp = (float*)&u;
    double* dp = (double*)&u;

    u.d = 1;
//    u.i = 1;
//    u.f = 1.1f;
    cout << *ip << endl;
    cout << *fp << endl;
    cout << *dp << endl;

    int num2 = 10;
    const int* pNum22 = &num2;//value const

    int num0 = 20;
    pNum22 = &num0;
//    *pNum22 = 30;//error const int*

    int num3 = 10;
    int* const pNum33 = &num3;//address const

//    pNum33 = &num0;//error int* const//


}