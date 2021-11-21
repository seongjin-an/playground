//
// Created by seongjin on 21. 11. 21..
//

#include <iostream>
#include <string>

const int SIZE = 5;
void display(const std::string sa[], int n);
std::string imsi();
void imsi2(std::string *);
int main(){
//    std::string list[SIZE];
//    std::cout << "list: " << list << std::endl;
//    std::cout << "Enter " << SIZE << " of your favorite night sky sights" << std::endl;
//    for(int i=0; i<SIZE; i++){
//        std::cout << i + 1 << ": " ;
//        getline(std::cin, list[i]);
//    }
//    std::cout << "inputs: ";
//    display(list, SIZE);
    std::string str = imsi();
    std::cout << str << std::endl;
    std::string str2;
    imsi2(&str);
    std::cout << "str: " << str << std::endl;
    return 0;
}

void display(const std::string sa[], int n){
    std::cout << "sa: " << sa << std::endl;
    for(int i=0; i<n; i++){
        std::cout << i + 1<< ": " << sa[i] << std::endl;
    }
}

std::string imsi(){
    return "imsi";
}

void imsi2(std::string *str){
    *str = "imsi2";
}