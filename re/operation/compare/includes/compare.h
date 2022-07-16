//
// Created by seongjin on 22. 7. 16.
//

#ifndef PLAYGROUND_COMPARE_H
#define PLAYGROUND_COMPARE_H

#include <cstring>

class String{
private:
    char *_chars;
public:
    String(const char *chars);

    void print();

    bool operator==(const String &s) const;
    bool operator==(const char *s) const;
    bool operator!=(const String &s) const;
    bool operator<(const String &s) const;
    bool operator>(const String &s) const;

    friend bool operator==(const char *s0, const String &s1);
};

#endif //PLAYGROUND_COMPARE_H
