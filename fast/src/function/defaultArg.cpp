//
// Created by seongjin on 21. 12. 15..
//

#include <iostream>

using namespace std;

struct Person{
    float height;
    float weight;
};

void print(Person* person = nullptr){
    if(person){
        cout << person->weight << endl;
        cout << person->height << endl;
    }else{
        cout << "invalid" << endl;
    }
}

int main(){
    Person p={11.f, 22.f};
    print();
    print(&p);
}
