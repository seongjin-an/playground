// 백준 2636
#include <iostream>
#include <queue>
#include <tuple>
#include <vector>

using namespace std;


int main() {
    int dy[] = {-1, 0, 1, 0};
    int dx[] = {0, 1, 0, -1};
    int n, m;
    cin >> n >> m;
    int graph[n][m] = {};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> graph[i][j];
        }
    }

    int cnt = 0;
    int prevMelt = 0;
    while (true) {
        cnt++;
        queue<pair<int, int>> q;
        int visited[n][m] = {};
        vector<pair<int, int>> melt;
        q.push({0, 0});
        int x, y;
        while (q.size()) {
            tie(y, x) = q.front(); q.pop();
            for (int i = 0; i < 4; i++) {
                int ny = y + dy[i];
                int nx = x + dx[i];
                if (ny < 0 || nx < 0 || ny >= n || nx >= m) continue;
                if (visited[ny][nx] == 1) continue;
                if (graph[ny][nx] == 1) melt.push_back({ny, nx});
                if (graph[ny][nx] == 0) q.push({ny, nx});
                visited[ny][nx] = 1;
            }
        }
        if(melt.size()) {
            for (int i = 0; i < melt.size(); i++) {
                pair<int, int> el = melt.at(i);
                int y = el.first;
                int x = el.second;
                graph[y][x] = 0;
            }
            prevMelt = melt.size();
        } else {
            cout << cnt - 1 << '\n';
            cout << prevMelt << '\n';
            break;
        }
    }
    return 0;
}