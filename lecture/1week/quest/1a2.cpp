
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

int a[9], sum;
vector<int> v;
pair<int, int> ret;

void solve() {
    for (int i =0; i < 9; i++) { // 2 개 뽑을 때 이중포문을 자주 사용함.
        for (int j = 0; j < 9; j++) {
            if (sum - a[i] - a[j] == 100) {
                ret = {i, j};
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for (int i = 0; i < 9; i++) {
        cin >> a[i]; sum += a[i];
    }
    solve();


    for (int i = 0; i < 9; i++) {
        cout << ret.first << " " << ret.second << '\n';
        if (ret.first == i || ret.second == i) continue;
        v.push_back(a[i]);
    }
    sort(v.begin(), v.end());
    for (int i : v) cout << i << " ";
    return 0;
}