#include <iostream>

using namespace std;

int n, m, j, p = 1, x = 0;
void go(int d) {
    int r = 0;
    for (int i = 0; i < m; i++) {
        if (d == p + i) {
            return;
        }
    }
    x++;
    if (p < d) {
        p++;
    } else if(p > d) {
        p--;
    }
    go(d);
}
int main() {
    cin >> n >> m;
    cin >> j;
    int result = 0;
    for (int i = 0; i < j; i++) {
        int k;
        cin >> k;
        go(k);
    }
    cout << x << '\n';
    return 0;
}