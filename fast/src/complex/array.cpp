//
// Created by seongjin on 21. 12. 12..
//

#include <iostream>
#include <array>

using namespace std;

int main(){

    array<int, 5> arr{1,2,3, 4, 5};
    cout << arr.at(0) << endl;
    cout << arr.at(1) << endl;

    cout << arr.size() << endl;
    cout << arr.front() << endl;
    cout << arr[0] << endl;

    cout << arr.back() << endl;
    cout << arr[arr.size() -1] << endl;

    cout << "finish" << endl;

    array<int, 5> arr1{5,4,3,2,1};

    arr.swap(arr1);


}