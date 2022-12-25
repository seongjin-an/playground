// 9996
#include <iostream>
#include <string>

using namespace std;

int n;
string pattern;
int main() {
    cin >> n;
    cin >> pattern;
    string arr[n];
    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        arr[i] = str;
    }

    size_t idx = pattern.find("*");
    string partofFirst = pattern.substr(0, idx);
    size_t firstLen = partofFirst.size();
    string partofLast = pattern.substr(idx + 1, pattern.size());
    size_t lastLen = partofLast.size();

    for (int i = 0; i < n; i++) {
        string str = arr[i];
        string first = str.substr(0, firstLen);
        string last = str.substr(str.size() - lastLen, str.size());
        if (partofFirst == first && partofLast == last){
            cout << "DA" << '\n';
        } else {
            cout << "NE" << '\n';
        }
    }
    return 0;
}