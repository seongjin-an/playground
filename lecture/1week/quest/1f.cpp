// 11655 
#include <iostream>
#include <string>

using namespace std;

string str;
char result[100];
int main() {
    getline(cin, str);
    for (int i = 0; i < (int) str.size(); i++) {
        int a = str.at(i);
        if ((a < 65 || a > 90) && (a < 97 || a > 122)) {
            result[i] = a;
            continue;
        }
        if (a >= 65 && a <= 90) {
            int b = a + 13;
            if (b > 90) {
                result[i] = b - 26;
            } else {
                result[i] = b;
            }
            continue;
        }
        if (a >= 97 && a <= 122) {
            int b = a + 13;
            if (b > 122) {
                result[i] = b - 26;
            } else {
                result[i] = b;
            }
            continue;
        }

    }
    cout << result << '\n';
    return 0;
}