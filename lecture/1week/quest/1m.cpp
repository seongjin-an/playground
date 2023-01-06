// 3986
#include <iostream>
#include <stack>
#include <string>

using namespace std;

int n;
string str;
stack<int> ss;
int sum;
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        ss = stack<int>();
        cin >> str;
        for (int j = 0; j < str.size(); j++) {
            if (ss.empty()) {
                ss.push(str[j]);
                continue;
            } else {
                if (ss.top() == str[j]) {
                    ss.pop();
                } else {
                    ss.push(str[j]);
                }
            }
        }
        if (ss.empty()) {
            sum++;
        }
    }
    cout << sum << '\n';
    return 0;
}