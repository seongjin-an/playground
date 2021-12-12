//
// Created by seongjin on 21. 12. 12..
//

#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char str0[100] = "abcd";
    char* str1 = str0;

    cout << str0 << endl;
    cout << str1 << endl;

    const char* str2 = "hello";

    cout << typeid("hello").name() << endl;

    cout << strlen(str2) << endl;
    strcpy(str0, str2);

    cout << str0 << endl;
    cout << strcmp(str0, str2) << endl;
}