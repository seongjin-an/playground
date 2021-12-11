//
// Created by seongjin on 21. 12. 10..
//

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    uint32_t attendanceBook = 5u;

//    if(!(attendanceBook & (int)pow(2,0))){
//        attendanceBook += (int)pow(2,0);
//    }
//    cout << attendanceBook;
    attendanceBook |= (int)pow(2, 0);
    cout << attendanceBook << endl;

    attendanceBook &= ~(int)pow(2,2);
    cout << attendanceBook << endl;
}

// 00000000000000000000000000000000