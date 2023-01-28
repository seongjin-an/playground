#include <iostream>
#include <string>

using namespace std;

typedef long long int ll;

int n;
string s;
char a[101][101];
string quad(int y, int x, int size) {
    cout << "y : " << y << " / x : " << x << " / size : " << size << '\n';
    if (size == 1) return string(1, a[y][x]);
    char b = a[y][x];
    string ret = "";
    bool flag = 0;
    for (int i = y; i < y + size; i++) {
        for (int j = x; j < x + size; j++) {
            cout << "i : " << i << " / j : " << j << " / a[i][j] : " << a[i][j] << '\n';
            if (b != a[i][j]) {
                ret += '(';
                ret += quad(y, x, size / 2);
                ret += quad(y, x + size / 2, size / 2);
                ret += quad(y + size / 2, x, size / 2);
                ret += quad(y + size / 2, x + size / 2, size / 2);
                ret += ')';
                return ret;
            }
        }
    }
    return string(1, a[y][x]);
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s;
        for (int j = 0; j < n; j++) {
            a[i][j] = s[j];
        }
    }
    cout << quad(0, 0, n) << '\n';
    return 0;
}