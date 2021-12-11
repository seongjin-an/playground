//
// Created by seongjin on 21. 12. 12..
//

#include <iostream>
#include <array>

using namespace std;

struct Person{
    float weight;
    float height;
};

int main(){

    Person persons[] = {
            Person{50.f, 111.f},
            Person{22.f, 222.f}
    };
    for(int i=0; i<2; i++){
        cout <<persons[i].weight <<" " << persons[i].height <<endl;
    }
    for(Person person: persons){
        cout << person.weight << " " << person.height << endl;
    }

//    for(int i=0; i<2; i++){
//        persons[i].weight = 0.0f;
//    }
    for(Person& person: persons){
        person.weight = 0;
    }
    for(Person person: persons){
        cout << person.weight << " " << person.height << endl;
    }

    for(int i=0; i<2; ++i){
        cout << &persons[i] << endl;
    }
    cout << endl;
    for(Person person: persons){
        cout << &person << endl;
    }
}