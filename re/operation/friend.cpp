//
// Created by seongjin on 22. 7. 9.
//

#include <iostream>

class VectorF;

class VectorI {
private:
    int x;
    int y;
    int z;
public:
    VectorI(int x, int y, int z) : x(x), y(y), z(z) {}

    friend VectorF operator+(const VectorF &v0, const VectorI &v1);
};

class VectorF {
private:
    float x;
    float y;
    float z;
public:
    VectorF(float x, float y, float z) : x(x), y(y), z(z) {}

    friend VectorF operator+(const VectorF &v0, const VectorI &v1);

    friend std::ostream &operator<<(std::ostream &os, const VectorF &v);
};

VectorF operator+(const VectorF &v0, const VectorI &v1){
    return VectorF(v0.x + v1.x, v0.y + v1.y, v0.z + v1.z);
}

std::ostream &operator<<(std::ostream &os, const VectorF &v){
    std::cout << "VectorF(x=" << v.x << ", y=" << v.y << ", z=" << v.z << ")" << std::endl;
    return os;
}

int main(){
    VectorF v0(1,2,3);
    VectorI v1(2,4,6);
    VectorF v2 = v0 + v1;

    std::cout << v2 << std::endl;
}