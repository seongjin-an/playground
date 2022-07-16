//
// Created by seongjin on 22. 7. 16.
//

#include <iostream>
#include "compare.h"

int main() {
    String s0("abc");
    String s1("abc1");

    if(s0 == s1){
        std::cout << "EQUALS"<< std::endl;
    }
    if(s0 != s1){
        std::cout << "NOT EQUALS" << std::endl;
    }
    if(s0 < s1){
        std::cout << "<<<<<<" << std::endl;
    }else if(s0 > s1){
        std::cout << ">>>>>>" << std::endl;
    }else{
        std::cout << "EQUALS EQUALS" <<std::endl;
    }
    if("abc" == s0){
        std::cout << "abc == s0" << std::endl;
    }
}