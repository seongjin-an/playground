//
// Created by seongjin on 21. 11. 21..
//

#include <iostream>
long double probability(unsigned numbers, unsigned picks);
int main(){
    double total, choices;
    std::cout << "Enter the number of total numbers and the number of numbers to be drawn ";
    while((std::cin >> total >> choices) && choices <= total){
        std::cout << "probability that you win ";
        std::cout << probability(total, choices);
        std::cout << " it's one of those times..";
        std::cout << "Enter two numbers again ";
    }
    std::cout << "quit";
    return 0;
}

long double probability(unsigned numbers, unsigned picks){
    long double result = 1.0;
    long double n;
    unsigned p;
    for(n = numbers, p = picks; p > 0; n--, p--){
        result = result * n / p;
    }
    return result;
}