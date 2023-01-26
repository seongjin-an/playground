#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v;
int m, n, k;
int graph[101][101], visited[101][101];
int a, b, c, d;
const int dy[] = {-1, 0, 1, 0};
const int dx[] = {0, 1, 0, -1};

void dfs(int y, int x, int & w) {
    w++;
    visited[y][x] = 1;
    for (int i = 0; i < 4; i++) {
        int ny = y + dy[i];
        int nx = x + dx[i];
        if (ny < 0 || nx < 0 || ny >= m || nx >= n || !graph[ny][nx]) continue;
        if (visited[ny][nx]) continue;
        dfs(ny, nx, w);
    }
    return;
}
int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> m >> n >> k;
    fill(&graph[0][0], &graph[0][0] + 101 * 101, 1);
    
    for (int i = 0; i < k; i++) {
        cin >> a >> b >> c >> d;
        for (int l = (4 - b); l >= (5 - d); l--) {
            for (int j = a; j <= c - 1; j++) {
                graph[l][j] = 0;
            }
        }
    }

    // for (int i = 0; i < m; i++) {
    //     for (int j = 0; j < n; j++) {
    //         cout << graph[i][j] << ' ';
    //     }
    //     cout << '\n';
    // }
    int result = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (graph[i][j] && !visited[i][j]) {
                int w = 0;
                dfs(i, j, w);
                v.push_back(w);
                result++;
            }
        }
    }
    cout << result << '\n';
    sort(v.begin(), v.end());
    for (vector<int>::iterator i = v.begin(); i != v.end(); i++) {
        cout << *i << ' ';
    }

    return 0;
}