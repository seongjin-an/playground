// 2559
// N : 1 ~ 10만
// k : 1 ~ 10만 - 1(n 사이)
// 온도는 -100 ~ 100
// 연속의 온도의 합이 "최대" 되는 값
// 이 문제의 최솟값은? -100 * (10만번) >> -1000만
// 최대값은 어디서부터?

#include <iostream>

using namespace std;

typedef long long ll;

int n, k, temp, psum[100001], ret = -10000004;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> temp; psum[i] = psum[i - 1] + temp;
    }
    for (int i = k; i <= n; i++) {
        ret = max(ret, psum[i] - psum[i - k]);
    }
    cout << ret << '\n';
    return 0;
}