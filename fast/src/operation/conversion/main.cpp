//
// Created by seongjin on 21. 12. 20..
//

#include "Conversion.h"

using namespace std;

int main(){
    String s0("abc");
    String s1("abc", "def");
    String s2{"a", "b", "c"};

    bool result = bool(s0);//or !s0
    cout << result << endl;
    if(s0){
        cout << "!!" << endl;
    }
}