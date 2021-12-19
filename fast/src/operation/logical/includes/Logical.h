//
// Created by seongjin on 21. 12. 19..
//
#include <cstring>
#ifndef PLAYGROUND_LOGICAL_H
#define PLAYGROUND_LOGICAL_H
class String{
private:
    char* _chars;
public:
    String(const char* chars);
    bool operator!() const;
    bool operator||(bool b) const;
};
#endif //PLAYGROUND_LOGICAL_H