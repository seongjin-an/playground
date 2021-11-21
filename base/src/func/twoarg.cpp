//
// Created by seongjin on 21. 11. 21..
//

#include <iostream>
void n_chars(char, int);
int main(){
    int times;
    char ch;

    std::cout << "enter string: ";
    std::cin >> ch;

    while(ch != 'q'){
        std::cout << "enter value: ";
        std::cin >> times;
        n_chars(ch, times);
        std::cout << "\npress q to exit. please enter another character to continue ";
        std::cin >> ch;
    }
    std::cout << "times=" << times << std::endl;
    std::cout << "exit" << std::endl;
    return 0;
}

void n_chars(char c, int n){
    while(n-- > 0){
        std::cout << c;
    }
}