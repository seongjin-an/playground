//
// Created by seongjin on 21. 12. 19..
//

#include "Io.h"

Vector::Vector(int x, int y, int z)
    : x(x), y(y), z(z){

}
Vector Vector::operator~() const {
    return Vector(~x, ~y, ~z);
}
Vector Vector::operator&(const Vector &v) const {
    return Vector(x & v.x, y & v.y, z & v.z);
}
Vector Vector::operator|(const Vector &v) const {
    return Vector(x | v.x, y | v.y, z | v.z);
}
Vector Vector::operator^(const Vector &v) const {
    return Vector(x ^ v.x, y ^ v.y, z ^ v.z);
}
Vector Vector::operator<<(int v) const {
    return Vector(x << v, y << v, z << v);
}
Vector Vector::operator>>(int v) const {
    return Vector(x >> v, y >> v, z >> v);
}
std::ostream& operator<<(std::ostream& os, const Vector& v){
    os << v.x << " " << v.y << " " << v.z;
    return os;
}

std::istream& operator>>(std::istream& is, Vector& v){
    std::string temp;

    is >> temp;
    v.x = std::stoi(temp);

    is >> temp;
    v.y = std::stoi(temp);

    is >> temp;
    v.z = std::stoi(temp);

    return is;
}