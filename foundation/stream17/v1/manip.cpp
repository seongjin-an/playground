#include <iostream>

int main() {
    using std::cout;
    using std::cin;

    cout << "하나의 정수를 입력하십시오: ";
    int n;
    cin >> n;

    cout << "n  n*n\n";
    cout << n << "  " << n * n << " (10진법)\n";

    // 16진법 모드 설정
    cout << std::hex;
    cout << n << "  ";
    cout << n * n << "  (16진법)\n";

    // 8진법 모드 설정
    cout << std::oct << n << "  " << n * n << " (8진법)\n";

    // 조정자를 호출하는 다른 방법
    std::dec(cout);
    cout << n << "  " << n * n << " (16진법)\n";

    return 0;
}