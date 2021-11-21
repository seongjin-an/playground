//
// Created by seongjin on 21. 11. 21..
//

#include <iostream>
char *buildstr(char c, int n);
int main(){
    int times;
    char ch;

    std::cout << "enter character: ";
    std::cin >> ch;

    std::cout << "enter integer: ";
    std::cin >> times;

    char *ps = buildstr(ch, times);
    std::cout << ps << std::endl;

    delete []ps;
    ps = buildstr('+', 20);
    std::cout << ps << "-DONE-" << ps << std::endl;
    delete []ps;
    return 0;
}

char *buildstr(char c, int n){
    char *pstr = new char[n + 1];
    pstr[n] = '\0';
    while(n-- > 0){
        pstr[n] = c;
    }
    return pstr;
}