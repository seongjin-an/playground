//
// Created by seongjin on 22. 7. 14.
//

#include <iostream>

class Vector {
private:
    std::string name;
    float x;
    float y;
    float z;
public:
    Vector(float x, float y, float z): x(x), y(y), z(z){}
    Vector(std::string name, float x, float y, float z) : name(name), x(x), y(y), z(z) {}

    void setName(std::string _name){
        name = _name;
    }



    // unary operator #1
    Vector operator+() const {
        return *this;
    }

    // #2
    Vector operator-() const {
        return Vector{-x, -y, -z};
    }

    // #3
    Vector operator+(const Vector &v) const {
        return Vector{x +v.x, y + v.y, z + v.z};
    }

    // #4
    Vector operator-(const Vector &v) const {
        return Vector{x - v.x, y - v.y, z - v.z};
    }

    // #5
    float operator*(const Vector &v) const {
        return x * v.x + y * v.y + z * v.z;
    }

    // #6
    Vector operator*(float v) const {
        return Vector{x * v, y * v, z * v};
    }

    // #7
    Vector operator/(float v) const {
        return Vector{x / v, y / v, z / v};
    }

    // #8
    Vector &operator++(){
        ++x;
        ++y;
        ++z;
        return *this;
    }

    // #9
    Vector operator++(int){
        Vector temp = *this;
        ++(*this);
        return temp;
    }

    // #10
    Vector &operator--(){
        --x;
        --y;
        --z;
        return *this;
    }

    // #11
    Vector operator--(int){
        Vector temp = *this;
        --(*this);
        return temp;
    }

    void print() const {
        std::cout << name <<  "(x=" << x << ", y=" << y << ", z=" << z  << ")"<< std::endl;
    };

    friend Vector operator*(float v0, const Vector &v1);
};
//operator+ must be a unary or binary operator (has 3 parameters)
Vector operator*(float v0, const Vector &v1){
    return Vector{v0 * v1.x, v0 * v1.y, v0 * v1.z};
}

int main() {
    const Vector v0{"v0", 0, 1, 2};
    const Vector v1{"v1", 1, 2, 3};
    v0.print();
    v1.print();

    //단항 연산자 unary operator
    Vector v2 = +v0; // unary operator #1
    v2.setName("v2");
    v2.print();

    //unary operator -, -vector = vector
    Vector v3 = -v0; // unary operator #2
    v3.setName("v3");
    v3.print();

    // binary operator +, vector + vector = vector
    Vector v4 = v0 + v1; // #3
    v4.setName("v4");
    v4.print();

    // binary operator -, vector - vector = vector
    Vector v5 = v0 - v1;
    v5.setName("v5"); // #4
    v5.print();

    // binary operator *, vector * 3.0f = vector
    float v6 = v0 * v1; // #5
    std::cout << "v6 = " << v6 << std::endl;

    // vector * vector = float
    Vector v7 = v0 * 3.f; // #6
    v7.setName("v7");
    v7.print();

    // binary operator /, vector / 3.0f = vector
    Vector v8 = v0 / 3.0f; // #7
    v8.setName("v8");
    v8.print();

    // prefix operator ++, ++vector
    Vector v9 = ++v2; // #8
    v9.setName("v9");
    v9.print();

    // postfix operator ++, vector++
    Vector v10 = v2++; // #9
    v10.setName("v10");
    v10.print();

    // prefix operator --, --vector
    Vector v11 = --v3; // #10
    v11.setName("v11");
    v11.print();

    // postfix operator --, vector--
    Vector v12 = v3--;
    v12.setName("v12");
    v12.print();

    std::cout << "/////////////////////////////////////////////////" << std::endl;
    Vector result = 3.0f * v1;
    result.setName("result");
    result.print();
    Vector result2 = operator*(3.0f, v1);
    result2.setName("result2");
    result2.print();
}