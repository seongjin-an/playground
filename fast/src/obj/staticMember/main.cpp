//
// Created by seongjin on 21. 12. 19..
//

#include <iostream>
#include "Static.h"
int Person::num = 0;
using namespace std;
int main(){
    Person p0;
    Person p1;

    p0.print();
    p1.print();

    Person::print();
}