//
// Created by seongjin on 22. 1. 1..
//

#include <iostream>

using namespace std;

union ID{
    char chars[10];
    int integer;
};

int main(){
    ID id;
    id.integer = 10;

    int* p = reinterpret_cast<int*>(&id);
    cout << *p << endl;
}