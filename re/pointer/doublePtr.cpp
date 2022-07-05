//
// Created by seongjin on 22. 7. 5.
//

#include <iostream>

void func(int argc, char **argv){
    for(int i = 0; i < argc; i++){
        std::cout << argv[i] << std::endl;
    }
}

void func2(int argc, char *argv[]){
    for(int i = 0; i < argc; i++){
        std::cout << argv[i] << std::endl;
    }
}

void func3(int argc, char (*argv)[5]){
    for(int i = 0; i < argc; i++){
        std::cout << argv[i] << std::endl;
    }
}

void fun(char *sss){
    std::cout << "sss: " << (sss) << std::endl;
}

void fun2(char sss[]){
    std::cout << "sss: " << (sss) << std::endl;
}

int main(int argc, char *argv[]){
    char strs[][5] = {"abcd", "efgh"};
    char sss[5] = "ansj";
//    char s2[] = "s2s2";
    char s2[] = {'s', '2', 's', '2', '\0'};
    std::cout << "hi " << s2 << std::endl;
    fun(sss);
    fun(sss);
    fun(s2);
    func(argc, argv);
    func2(argc, argv);
    func3(argc, strs);
    int i[] = {1,2,3};
    std::cout << i << std::endl;
}
/*
 * g++ imsi.cpp -o imsi
 */