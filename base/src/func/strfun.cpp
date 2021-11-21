//
// Created by seongjin on 21. 11. 21..
//

#include <iostream>
unsigned int c_in_str(const char *, char);
int main(){
    char mmm[15] = "minimum";

    char *wail = "ultimate";

    unsigned int ms = c_in_str(mmm, 'm');
    unsigned int us = c_in_str(wail, 'u');
    std::cout << mmm << ", m count: " << ms << std::endl;
    std::cout << wail << ", u count: " << us << std::endl;
    return 0;
}

unsigned int c_in_str(const char *str, char ch){
    int count = 0;
    while(*str){
        if(*str == ch){
            count++;
        }
        str++;
    }
    return count;
}