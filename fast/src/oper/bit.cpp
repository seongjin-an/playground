//
// Created by seongjin on 21. 12. 9..
//

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int num = 0;
    cout << ~num << endl; // -1

    unsigned int num2 = 0;
    cout << ~num2 << endl;// 4294967295

    unsigned int num3 = 0;
    cout << ~~num3 << endl; // 0

    unsigned int num4 = 1;
    cout << ~num4 << endl; //4294967294 = 2^32 - 1 -1



    int num5 = 5;
    int num6 = 10;

    int result = num5 & num6;
    cout << result << endl;



//    bool isPresent = false;
    uint32_t attendanceBook = 5u;

    if((attendanceBook & (int)pow(2, 0)) == 1){
        cout << "1st" << endl;
    }
    if((attendanceBook & (int)pow(2, 1)) == 2){
        cout << "2nd" << endl;
    }
    if(attendanceBook & (int)pow(2, 2)){
        cout << "3rd" << endl;
    }
}

// 00000000000000000000000000000000 = 0
// 11111111111111111111111111111111 = -1


// 00000101 = 5 = 4 + 1 = 2^2 + 2^0
// 00001010 = 10 = 8 + 2 = 2^3 + 2^1
// 00000000 = 0

//attendance
// 00000000000000000000000000000101 = 5
// 00000000000000000000000000000001 = 1
// 00000000000000000000000000000001 = true
// 00000000000000000000000000000000 = false