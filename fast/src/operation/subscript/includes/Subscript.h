//
// Created by seongjin on 21. 12. 20..
//

#ifndef PLAYGROUND_SUBSCRIPT_H
#define PLAYGROUND_SUBSCRIPT_H

#include <iostream>

class Vector{
public:
    float x, y, z;

    Vector(float x, float y, float z);
    float& operator[](int index);//available to edit
    const float& operator[](int index) const;//cannot edit, and it's good to return something big
};

#endif //PLAYGROUND_SUBSCRIPT_H
