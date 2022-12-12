#include <iostream>

using namespace std;

int N, cnt;

void solve(int N) {
    int a = 0, i = N;
    while (i > 0) {
        a += i;
        i /= 2;
        cnt++;
    }
    cout << a << '\n';
    cout << cnt << '\n';
}

int main() {
    cin >> N;
    solve(N);
}