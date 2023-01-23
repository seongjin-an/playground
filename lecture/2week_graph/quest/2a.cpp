// 백준 2178 
#include <iostream>
#include <vector>
#include <stack>
#include <tuple>

using namespace std;

int n, m;
int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};

int x, y, ny, nx;
stack<pair<int, int>> s;
int result = 10000;

int main() {
    cin >> n >> m;
    int graph[n][m];
    int visited[n][m];    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            // cin >> graph[i][j];
            scanf("%1d", &graph[i][j]);
            visited[i][j] = 0;
        }
    }
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < m; j++) {
    //         cout << graph[i][j] << ' ';
    //     }
    //     cout << '\n';
    // }
    s.push({0, 0});
    visited[0][0] = 1;
    while (s.size()) {
        tie(y, x) = s.top(); s.pop();
        
        for (int i = 0; i < 4; i++) {
            ny = y + dy[i];
            nx = x + dx[i];
            // cout << "ny: " << ny << " / nx: " << nx << '\n';
            if (ny < 0 || ny >= n || nx < 0 || nx >= m || graph[ny][nx] == 0) continue;
            // cout << "pass1 ny: " << ny << " / nx: " << nx << '\n';
            // cout << "visited[ny][nx]: " << visited[ny][nx] << '\n';
            if (visited[ny][nx]) continue;
            visited[ny][nx] = visited[y][x] + 1;
            // y = ny; x = nx;
            // cout << "y : " << y << " / x : " << x << '\n';
            s.push({ny, nx});
            if (ny == n - 1 && nx == m -1 && visited[ny][nx] < result) {
                result = visited[ny][nx];
            }
        }
    }
    cout << result << '\n';
    return 0;
}