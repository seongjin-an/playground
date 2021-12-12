//
// Created by seongjin on 21. 12. 12..
//

#include <iostream>
#include <vector>

using namespace std;

int main(){
    int num0 = 10;
    int& num1 = num0;
    int* num2 = &num0;

    cout << num0 << endl;
    cout << num1 << endl;
    cout << *num2 << endl;
    cout << endl;

    num0 = 20;
    cout << num0 << endl;
    cout << num1 << endl;
    cout << *num2 << endl;
    cout << endl;

    num1 = 30;
    cout << num0 << endl;
    cout << num1 << endl;
    cout << *num2 << endl;
    cout << endl;

    *num2 = 40;
    cout << num0 << endl;
    cout << num1 << endl;
    cout << *num2 << endl;
    cout << endl;

    int num3 = 10;
    const int& num4 = num3;

    num3 = 20;
    cout << num3 << endl;
    cout << num4 << endl;

//    num4 = 30;//error
//    int& num5 = 1;//error
    vector<int> vec0;
    vector<int>& vec1 = vec0;
    vector<int>* vec2 = &vec0;

    vec0.push_back(1);
    vec1.push_back(2);
    vec2->push_back(3);

    for(int num: vec0)
        cout << num << endl;
    cout << endl;
    int* num6 = new int(12);
    int num7 = *num6;

    cout << *num6 << endl;
    cout << num7 << endl;
    delete num6;
}