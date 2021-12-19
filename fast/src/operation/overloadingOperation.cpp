//
// Created by seongjin on 21. 12. 19..
//

#include <iostream>

using namespace std;

class Vector{
private:
    float x;
    float y;
    float z;
public:
    Vector(float x, float y, float z)
        : x(x), y(y), z(z){

    }
    Vector operator+(const Vector& v) const{
        return Vector{x + v.x, y + v.y, z + v.z};
    }
    Vector operator-(const Vector& v) const{
        return Vector{x -v.x, y - v.y, z - v.z};
    }
    float operator*(const Vector& v) const{
        return x * v.x + y * v.y + z * v.z;
    }
    Vector operator*(float v) const{
        return Vector{x * v, y * v, z * v};
    }



    Vector operator/(float v) const{
        return Vector{x / v, y / v, z / v};
    }

    Vector operator+() const{
        return *this;
    }
    Vector operator-() const{
        return Vector{-x, -y, -z};
    }

    Vector& operator++() {
        ++x;
        ++y;
        ++z;
        return *this;
    }
    Vector& operator--(){
        --x;
        --y;
        --z;
        return *this;
    }

    Vector operator++(int){
        Vector temp = *this;
        ++(*this);
        return temp;
    }
    Vector operator--(int){
        Vector temp = *this;
        --(*this);
        return temp;
    }

    friend Vector operator*(float v0, const Vector& v1);
    void print() const{
        cout << "x: " << x << " / y: " << y << " / z: " << z << endl;
    }
};
Vector operator*(float v0, const Vector& v1){
    return Vector{v0 * v1.x, v0 * v1.y, v0 * v1.z};
}
int main(){
    const Vector v0{0,1,2};
    const Vector v1{1,2,3};
    v0.print();
    v1.print();
    // unary operator +, +vector = vector
    Vector v2 = +v0;
    v2.print();
    // unary operator -, -vector = vector
    Vector v3 = -v0;
    v3.print();
    // binary operator +, vector + vector = vector
    Vector v4 = v0 + v1;
    v4.print();
    // binary operator -, vector - vector = vector
    Vector v5 = v0 - v1;
    v5.print();
    // binary operator *, vector * 3.0f = vector, vector * vector = float
    float v6 = v0 * v1;
    cout << v6 << endl;
    Vector v7 = v0 * 3.f;// v0.operator*(3.f);
    v7.print();
    // binary operator /, vector / 3.0f = vector
    Vector v8 = v0 / 3.0f;
    v8.print();
    // prefix operator ++ --, ++vector, --vector
    Vector v9 = ++v2;
    v9.print();
    Vector v10 = v2++;
    v10.print();
    // postfix operator ++ --, vector++, vector--
    Vector v11 = --v3;
    v11.print();
    Vector v12 = v3--;
    v12.print();
    cout << "////////////////////////////////" << endl;
    Vector result = 3.0f * v1;
    result.print();
    Vector result2 = operator*(3.0f, v1);
    result2.print();
}