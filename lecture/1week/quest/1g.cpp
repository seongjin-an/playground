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

    for (int i = 0; i < n; i++) {
        string str = arr[i];
        if (*(pattern.begin()) == *(str.begin()) && *(pattern.end() - 1) == *(str.end() - 1)){
            cout << "DA" << '\n';
        } else {
            cout << "NE" << '\n';
        }
    }
    return 0;
}