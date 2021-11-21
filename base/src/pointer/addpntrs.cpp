//
// Created by seongjin on 21. 11. 21..
//

#include <iostream>
int main(){
    double wages[3] = { 10000.0, 20000.0, 30000.0 };
    short stacks[3] = { 3, 2, 1 };

    double *pw = wages;
    short *ps = &stacks[0];

    std::cout << "pw=" << pw << ", *pw=" << *pw << std::endl;
    pw = pw + 1;
    std::cout << "pw=pw+1" << std::endl;
    std::cout << "pw=" << pw << ", *pw=" << *pw << std::endl;
    std::cout << std::endl;

    std::cout << "ps=" << ps << ", *ps=" << *ps << std::endl;
    ps = ps + 1;
    std::cout << "ps = ps + 1" << std::endl;
    std::cout << "ps=" << ps << ", *ps=" << *ps << std::endl << std::endl;

    std::cout << "wages[0]=" << wages[0] << ", wages[1]=" << wages[1] << std::endl;
    std::cout << "*wages=" << *wages << ", *(wages + 1)=" << *(wages + 1) << std::endl << std::endl;

    std::cout << "stacks[0]=" << stacks[0] << ", stacks[1]=" << stacks[1] << std::endl;
    std::cout << "*stacks=" << *stacks << ", *(stacks + 1)=" << *(stacks + 1) << std::endl << std::endl;

    std::cout << sizeof(wages) << " = sizeof(wages)\n" << sizeof(pw) << " = sizeof(pw)" << std::endl;
}