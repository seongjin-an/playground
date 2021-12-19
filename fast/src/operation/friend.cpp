//
// Created by seongjin on 21. 12. 19..
//

#include <iostream>

using namespace std;
class VectorF;
class VectorI{
private:
    int x;
    int y;
    int z;
public:
    VectorI(int x, int y, int z)
            : x(x), y(y), z(z){
    }
    friend VectorF operator+(const VectorF& v0, const VectorI& v1);
};
class VectorF{
private:
    float x;
    float y;
    float z;
public:
    VectorF(float x, float y, float z)
        : x(x), y(y), z(z){
    }
    friend VectorF operator+(const VectorF& v0, const VectorI& v1);
};
VectorF operator+(const VectorF& v0, const VectorI& v1){
    return VectorF(v0.x + v1.x, v0.y + v1.y, v0.z + v1.z);
}
int main(){

}