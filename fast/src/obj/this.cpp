//
// Created by seongjin on 21. 12. 19..
//

#include <iostream>
#include <string>

using namespace std;

class Person{
private:
    float weight;
    float height;
    const string name;
public:
    Person(float weight, float height, const string& name)
        : weight(weight), height(height), name(name){

    }
    float getBMI(){
        return weight / (height * 100 * height * 100);
    }
    Person& complete(Person& person){
        if(this->getBMI() < person.getBMI()){
            return *this;
        }else{
            return person;
        }
    }

    void doCeremony(){
        cout << name << " win!!" << endl;
    }
};
int main(){
    Person person0(22.2f, 111.f, "david");
    Person person1(33.3f, 122.f, "daniel");

    person0.complete(person1).doCeremony();
}
