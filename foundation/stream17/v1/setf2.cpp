#include <iostream>
#include <cmath>

int main() {
    using namespace std;

    ios_base::fmtflags origin = cout.setf(ios_base::left, ios_base::adjustfield); // 왼쪽 정렬
    cout.setf(ios_base::showpos); // 플러스 부호
    cout.setf(ios_base::showpoint); // 뒤에 0 채움
    cout.precision(3); // 정밀도 3

    // 과학적 E 표기 사용, 이전의 출력 형식 설정 저장
    ios_base::fmtflags old = cout.setf(ios_base::scientific, ios_base::floatfield);
    cout << "왼쪽 정렬:\n";
    long n;
    for (n = 1; n <=41; n += 10) {
        cout.width(4);
        cout << n << '|';
        cout.width(12);
        cout << sqrt(double(n)) << "|\n";
    }

    // 내부(internal) 정렬로 변경한다.
    cout.setf(ios_base::internal, ios_base::adjustfield);
    // 디폴트 부동 소수점 표기로 복원한다.
    cout.setf(old, ios_base::floatfield);

    cout << "내부(internal) 정렬:\n";
    for (n = 1; n <= 41; n += 10) {
        cout.width(4);
        cout << n << "|";
        cout.width(12);
        cout << sqrt(double(n)) << "|\n";
    }

    // 오른쪽 정렬 사용, 고정 소수점 표기로 출력한다.
    cout.setf(ios_base::right, ios_base::adjustfield);
    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout << "오른쪽 정렬:\n";
    for (n = 1; n <= 41; n += 10) {
        cout.width(4);
        cout << n << "|";
        cout.width(12);
        cout << sqrt(double(n)) << "|\n";
    }

    return 0;
}
/*
 * 제2 매개변수              제1 매개변수             의미
 * ios_base::basefield     ios_base::dec           10진법 사용
 * ios_base::basefield     ios_base::oct           8진법 사용
 * ios_base::basefield     ios_base::hex           16진법 사용
 *
 * ios_base::floatfield    ios_base::fixed         고정 소수점 표기 사용
 * ios_base::floatfield    ios_base::scientific    과학적 E 표기 사용
 *
 * ios_base::adjustfield   ios_base::left          왼쪽 정렬 사용
 * ios_base::adjustfield   ios_base::right         오른쪽 정렬 사용
 * ios_base::adjustfield   ios_base::internal      부호 또는 진법 접두어 왼쪽 정렬 값 오른쪽 정렬
 */