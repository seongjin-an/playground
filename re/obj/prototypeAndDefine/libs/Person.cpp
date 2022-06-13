//
// Created by seongjin on 21. 12. 17..
//

#include "Person.h"

Person::Person(float weight, float height, const std::string& name)
        : _weight(weight), _height(height), _name(name){
}
void Person::print(){
    std::cout << _name << std::endl;
}

void foo(){
    Person p(50.f, 173.f, "daniel");
    p.print();
}

