//
// Created by seongjin on 22. 7. 6.
//

#include <iostream>

struct Person {
    float weight;
    float height;
};

int main() {
    for (int i = 0; i < 3; i++) {
        static int num = 0;//diff static
        ++num;
        std::cout << num << std::endl;
    }

    int *pNum = new int;//dynamic unnamed;
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

    int *pNum2 = new int(123);
    int *pNum3 = pNum2;

    std::cout << *pNum2 << std::endl;
    delete pNum3;
//    delete pNum2;

//    int* pNum4 ;
//    {
//        int n = 10;
//        pNum4 = &n;
//    }
//    std::cout << "*pNum4: " << *pNum4 << std::endl;

    int s;
    std::cin >> s;
    int *arr = new int[s];
    arr[0] = 1;
    std::cout << arr[0] << std::endl;
    delete[] arr;

    std::cout << "//////////////////////////////////" << std::endl;

    Person *person = new Person{70.f, 180.f};
    Person per = {71.f, 178.f};
    std::cout << per.weight << std::endl;
    std::cout << (*person).weight << std::endl;
    std::cout << person->height << std::endl;

    Person *persons[2] = {
            new Person{68.f, 177.f},
            new Person{50.f, 165.f}
    };
    std::cout << persons << std::endl;
    for(Person *ps: persons){
        std::cout << ps << std::endl;
    }

    for(Person *ps: persons){
        ps->weight = 0.0f;
    }

    for(Person *ps: persons){
        std::cout << ps->weight << std::endl;
    }
}