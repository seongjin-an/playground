//
// Created by seongjin on 21. 12. 20..
//

#include "Subscript.h"
#include "String.h"

using namespace std;

int main(){
    Vector v{1,2,3};
    cout << v[0] << endl;//1
    cout << v[1] << endl;//2
    cout << v[2] << endl;//3
    cout << v[3] << endl;//3
    v[1] = 1000;
    cout << v.y << endl;

    String s("abc");
    cout << s[0] << endl;
    cout << s[1] << endl;
    cout << s[2] << endl;

    s[0] = 'd';

    cout << s << endl;
}