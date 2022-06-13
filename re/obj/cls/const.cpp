//
// Created by seongjin on 22. 6. 13..
//

#include <iostream>

class Person {
private:
    const std::string _name;
    float _weight;
    float _height;
public:
    Person(const std::string &name, float weight, float height) :_name(name), _weight(weight), _height(height) {}

    float getWeight() const {
        //뒤의 const는 객체 자신이 const를 의미함
        return _weight;
    }
};

int main(){
    std::string name = "Daniel";
    Person person0(name, 70.f, 177.f);
    person0.getWeight();

    const Person person2("david", 71.f, 179.f);//직접 초기화
    Person person3 = person2;//복사 초기화임
    person3.getWeight();

    Person *person4 = new Person("imsi",111.f, 66.f);
    const Person *person5 = person4;

    person4->getWeight();
    person5->getWeight();

    //error const
//    const Person *person6 = new Person("imsi",111.f, 66.f);
//    Person *person7 = person6;
}