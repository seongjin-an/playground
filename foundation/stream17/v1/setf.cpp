#include <iostream>

int main() {
    using std::cout;
    using std::ios_base;

    int temperature = 63;

    cout << "오늘의 수온: ";
    cout.setf(ios_base::showpos);
    cout << temperature << '\n';

    cout << "프로그래머들에게 그 값은\n";
    cout << std::hex << temperature << '\n'; // 16진수
    cout.setf(ios_base::uppercase); // 대문자
    cout.setf(ios_base::showbase); // 0X
    cout << "또는\n";
    cout << temperature << '\n';
    cout << true << '\n';
    cout.setf(ios_base::boolalpha);
    cout << true << "이다.\n";
    return 0;
}
/*
 * ios_base::boolalpha : bool 값을 true 와 false 입력/출력
 * ios_base::showbase : 출력에 진법 표시 접두어(0,0x)를 사용
 * ios_base::showpoint : 뒤에 붙는 소수점을 표시
 * ios_base::uppercase : 16진 출력, E 표기에 대문자를 사용
 * ios_base::showpos : 양수 앞에 + 부호를 사용
 */