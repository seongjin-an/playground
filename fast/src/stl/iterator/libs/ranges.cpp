//
// Created by seongjin on 22. 1. 9..
//

#include "ranges.h"

Ranges::Iterator::Iterator(unsigned int num): _num(num){

}

Ranges::Iterator& Ranges::Iterator::operator++() {
    ++_num;
    return *this;
}

bool Ranges::Iterator::operator==(const Iterator &other) const {
    return _num == other._num;
}

bool Ranges::Iterator::operator!=(const Iterator &other) const {
    return !(*this == other);
}

unsigned Ranges::Iterator::operator*() const {
    return _num;
}
Ranges::Ranges(unsigned int end): Ranges(0, end) {}
Ranges::Ranges(unsigned int begin, unsigned int end): _begin(begin), _end(end) {

}
Ranges::Iterator Ranges::begin() const {
    return Iterator(_begin);
}
Ranges::Iterator Ranges::end() const {
    return Iterator(_end);
}