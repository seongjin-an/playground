//
// Created by seongjin on 21. 12. 12..
//

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(){
    struct EyeSight{
        float left;
        float right;
    };
    struct Person{
        float height;
        float weight;
        char name[10];
        short grade;
        EyeSight eyeSight;
    };

    Person person0 = {111.1f, 20.2f, "David", 1, {1.1f, 1.1f}};
    Person person1 = person0;
    cout << person1.height << endl;
    cout << person1.weight << endl;
    cout << person1.grade << endl;
    cout << person1.name << endl;
    cout << person1.eyeSight.left << endl;
    cout << person1.eyeSight.right << endl;

    Person persons[5];
    persons[0].grade = 1;

    cout << persons[0].grade << endl;

    Person person = persons[1];
    person.grade = 5;

    cout << person.grade << endl;
    cout << persons[1].grade << endl;

    Person person3 = { 111.1f, 20.2f, "David", 1, {}};
    cout << sizeof(person3) << endl;
}

// height, weight, name, grade
// 4     , 4      , 10 , 2

// height, grade , weight, name
// 4     , 2 (2) , 4    , 10 (2)