//
// Created by seongjin on 21. 12. 21..
//

#include <iostream>

using namespace std;

class A{

};
class B0: public A{

};
class B1: public A{

};
class C0: public B0{

};
class C1: public B0{

};
class C2: public B1{

};
class C3: public B1{

};
//          A
//     B0        B1
//  C0    C1  C2     C3

int main(){
    C0 c0;
    C3 c3;
}