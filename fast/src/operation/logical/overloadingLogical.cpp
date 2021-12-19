//
// Created by seongjin on 21. 12. 19..
//

#include <iostream>
#include <string>
#include "Logical.h"

using namespace std;
bool func(){
    cout << "func.." << endl;
    return true;
}
int main(){
    String s("");
//    if(!s){//not useful, so check conversion operator later...
//        cout << "no string" << endl;
//    }
    //short circuit evaluation
    String s0("abc");
    if(s0 || func()){
        cout << "!!" << endl;
    }
}