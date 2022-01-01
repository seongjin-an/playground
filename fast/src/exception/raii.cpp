//
// Created by seongjin on 22. 1. 1..
//

#include <iostream>
#include <memory>

using namespace std;

class RAII{
public:
    int* i;
    RAII(){
        i = new int;
    }
    ~RAII(){
        cout << "~RAII" << endl;
        delete i;
    }
};
class Test{
public:
    ~Test(){
        cout << "~Test" << endl;
    }
};
void func(){
    throw "exception";
}

int main(){
//    int* i = nullptr;
//    int* j = nullptr;
//    try{
//        i = new int;
//        func();
//        delete j;
//        j = nullptr;
//        func();
//        delete i;
//    }catch(const char* e){
//        delete i;
//        delete j;
//        cout << e << endl;
//    }catch(std::runtime_error){
//        delete i;
//        delete j;
//    }catch(std::exception){
//        delete i;
//        delete j;
//    }
    try{
//        RAII raii;
        std::unique_ptr<Test> test(new Test());
        func();
    }catch(const char* e){
        cout << e << endl;
    }
}