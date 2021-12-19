//
// Created by seongjin on 21. 12. 20..
//

#ifndef PLAYGROUND_STRING_H
#define PLAYGROUND_STRING_H

#include <iostream>
#include <cstring>

class String{
private:
    char* _chars;
public:
    String(const char* chars);
    const char& operator[](int index) const;
    char& operator[](int index);

    friend std::ostream& operator<<(std::ostream& os, const String& s);
};

#endif //PLAYGROUND_STRING_H
