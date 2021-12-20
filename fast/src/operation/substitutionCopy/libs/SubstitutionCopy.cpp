//
// Created by seongjin on 21. 12. 20..
//

#include "SubstitutionCopy.h"

Person::Person(float weight, float height, const char *name)
//    : _weight(weight), _height(height), _name(){
    : _weight(weight), _height(height), _name(new char[strlen(_name) + 1]){
    strcpy(_name, name);
}
Person::Person(const Person& person)
//    : _weight(person._weight), _height(person._height), _name(new char[strlen(person._name) + 1]){
    : Person(person._weight, person._height, person._name){

}

Person& Person::operator=(const Person &person) {
    _weight = person._weight;
    _height = person._height;
//    delete[] _name;
    _name = new char[strlen(person._name) + 1];
    strcpy(_name, person._name);
    return *this;
}
void Person::print() const {
    std::cout << _name << std::endl;
    std::cout << _weight << std::endl;
    std::cout << _height << std::endl;
}

Person::~Person() {
    delete[] _name;
}