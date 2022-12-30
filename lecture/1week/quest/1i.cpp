// 1620
// https://www.acmicpc.net/problem/1620

#include <iostream>
#include <string>
#include <map>

using namespace std;

int n, m;
map<string, int> pocke;
string temp;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m;
    string arr[n];
    for (int i = 0; i < n; i++) {
        cin >> temp;
        pocke.insert({temp, i + 1});
        arr[i] = temp;
    }
    for (int j = 0; j < m; j++) {
        cin >> temp;
        int res = atoi(temp.c_str());
        if (res != 0) { // 숫자
            cout << arr[res - 1] << '\n';
        } else { // 문자
            map<string, int>::iterator iter =pocke.find(temp);
            cout << iter->second << '\n';
        }
    }
    return 0;
}