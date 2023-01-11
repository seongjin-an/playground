//
// Created by 안성진 on 2023/01/11.
//
#include <iostream>
#include <string>

using namespace std;

class Person {
private:
    float weight;
    float height;
    const string name;

public:
    Person(float weight, float height, const string name) : weight(weight), height(height), name(name) {

    }

    float getBMI() {
        return weight / (height * 100 * height * 100);
    }

    Person & complete(Person & person) {
        if (this->getBMI() < person.getBMI()) {
            return *this;
        } else {
            return person;
        }
    }

    void doCeremony() {
        cout << name << " win!" << '\n';
    }
};

int main() {
    Person person0(67.f, 176.f, "david");
    Person person1(68.f, 177.f, "daniel");
    person0.complete(person1).doCeremony();
}