//
// Created by 안성진 on 2023/01/11.
//

#include <iostream>

using namespace std;

class Person {
private:
    const string name;
    float weight;
    float height;
public:
    Person(const string & name, float weight, float height): name(name), weight(weight), height(height) {
        cout << name << " : " << weight << " : " << height << '\n';
    }

    float getWeight() const {
        return weight;
    }

    void modifyWeight(float weight) {
        this->weight = weight;
    }
};

int main() {
    Person * person0 = new Person("Daniel", 70.f, 178.f);
    const Person * person1(person0);
    Person * person11 = person0;

    cout << &person0 << '\n';
    cout << &person1 << '\n';
    cout << &person11 << '\n';

    cout << person0->getWeight() << '\n';
    cout << person1->getWeight() << '\n';
    cout << person11->getWeight() << '\n';

    person0->modifyWeight(71.f);

    cout << person0->getWeight() << '\n';
    cout << person1->getWeight() << '\n';
    cout << person11->getWeight() << '\n';

    Person person2("an", 66.f, 170.f);
    Person person3(person2);

    cout << &person2 << '\n';
    cout << &person3 << '\n';

    cout << person2.getWeight() << '\n';
    cout << person3.getWeight() << '\n';

    person2.modifyWeight(67.f);

    cout << person2.getWeight() << '\n';
    cout << person3.getWeight() << '\n';

    return 0;
}