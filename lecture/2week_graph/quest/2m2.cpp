#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool check(string s) {
    stack<char> stk;
    for (char c : s) {
        if (c == '(') stk.push(c);
        else {
            if (!stk.empty()) stk.pop();
            else return false;
        }
    }
    return stk.empty();
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (check(s)) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}