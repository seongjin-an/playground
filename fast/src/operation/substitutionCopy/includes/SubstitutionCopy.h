//
// Created by seongjin on 21. 12. 20..
//

#ifndef PLAYGROUND_SUBSTITUTIONCOPY_H
#define PLAYGROUND_SUBSTITUTIONCOPY_H

#include <iostream>
#include <cstring>

class Person{
private:
    float _weight;
    float _height;
//    char _name[10];
    char* _name;
public:
    Person(){};
    Person(float weight, float height, const char* name);
    Person(const Person& person);
    Person& operator=(const Person& person) ;

    void print() const;
    ~Person();
};

#endif //PLAYGROUND_SUBSTITUTIONCOPY_H
