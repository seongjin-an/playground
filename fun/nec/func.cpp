//
// Created by seongjin on 22. 11. 28.
//

#include <iostream>

struct Person {
private:
    std::string name;
public:
    Person() {
        std::cout << "Person is constructed" << '\n'; 
    }
    void setName(std::string _name) {
        this->name = _name;
    }
    std::string getName() {
        return this->name;
    }
    ~Person() {
        std::cout << name << " object is destructed..." << '\n';
    }
};

Person * givenPerson(std::string name) {
    Person *person = new Person;
    person->setName(name);
    return person;
}

int main() {
    Person *person = givenPerson("ansj");
    std::cout << person << '\n';
    std::cout << "name: " << person->getName() << '\n';

    std::cout << "before delete!" << '\n';
    delete person;
    std::cout << "after delete!" << '\n';
}