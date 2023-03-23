#include <iostream>
#include <exception>

int main() {
    using namespace std;
    // failbit 가 예외를 발생시키게 만든다.
    cin.exceptions(ios_base::failbit);
    cout << "수를 입력하십시오: ";
    int sum = 0;
    int input;
    try {
        while (cin >> input) {
            cout << "input : " << input << '\n';
            sum += input;
        }
    } catch (ios_base::failure &bf) {
        cout << bf.what() << '\n';
        cout << "앗! 실수!\n";
    }
    cout << "마지막으로 입력한 값 = " << input << '\n';
    cout << "합계 = " << sum << '\n';
    return 0;
}