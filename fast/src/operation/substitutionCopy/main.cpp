//
// Created by seongjin on 21. 12. 20..
//

#include "SubstitutionCopy.h"

int main(){
    Person person0(45.f, 153.f, "JSON JAVA AN");
    Person person1 = person0; //copy, shallow copy
    Person person2;
    person2 = person0;//substitution, shallow copy

    person0.print();
    person1.print();
    person2.print();
}