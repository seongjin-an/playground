//
// Created by seongjin on 21. 12. 21..
//

#ifndef PLAYGROUND_FUNCTION_H
#define PLAYGROUND_FUNCTION_H

#include <iostream>
#include <algorithm>
#include <numeric>
#include <array>

class Max{
private:
    int _max = std::numeric_limits<int>::min();
public:
    int operator()(int x);
};

struct Average{
private:
    double _total = 0;
    int _size = 0;
public:
    double operator()(double value);
};

struct Print{
public:
    void operator()(int v) const;
};

#endif //PLAYGROUND_FUNCTION_H
