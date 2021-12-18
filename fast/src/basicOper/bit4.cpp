//
// Created by seongjin on 21. 12. 10..
//

#include <iostream>

using namespace std;
// SHIFT
int main(){
    cout << (1 << 0) << endl;
    cout << (1 << 1) << endl;
    cout << (1 << 2) << endl;
    cout << (1 << 3) << endl;

    cout << (11 << 1) << endl;
    cout << (12 << 1) << endl;

    int num = 22222;
    num <<= 2;
    cout << num << endl;

    int attendanceBook = 0u;
    attendanceBook |= (1 << 2);
    cout << attendanceBook << endl;

    cout << (1 >> 1) << endl;

    cout << (16 >> 1) << endl;//8
    cout << (8 >> 1) << endl;//4
    cout << (4 >> 1) << endl;//2
    cout << (2 >> 1) << endl;//1
    cout << (1 >> 1) << endl;//0

    cout << (14 >> 1) << endl;//7
    cout << (15 >> 1) << endl;//7

    cout << (14 >> 2) << endl;//3
    cout << (15 >> 2) << endl;//3
}

// 00000100 = (int) pow(2,2) == 1 << 2;