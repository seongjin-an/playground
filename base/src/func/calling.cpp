//
// Created by seongjin on 21. 11. 21..
//

#include <iostream>
void simple();

int main(){
    std::cout << "start main()" << std::endl;
    simple();
    std::cout << "end main()" << std::endl;
    return 0;
}
void simple(){
    std::cout << "start simple()" << std::endl;
    std::cout << "end simple()" << std::endl;
}