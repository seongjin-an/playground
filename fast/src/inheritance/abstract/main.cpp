//
// Created by seongjin on 21. 12. 22..
//

#include <iostream>

using namespace std;

class Shape{
public:
    virtual double getArea() const = 0;//pure virtual function
    virtual ~Shape(){}
};
class Shape2{
public:
    void func(){}
    virtual ~Shape2() = 0;
};
class Circle: public Shape{
private:
    double _radius;
public:
    Circle(double radius): _radius(radius){

    }

    virtual double getArea() const override {
        return _radius * _radius * 3.14;
    }
};
class Rectangle: public Shape{
private:
    double _width;
    double _height;
public:
    Rectangle(double width, double height): _width(width), _height(height){

    }
    virtual double getArea() const override{
        return _width * _height;
    }
};

class AreaAverage{
private:
    double _total = 0;
    int _size = 0;
public:
    double operator()(Shape& shape){
        _size += 1;
        _total += shape.getArea();
        return _total / _size;
    }
};

int main(){
    Circle c(10);
    cout << c.getArea() << endl;

    Rectangle r(10, 20);
    cout << r.getArea() << endl;

    Shape* s0 = &c;
    Shape& s1 = r;

    cout << s0->getArea() << endl;
    cout << s1.getArea() << endl;

    AreaAverage aavg;
    cout << aavg(c) << endl;
    cout << aavg(r) << endl;
}