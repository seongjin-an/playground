//
// Created by seongjin on 21. 12. 12..
//

#include <iostream>

using namespace std;
struct Person{
    float weight;
    float height;
};
int main(){
    for(int i = 0; i < 3; ++i){
        static int num = 0;//diff static
        ++num;
        cout << num << endl;
    }

    int* pNum = new int;//dynamic unnamed
    delete pNum;
//    while(true){
//        int num;
//    }
//    while(true){
//        int* num = new int;
//    }//leak..
//    while(true){
//        int* num = new int;
//        delete num;
//    }

    int* pNum2 = new int(123);
    int* pNum3 = pNum2;

    cout << *pNum2 << endl;
    delete pNum3;
//    delete pNum2;
//    cout << *pNum << endl;


//    int* pNum4 ;
//    {
//        int n = 10;
//        pNum = &n;
//    }
//    cout << *pNum << endl;

//    int s;
//    cin >> s;
//    int* arr = new int[s];
//    arr[0] = 1;
//    cout << arr[0] << endl;
//    delete[] arr;
    cout << "//////////////" << endl;
    Person* person = new Person{11.f, 22.f};
    Person per={33.3f, 44.4f};
    cout << per.weight << endl;
    cout << (*person).weight << endl;
    cout << person->weight << endl;

    Person* persons[2] = {
        new Person{11.f, 22.f},
        new Person{33.f, 44.f}
    };

    for(Person* ps: persons){

        ps->weight = 0.0f;
    }
    for(Person* ps: persons){
        cout << ps->weight << endl;
    }
}