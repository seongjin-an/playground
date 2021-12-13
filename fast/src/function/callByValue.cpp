//
// Created by seongjin on 21. 12. 14..
//

#include <iostream>

using namespace std;

void swap(int px, int py){
    cout << "px address: " << &px << endl;
    cout << "py address: " << &py << endl;
    int temp = px;
    px = py;
    py = temp;
}

int main(){
    int x = 10, y = 20;

    cout << "x: " << x << endl;
    cout << "y: " << y << endl;

    cout << "x address: " << &x << endl;
    cout << "y address: " << &y << endl;

//    swap(x, y);
    int px = x;
    int py = y;

    cout << "x address: " << &x << endl;
    cout << "y address: " << &y << endl;

    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
}