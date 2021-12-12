//
// Created by seongjin on 21. 12. 12..
//

#include <iostream>

using namespace std;

int main(){
    int* p = new int;
    delete p;

    p = nullptr;

    if(p == nullptr){
        cout << "hello" << endl;
    }

    std::nullptr_t a;
    int* ptr = a;
}