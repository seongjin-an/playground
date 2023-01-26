// 2468
#include <iostream>

using namespace std;

const int dy[] = {-1, 0, 1, 0};
const int dx[] = {0, 1, 0, -1};

void dfs(int size, int **graph, int **visited, int h, int y, int x) {
    visited[y][x] = 1;
    for (int i = 0; i < 4; i++) {
        int ny = y + dy[i];
        int nx = x + dx[i];
        if (ny < 0 || nx < 0 || ny >= size || nx >= size || graph[ny][nx] - h <= 0) continue;
        if (visited[ny][nx]) continue;
        dfs(size, graph, visited, h, ny, nx);
    }
    return;
}

int main() {
    int mn = 100, mx = 1;
    int n;
    cin >> n;
    int **graph = new int*[n];
    
    for (int i = 0; i < n; i++) graph[i] = new int[n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int k;
            cin >> k;
            graph[i][j] = k;
            if (k < mn) {
                mn = k;
            }
            if (k > mx) {
                mx = k;
            }
        }
    }
    int result = 0;
    for (int h = mn; h < mx; h++) {
        int ret = 0;
        
        int **visited = new int*[n]{};
        
        for (int i = 0; i < n; i++) visited[i] = new int[n] {};
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (graph[i][j] - h > 0 && !visited[i][j]) {
                    dfs(n, graph, visited, h, i, j);
                    ret++;
                }
            }
        }
        cout << "h : " << h << " / ret : " << ret << '\n';
        if (result < ret) {
            result = ret;
        }
        for (int i = 0; i < n; i++) delete [] visited[i];
        delete visited;
    }
    cout << result << '\n';


    return 0;
}