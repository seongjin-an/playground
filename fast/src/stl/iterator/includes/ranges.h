//
// Created by seongjin on 22. 1. 9..
//

#ifndef PLAYGROUND_RANGES_H
#define PLAYGROUND_RANGES_H

class Iterator;
class Ranges{

private:
    unsigned _begin;
    unsigned _end;
    class Iterator{
    private:
        unsigned _num;
    public:
        Iterator(unsigned num);
        Iterator& operator++();
        bool operator==(const Iterator& other) const;
        bool operator!=(const Iterator& other) const;
        unsigned operator*() const;
    };
public:
    Ranges(unsigned end);
    Ranges(unsigned begin, unsigned end);
    Iterator begin() const;
    Iterator end() const;

};

#endif //PLAYGROUND_RANGES_H
