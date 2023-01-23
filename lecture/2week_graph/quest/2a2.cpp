// 백준 2178 
#include <iostream>
#include <queue>
#include <tuple>

using namespace std;

int n, m, x, y, ny, nx;
int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};
int result = 1000;
queue<pair<int, int>> q;
int main() {
    cin >> n >> m;
    int graph[n][m];
    int visited[n][m];
    int arr[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%1d", &graph[i][j]); // 따닥따닥 붙어있는 것들은 이런식으로 받자!
            visited[i][j] = 0;
            arr[i][j] = 0;
        }
    }

    q.push({0, 0});
    visited[0][0] = 1;
    while (q.size()) {
        tie(y, x) = q.front(); q.pop();
        for (int i = 0; i < 4; i++) {
            ny = y + dy[i];
            nx = x + dx[i];
            if (ny < 0 || ny >= n || nx < 0 || nx >= m || graph[ny][nx] == 0) continue;
            if (visited[ny][nx]) continue;
            
            visited[ny][nx] = visited[y][x] + 1;
            
            q.push({ny, nx});
            
            arr[ny][nx] = visited[ny][nx];

            if (ny == n - 1 && nx == m - 1 && visited[ny][nx] < result) {
                cout << "how many times" << '\n';
                result = visited[ny][nx];
            }
        }
    }
    cout << result << '\n';
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) { 
            cout << arr[i][j] << "  ";
        }
        cout << '\n';
    }
    return 0;
}