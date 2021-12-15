//
// Created by seongjin on 21. 12. 15..
//

#include <iostream>
#include <string>

using namespace std;

int countDigit(int num){
    if(num==0)
        return 1;
    int count = 0;
    while(num){
        num /= 10;
        ++count;
    }
    return count;
}
int countDigit(string num){
    return countDigit(stoi(num));
}
void func(int, int); //func#int-int//name decoration or name mangling
void func(char);     //func#char
int main(){
    cout << countDigit(12345) << endl;
    cout << countDigit("12345") << endl;
    //func(10, 10); //func#int-int//static binding
    //func('a');    //func#char
}