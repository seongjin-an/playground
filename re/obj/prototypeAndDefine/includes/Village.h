//
// Created by seongjin on 21. 12. 17..
//

#ifndef PLAYGROUND_VILLAGE_H
#define PLAYGROUND_VILLAGE_H

#include <vector>

class Person;//forward declaration
class Village{
private:
    std::vector<Person> persons;
public:
    void add(Person);
    void print();
};

#endif //PLAYGROUND_VILLAGE_H
