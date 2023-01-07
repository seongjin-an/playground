#include <iostream>

using namespace std;

int a,b,c;
long result = 1;
int main() {
    cin >> a >> b >> c;
    cout << "a : " << a << " / b : " << b << " / c : " << c << '\n';
    for (int i = 0; i < b; i++) {
        result *= a;
        cout << "result : " << result << '\n';
    }
    cout << (result % c) << '\n';
    return 0;
}