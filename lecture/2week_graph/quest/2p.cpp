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
    do {
        for (int i = 0; i < vi.size(); i++) {
            if (vi.at(i)) {
                int y = v.at(i).first;
                int x = v.at(i).second;
                graph[y][x] = 1;
            }
        }

        for (int i = 0; i < vt.size(); i++) {
            if (vt.size() >= 10) break;
            int y = vt.at(i).first;
            int x = vt.at(i).second;

            for (int j = 0; j < 4; j++) {
                int ny = y + dy[j];
                int nx = x + dx[j];
                if (ny < 0 || nx < 0 || ny >= n || nx >= m) continue;
            }
        }

        for (int i = 0; i < vi.size(); i++) {
            if (vi.at(i)) {
                int y = v.at(i).first;
                int x = v.at(i).second;
                graph[y][x] = 0;
            }
        }
    } while (next_permutation(vi.begin(), vi.end()));
    

    return 0;
}