#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int i = 666;
    for (;;i++) {
        if (to_string(i).find("666") != string::npos) n--;
        if (n == 0) break;
    }
    cout << i << '\n';
    return 0;
}