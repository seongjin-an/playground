#include <iostream>
#include <thread>

#include "shape.h"

Rectangle::Rectangle(int width, int height): _width(width), _height(height){}

int Rectangle::getSize() const {
    std::thread t([this]() {std::cout << "Calculate ..." << std::endl; });
    t.join();
    
    return _width * _height;
}