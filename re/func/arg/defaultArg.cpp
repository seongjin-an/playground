//
// Created by seongjin on 22. 6. 12..
//

#include <iostream>

struct Person {
    float height;
    float weight;
};

void print(Person *person = nullptr) {
    if (person) {
        std::cout << "weight: " << person->weight << std::endl;
        std::cout << "height: " << person->height << std::endl;
    } else {
        std::cout << "invalid!!!" << std::endl;
    }
}

int main() {
    Person p = {180.f, 77.f};
    print();
    print(&p);
}