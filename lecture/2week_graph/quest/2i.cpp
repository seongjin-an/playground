
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stdlib.h>

using namespace std;

int pos(string txt, int idx) {
    // cout << "txt : " << txt << " / idx : " << idx << '\n';
    bool b = (txt[idx] > 47 && txt[idx] < 58);
    if (!b) return idx - 1;
    return pos(txt, idx + 1);
}

string refine(string txt) {
    int size = txt.size();
    int i = 0;
    if (size != 1) {
        while (true) {
            if (txt.at(i) == '0') {
                if (++i == size - 1) break;
            } else {
                break;
            }
        }
    }
    // cout << "txt : " << txt << " / i : " << i << '\n';
    // return atoi(txt.substr(i, size - i).c_str());
    return txt.substr(i, size - i);
}
bool cmp(string a, string b) {
    if (a.size() == b.size()) return a < b;
    return a.size() < b.size();
}
int n;
string str;
vector<string> v;
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> str;
        for (int j = 0; j < str.size(); ) {
            int e = pos(str, j);
            // cout << "str : " << str <<  " / j : " << j << " / e : " << e << '\n';
            if (j > e) {
                j++;
            } else {
                string subStr = str.substr(j, e - j + 1);
                string t = refine(subStr);
                v.push_back(t);
                j = e + 1;
            }
        }
    }
    sort(v.begin(), v.end(), cmp);
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << '\n';
    }
    return 0;
}