#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string s;
    while (true) {
        getline(cin, s);
        if (s == ".") break;
        int strSize = s.size();
        bool flag = true;
        stack<char> stk;
        for (int i = 0; i < strSize; i++) {
            char c = s[i];
            if (c == '(' || c == '[') {
                stk.push(c);
            } else if (c == ')' || c == ']') {
                if (stk.size()) {
                    char sc = stk.top(); stk.pop();
                    if (c == ')' && sc != '(') {
                        flag = false;
                        break;
                    }
                    if (c == ']' && sc != '[') {
                        flag =false;
                        break;
                    }
                } else {
                    flag = false;
                    break;
                }
            }
        }
        if (flag && stk.size() == 0) {
            cout << "yes\n";
        } else {
            cout << "no\n";
        }
    }
    return 0;
}