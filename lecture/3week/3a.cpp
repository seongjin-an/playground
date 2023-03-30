// 완전 탐색
#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <limits.h>

using namespace std;

int n, m;
int main() {
    cin >> n >> m;
    vector<pair<int, int>> homes;
    vector<pair<int, int>> ch;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int temp;
            cin >> temp;
            if (temp == 1) {
                homes.push_back({i, j});
            } else if (temp == 2) {
                ch.push_back({i, j});
            }
        }
    }

    vector<int> perm(ch.size(), false);
    for (int i = 0; i < m; i++) {
        perm[i] = true;
    }
    int res = INT_MAX;
    do {
        int sum = 0;
        for (int j = 0; j < homes.size(); j++) {
            int mi = 100;
            int hF = homes[j].first;
            int hS = homes[j].second;
            for (int i = 0; i < ch.size(); i++) {
                if (perm[i]) {
                    int chF = ch[i].first;
                    int chS = ch[i].second;
                    int dis = abs(chF - hF) + abs(chS - hS);
                    mi = min(mi, dis);
                }
            }
            sum += mi;
        }
        res = min(res, sum);
    } while(prev_permutation(perm.begin(),perm.end()));
    cout << res << '\n';
    return 0;
}