//
// Created by seongjin on 21. 11. 21..
// new basicOper

#include <iostream>
int main(){
    int nights = 1001;
    int *pt = new int;
    *pt = 1001;

    std::cout << "nights value=" << nights << ", address=" << &nights << std::endl;
    std::cout << "int value=" << *pt << ", address=" << pt << std::endl;
    std::cout << "pointer pt: " << &pt << std::endl;
    double *pd = new double;
    *pd = 10000001.0;

    std::cout << "double value=" << *pd << ", address=" << pd << std::endl;
    std::cout << "pointer pd: " << &pd << std::endl;

}