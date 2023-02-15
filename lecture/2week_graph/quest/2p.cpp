// 백준 14502
#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    const int dy[] = {-1, 0, 1, 0};
    const int dx[] = {0, 1, 0, -1};
    int graph[8][8] = {};
    // fill(&graph[0][0], &graph[0][0] + sizeof(graph) / sizeof(int), 0);
    vector<pair<int, int>> v;
    vector<pair<int, int>> vt;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int k;
            cin >> k;
            graph[i][j] = k;
            if (k == 0) {
                v.push_back({i, j});
            }
            if (k == 2) {
                vt.push_back({i, j});
            }
        }
    }
    vector<bool> vi(v.size() - 3, false);
    vi.insert(vi.end(), 3, true);
    int maxValue = 0;
    do {
        int copiedGraph[8][8] = {};
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                copiedGraph[i][j] = graph[i][j];
            }
        }
        for (int i = 0; i < vi.size(); i++) {
            if (vi.at(i)) {
                int y = v.at(i).first;
                int x = v.at(i).second;
                copiedGraph[y][x] = 1;
            }
        }
        vector<pair<int, int>> copiedVt(vt);
        for (int i = 0; i < copiedVt.size(); i++) {
            int y = copiedVt.at(i).first;
            int x = copiedVt.at(i).second;
            for (int j = 0; j < 4; j++) {
                int ny = y + dy[j];
                int nx = x + dx[j];
                if (ny < 0 || nx < 0 || ny >= n || nx >= m) continue;
                if (copiedGraph[ny][nx] == 0) {
                    copiedVt.push_back({ny, nx});
                    copiedGraph[ny][nx] = 2;
                }
            }
        }
        int curValue = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (copiedGraph[i][j] == 0) {
                    curValue++;
                }
            }
        }
        maxValue = max(maxValue, curValue);
    } while (next_permutation(vi.begin(), vi.end()));
    cout << maxValue << '\n';
    return 0;
}