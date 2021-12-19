//
// Created by seongjin on 21. 12. 20..
//

#include "String.h"

String::String(const char *chars)
    : _chars(new char[strlen(chars) + 1]){
    strcpy(_chars, chars);
}

const char& String::operator[](int index) const {
    return _chars[index];
}

char& String::operator[](int index) {
    return _chars[index];
}

std::ostream& operator<<(std::ostream& os, const String& s){
    os << s._chars;
    return os;
}