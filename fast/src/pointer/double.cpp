//
// Created by seongjin on 21. 12. 17..
//

#include <iostream>

using namespace std;
void func(int argc, char** argv){
    for(int i = 0; i < argc; ++i){
        cout << argv[i] << endl;
    }
}
void func2(int argc, char* argv[]){
    for(int i = 0; i < argc; ++i){
        cout << argv[i] << endl;
    }
}
void func3(int argc, char (*argv)[5]){
    for(int i = 0; i < argc; ++i){
        cout << argv[i] << endl;
    }
}
int main(int argc, char* argv[]){
    char strs[][5] = {"abcd", "efgh"};
    func(argc, argv);
    func2(argc, argv);
    func3(2, strs);
}
// char**
// |address|address|address|address|
//    |
//    -> "cpp9_4.exe"

// char[2][5]
// |"abcd\0"|"efgh\0"|