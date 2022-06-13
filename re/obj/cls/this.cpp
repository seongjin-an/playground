//
// Created by seongjin on 22. 6. 14..
//

#include <iostream>
#include <string>

class Person {
private:
    float _weight;
    float _height;
    const std::string _name;
public:
    Person(float weight, float height, const std::string &name) :
            _weight(weight), _height(height), _name(name) {

    }

    float getBMI() {
        return _weight / (_height * 100 * _height * 100);
    }

    Person &complete(Person &person) {
        if (this->getBMI() < person.getBMI())
            return *this;
        else
            return person;
    }

    void doCeremony() {
        std::cout << _name << " win!" << std::endl;
    }
};
int &imsi(){
    int num = 1;
    int *pNum = &num;
    std::cout << "in imsi, &num: " << &num << std::endl;
    return *pNum; //don't do this..
    //https://stackoverflow.com/questions/752658/is-the-practice-of-returning-a-c-reference-variable-evil
}


int main() {
    Person person0(70.f, 177.f, "david");
    Person person1(68.f, 179.f, "daniel");
//    std::cout << person0 << std::endl;
    int num = imsi();
    std::cout << num << std::endl;
    person0.complete(person1).doCeremony();
}