#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(string &s1, string &s2) {
    return s1 > s2;
}

int main() {
    vector<string> v;
    v.push_back("JAVA");
    v.push_back("C++");
    v.push_back("PYTHON");
    v.push_back("GO");
    v.push_back("SWIFT");
    sort(v.begin(), v.end(), cmp);
    vector<string>::iterator iter;
    for (iter = v.begin(); iter != v.end(); iter++) {
        cout << (*iter) << ' ';
    }
    cout << '\n';
    return 0;
}