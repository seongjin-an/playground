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

int main(int argc, char *argv[]){
    char strs[][5] = {"abcd", "efgh"};
    func(argc, argv);
    func2(argc, argv);
    func3(argc, strs);
}