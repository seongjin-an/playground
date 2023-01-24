// 백준 1012
#include <iostream>
#include <queue>
#include <tuple>
#include <vector>

using namespace std;

int t, m, n, k;
int y, x;
int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};
vector<int> v;


void bfs(int a, int b, int **graph, int **visited, size_t rows, size_t cols) {
    queue<pair<int, int>> q;
    
    q.push({a, b});
    visited[a][b] = 1;

    while(q.size()) {
        tie(y, x) = q.front(); q.pop();
        for (int i = 0; i < 4; i++) {
            int ny = y + dy[i];
            int nx = x + dx[i];
            if (ny < 0 || ny >= rows || nx < 0 || nx >=cols || graph[ny][nx] == 0) continue;
            if (visited[ny][nx]) continue;
            visited[ny][nx] = visited[y][x] + 1;
            q.push({ny, nx});
        }
    }
}

int main() {
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> m >> n >> k;
        int result = 0;
        int *graph[m];
        for (int j = 0; j < m; j++) graph[j] = new int[n]{};
        int *visited[m];
        for (int j = 0; j < m; j++) visited[j] = new int[n]{};

        for (int j = 0; j < k; j++) {
            cin >> y >> x;
            graph[y][x] = 1;
        }

        
        for (int a = 0; a < m; a++) {
            for (int b = 0; b < n; b++) {
                if (graph[a][b] == 1 && visited[a][b] == 0) {
                    // cout << "a : " << a << " / b : " << b << '\n';
                    bfs(a, b, graph, visited, m, n);
                    result++;
                }
            }
        }
        cout << '\n';
        cout << result << '\n';
        // v.push_back(result);
        for (int j = 0; j < m; j++) delete graph[j];
        for (int j = 0; j < m; j++) delete visited[j];
    }
    // for (int i = 0; i < v.size(); i++) {
    //     cout << v[i] << '\n';
    // }
    return 0;
}