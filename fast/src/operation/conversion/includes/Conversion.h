//
// Created by seongjin on 21. 12. 20..
//

#ifndef PLAYGROUND_CONVERSION_H
#define PLAYGROUND_CONVERSION_H

#include <iostream>
#include <cstring>

class String{
private:
    char* _chars;
public:

    String(const char* chars);
    String(const char* s0, const char* s1);
    String(std::initializer_list<const char*> strs);

    explicit operator bool() const;
};

#endif //PLAYGROUND_CONVERSION_H
