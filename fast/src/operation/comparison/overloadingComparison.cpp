//
// Created by seongjin on 21. 12. 19..
//

#include <iostream>
#include "Comparison.h"

using namespace std;

int main(){
    String s0("abc");
    String s1("abc1");

    if(s0 == s1){
        cout << "EQUAL" << endl;
    }
    if(s0 != s1){
        cout << "NOT EQUAL" << endl;
    }
    if(s0 < s1){
        cout << " < " << endl;
    }
    if(s0 > s1){
        cout << " > " << endl;
    }else{
        cout << "no > " << endl;
    }
    if("abc" == s0){
        cout << "(\"abc\" == s0) is true" << endl;
    }
}