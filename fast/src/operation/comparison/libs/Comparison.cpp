//
// Created by seongjin on 21. 12. 19..
//

#include <iostream>
#include "Comparison.h"

String::String(const char *chars)
    : _chars(new char[strlen(chars + 1)]) {
    strcpy(_chars, chars);
}

void String::print(){
    std::cout << _chars << std::endl;
}

bool String::operator==(const String &s) const {
    return strcmp(_chars, s._chars) == 0;
}
bool String::operator==(const char *s) const {
    return strcmp(_chars, s) == 0;
}
bool String::operator!=(const String &s) const {
    return !(*this == s);
}

bool String::operator<(const String &s) const {
    return strcmp(_chars, s._chars) < 0;
}

bool String::operator>(const String& s) const{
    return strcmp(_chars, s._chars) > 0;
}

bool operator==(const char* s0, const String& s1){
    return strcmp(s0, s1._chars) == 0;
}