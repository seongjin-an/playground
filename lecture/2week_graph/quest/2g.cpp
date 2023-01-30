#include <iostream>
#include <string>
#include <map>

using namespace std;

string str;
map<char, bool> m;
int main() {
    m.insert({'a', true});
    m.insert({'e', true});
    m.insert({'i', true});
    m.insert({'o', true});
    m.insert({'u', true});
    while (true) {
        cin >> str;
        if (str == "end") break;
        bool flag = false;
        for (int i = 0; i < str.size(); i++) {
            char s = str.at(i);
            if (s < 97 || s > 122) {
                flag = false;
                break;
            }
            if (m.find(s) != m.end()) {
                flag = true;
            }

            if (i > 0) {
                if (s != 'e' && s != 'o') {
                    char pre = str.at(i - 1);
                    if (pre == s) {
                        flag = false;
                        break;
                    }
                }
            }
            if (i > 1) {
                char beforePre = str.at(i - 2);
                char pre = str.at(i - 1);
                auto beforePreIter = m.find(beforePre);
                auto preIter = m.find(pre);
                auto sIter = m.find(s);
                if (beforePreIter == m.end() && preIter == m.end() && sIter == m.end()) {
                    flag = false;
                    break;
                }
                if (beforePreIter != m.end() && preIter != m.end() && sIter != m.end()) {
                    flag = false;
                    break;
                }
            }
        }
        if (flag) {
            cout << '<' << str << "> is acceptable.\n";
        } else {
            cout << '<' << str << "> is not acceptable.\n";
        }
    }
    return 0;
}