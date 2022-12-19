// 10988 백준
#include <iostream>
#include <string>

using namespace std;

string str;

int main() {
    cin >> str;
    int size = str.size();
    int cnt = size % 2 == 0 ? size / 2 : (size + 1) / 2;
    bool result = true;
    for (int i = 0; i < cnt; i++) {
        if (str[i] == str[size - 1 - i]) {
            continue;
        } else {
            result = false;
            break;
        }
    }
    if (result) {
        cout << 1 << '\n';
    } else {
        cout << 0 << '\n';
    }
}