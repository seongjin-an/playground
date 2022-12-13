#include <iostream>

using namespace std;

int N, cnt;

void solve(int N) {
    cnt++;
    cout << cnt <<'\n';
    if (N == 0) return;
    for(int i = 0; i < 3; i++) { // 3^n
        solve(N - 1);
    }
    return ;
}
// 1 + 1 x 3 + 1 x 3^2 + 1 x 3 ^ 3
int main() {
    cin >> N;
    solve(N);
    return 0;
}