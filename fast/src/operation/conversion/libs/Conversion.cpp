//
// Created by seongjin on 21. 12. 20..
//

#include "Conversion.h"

String::String(const char *chars)
    : _chars(new char[strlen(chars) + 1]){
    strcpy(_chars, chars);
}
String::String(const char *s0, const char *s1) {
    std::cout << s0 << std::endl;
    std::cout << s1 << std::endl;
}
String::String(std::initializer_list<const char *> strs) {
    for(const char* str: strs){
        std::cout << str << std::endl;
    }
}

String::operator bool() const {
    return strlen(_chars) > 0;
}