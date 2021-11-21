//
// Created by seongjin on 21. 11. 21..
//

#include <iostream>

int main(){
    double *p3 = new double[3];

    p3[0] = 0.2;
    p3[1] = 0.5;
    p3[2] = 0.8;
    std::cout << "&p3[0]: " << &p3[0] << std::endl;
    std::cout << "p3: " << p3 << ", *(p3): " << *(p3) << std::endl;
    std::cout << "p3 + 1: " << p3 + 1 << ", *(p3 + 1): " << *(p3 + 1) << std::endl;
    std::cout << "p3 + 2: " << p3 + 2 << ", *(p3 + 2): " << *(p3 + 2) << std::endl;
    std::cout << "---------------------" << std::endl;
    std::cout << "p3[0]: " << p3[0] << std::endl;
    std::cout << "p3[1]: " << p3[1] << std::endl;
    std::cout << "p3[2]: " << p3[2] << std::endl;
    std::cout << "---------------------" << std::endl;
    p3 = p3 + 1;
    std::cout << "p3[0]: " << p3[0] << std::endl;
    std::cout << "p3[1]: " << p3[1] << std::endl;
    std::cout << "p3[2]: " << p3[2] << std::endl; //trash
    std::cout << "---------------------" << std::endl;
    p3 = p3 - 1;
    std::cout << "p3[0]: " << p3[0] << std::endl;
    std::cout << "p3[1]: " << p3[1] << std::endl;
    std::cout << "p3[2]: " << p3[2] << std::endl;
    delete []p3;
    return 0;
}