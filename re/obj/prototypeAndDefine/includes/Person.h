//
// Created by seongjin on 21. 12. 17..
//

#ifndef PLAYGROUND_PERSON_H
#define PLAYGROUND_PERSON_H
#include <iostream>
#include <string>
class Person{
private:
    float _weight;
    float _height;
    const std::string _name;
public:
    Person(float weight, float height, const std::string& name);
    void print();
};
void foo();
#endif //PLAYGROUND_PERSON_H
