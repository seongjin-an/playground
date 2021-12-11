//
// Created by seongjin on 21. 12. 10..
//

#include <iostream>
#include <cmath>

using namespace std;
int main(){
    //XOR: toggle
    // 1 ^ 1 = 0
    // 1 ^ 0 = 1
    // 0 ^ 1 = 1
    // 0 ^ 0 = 0
    int num0 = 5;
    int num1 = 10;
    cout << (num0 ^ num1) << endl;

    uint32_t attendanceBook = 0u;

    attendanceBook ^= (int)pow(2,0);
    cout << attendanceBook <<endl;

    attendanceBook ^= (int)pow(2,0);
    cout << attendanceBook << endl;

    attendanceBook ^= (int)pow(2,0);
    cout << attendanceBook << endl;

    int a=1, b=3, c=2, d=1, e=2;
    cout << (a^b^c^d^e) << endl;
    cout << (a^d^c^b^e) << endl;
}
// 00000101
// 00001010
// 00001111

