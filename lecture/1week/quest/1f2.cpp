
#include <iostream>
#include <string>

using namespace std;

string s;
int main() {
    getline(cin, s);
    for (int i = 0; i < (int)s.size(); i++) {
        //대문자인 경우
        if (s[i] >= 65 && s[i] < 97) {
            if (s[i] + 13 > 90) s[i] = s[i] + 13 -26;
            else s[i] = s[i] + 13;
        } else if (s[i] >= 97 && s[i] <=122) {
            if (s[i] + 13 > 122) s[i] = s[i] + 13 -26;
            else s[i] = s[i] + 13;
        }
        cout << s[i];
    }
    return 0;
}