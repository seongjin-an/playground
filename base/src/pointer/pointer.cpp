//
// Created by seongjin on 21. 11. 21..
//

#include <iostream>
int main(){
    int updates = 6;
    int *p_updates;

    p_updates = &updates;

    std::cout << "value: updates=" << updates << ", *p_updates=" << *p_updates << std::endl;
    std::cout << "address: &updates=" << &updates << ", p_updates=" << p_updates << std::endl;

    *p_updates = *p_updates + 1;
    std::cout << "changed updated=" << updates << std::endl;

    return 0;
}