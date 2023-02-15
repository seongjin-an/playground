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
    
    int minValue = 0;
    do {
        int curValue = 0;
        int copiedGraph[8][8] = {};
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                copiedGraph[i][j] = graph[i][j];
            }
        }
        // cout << "checkpoint1\n"; 
        // cout << "vi.size() : " << vi.size() << '\n';
        for (int i = 0; i < vi.size(); i++) {
            if (vi.at(i)) {
                int y = v.at(i).first;
                int x = v.at(i).second;
                // cout << "y : " << y << " / x : " << x << '\n';
                copiedGraph[y][x] = 1;
            }
        }

        // for (int i = 0; i < n; i++) {
        //     for (int j = 0; j < m; j++) {
        //         cout << copiedGraph[i][j] << ' ';
        //     }
        //     cout << '\n';
        // }


        // cout << "checkpoint2\n";
        for (int i = 0; i < vt.size(); i++) {
            if (vt.size() >= 10) break;
            int y = vt.at(i).first;
            int x = vt.at(i).second;
            // cout << "y : " << y << " / x : " << x << '\n';
            for (int j = 0; j < 4; j++) {
                int ny = y + dy[j];
                int nx = x + dx[j];
                if (ny < 0 || nx < 0 || ny >= n || nx >= m) continue;
                if (vt.size() < 10 && copiedGraph[ny][nx] == 0) {
                    vt.push_back({ny, nx});
                    copiedGraph[ny][nx] = 2;
                }
            }
        }
        // cout << "checkpoint3\n";
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (copiedGraph[i][j] == 0) curValue++;
            }
        }
        min(minValue, curValue);

    } while (next_permutation(vi.begin(), vi.end()));
    cout << minValue << '\n';
    return 0;
}