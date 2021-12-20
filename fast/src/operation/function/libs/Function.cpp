//
// Created by seongjin on 21. 12. 21..
//

#include "Function.h"

int Max::operator()(int x) {
    return _max = std::max(x, _max);
}

double Average::operator()(double value) {
    _size += 1;
    _total += value;
    return _total / _size;
}

void Print::operator()(int v) const {
    std::cout << v << std::endl;
}