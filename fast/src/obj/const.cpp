//
// Created by seongjin on 21. 12. 19..
//

#include <iostream>

using namespace std;

class Person{
private:
    const string _name;
    float _weight;
    float _height;
public:
    Person(const string& name, float weight, float height)
        : _name(name), _weight(weight), _height(height){
    }
    float getWeight(/* const Person* this */) const {//following const means const Person* this
//        this -> _weight = 10;//error cuz const
//        _weight = 10;
        return _weight;
    }
};
int main(){
    Person person0("Daniel", 22.f, 33.f);
    const Person person1 = person0;
    person0.getWeight();
//    person1.getWeight();//error


    const Person person2("david", 33.f, 44.f);
    Person person3 = person2;
//    person2.getWeight();
    person3.getWeight();

    Person* person4 = new Person("imsi", 44.f, 55.f);
    const Person* person5 = person4;
    person4->getWeight();
//    person5.getWeight();

    //error
//    const Person* person6 = new Person("imsi", 44.f, 55.f);
//    Person* person7 = person6;
}