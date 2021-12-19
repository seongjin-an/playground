//
// Created by seongjin on 21. 12. 19..
//

#include "Logical.h"
String::String(const char *chars) {
    strcpy(_chars, chars);
}
bool String::operator!() const {
    return strlen(_chars) == 0;
}
bool String::operator||(bool b) const {
    return strlen(_chars) > 0 || b;
}