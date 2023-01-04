#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string initStr;
int i;
string resultStr;
void swapping(string str, int depth, int fin) {
    string init = str;
    reverse(str.begin(), str.end());
    if (str == init) {
        if (str != initStr) {
            resultStr = str;
        }
    }
    
    // if (depth == fin) {
    //     cout << "I'm Sorry Hansoo";
    //     return;
    // }

    for (int i = depth; i < fin; i++) {
        swap(str[i], str[depth]);
        swapping(str, i + 1, fin);
        swap(str[i], str[depth]);
    }
}
int main() {
    cin >> initStr;
    swapping(initStr, 0, initStr.size() - 1);
    if (resultStr == "") {
        cout << "I'm Sorry Hansoo";
    } else {
        cout << resultStr << '\n';
    }
    return 0;
}
