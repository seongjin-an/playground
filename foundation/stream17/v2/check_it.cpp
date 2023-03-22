#include <iostream>

int main() {
    using namespace std;
    cout << "수를 입력하세요: ";
    int sum = 0;
    int input;
    while (cin >> input) {
        sum += input;
    }
    cout << "마지막으로 입력한 값 = " << input << '\n';
    cout << "합계 = " << sum << '\n';
    return 0;
}
/*
수를 입력하세요: 200
10 -50 -123Z 60
마지막으로 입력한 값 = 0
합계 = 37

입력은 버퍼를 사용하기 때문에, 키보드로 입력된 두 번째 줄은 그 줄의 끝에서Enter 를 누를 때까지프로그램에 전달되지 않음
 그러나 루프는 Z 문자가 부동 소수점의 어느 형식에도 일치하지 않기 때문에,Z 문자에서 입력 처리를 끝낸다.
 입력이 프로그램의 기대와 달라서 입력에 실패하면 cin >> input 은 false 로 평가되어 while 루프가 종료된다.
 */