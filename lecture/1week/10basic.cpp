// g++ -std=c++14 -Wall lecture/1week/10basic.cpp -o ./build/10basic.out
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string imsi = "imsi";

int main() {
    // Q1. 앞에서부터 3개의 문자열을 출력하라
    cout << imsi.substr(0, 3) << '\n';

    // Q2. 해당 문자열을 거꾸로 해서 출력.
    reverse(imsi.begin(), imsi.end());
    cout << imsi << '\n';

    // Q3. 해당 문자열 끝에 "imsi" 란 문자열 추가
    cout << imsi + "imsi" << '\n';
    return 0;
    // 문제 해석 -> 코딩
}