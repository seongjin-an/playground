#include <iostream>
#include <string>

using namespace std;

int n;
string pattern;
string str;
int main() {
    cin >> n;
    cin >> pattern;
    // string::iterator beginPattern = pattern.begin();
    // string::iterator endPattern = pattern.end() - 1;
    char beginPattern = pattern.at(0);
    char endPattern = pattern.at(pattern.size() - 1);
    for (int i = 0; i < n; i++) {
        cin >> str;
        // string::iterator beginIter = str.begin();
        // string::iterator endIter = str.end() - 1;
        char beginStr = str.at(0);
        char endStr = str.at(str.size() - 1);
        if (beginPattern == beginStr && endPattern == endStr) {
            cout << "DA" << '\n';
        } else {
            cout << "NE" << '\n';
        }
    }
    

    return 0;
}