#include <iostream>
#include <queue>
#include <vector>
#include <utility>
#include <tuple>

using namespace std;

int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};
int n, m;
int main() {
    cin >> n >> m;
    char **arr = new char*[n];
    for (int i = 0; i < n; i++) {
        arr[i] = new char[m];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    queue<pair<int, int>> q;
    int visited[n][m];
    int y,x;
    int maxCount = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == 'L') {

                fill(&visited[0][0], &visited[n - 1][m], 0);
                q.push({i, j});
                while (q.size()) {
                    tie(y, x) = q.front(); q.pop();
                    cout << "(" << y << ", " << x << ")\n";
                    for (int k = 0; k < 4; k++) {
                        int ny = y + dy[k];
                        int nx = x + dx[k];
                        if (ny < 0 || nx < 0 || ny >= n || nx >= m) continue;
                        if (arr[i][j] == 'W' || !visited[i][j]) continue;
                        visited[ny][nx] = visited[y][x] + 1;
                        q.push({ny, nx});
                    }
                }
            }
        }
    }
    return 0;
}