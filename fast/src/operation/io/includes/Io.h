//
// Created by seongjin on 21. 12. 19..
//

#ifndef PLAYGROUND_IO_H
#define PLAYGROUND_IO_H
#include <iostream>
#include <string>
class Vector{
private:
    int x;
    int y;
    int z;
public:
    Vector(){};
    Vector(int x, int y, int z);
    Vector operator~() const;
    Vector operator&(const Vector& v) const;
    Vector operator|(const Vector& v) const;
    Vector operator^(const Vector& v) const;
    Vector operator<<(int v) const;
    Vector operator>>(int v) const;
    friend std::ostream& operator<<(std::ostream& os, const Vector& v);
    friend std::istream& operator>>(std::istream& is, Vector& v);
};

#endif //PLAYGROUND_IO_H
