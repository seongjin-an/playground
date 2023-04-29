#include <iostream>
#include <stack>
#include <vector>
#include <utility>
#include <tuple>
#include <algorithm>
#include <climits>

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

    stack<pair<int, int>> st;
    int visited[n][m];
    int maxCount = 0;
    int y = 0,  x = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == 'L') {
                fill(&visited[0][0], &visited[n - 1][m], 0);
                st.push({i, j});
                visited[i][j] = 1;
                while (st.size()) {
                    tie(y, x) = st.top(); st.pop();
                    for (int k = 0; k < 4; k++) {
                        int ny = y + dy[k];
                        int nx = x + dx[k];
                        if (ny < 0 || nx < 0 || ny >= n || nx >= m) continue;
                        if (arr[ny][nx] != 'L') continue;
                        if (visited[ny][nx]) continue;
                        visited[ny][nx] = visited[y][x] + 1;
                        st.push({ny, nx});
                    }
                }
                maxCount = max(maxCount, *max_element(&visited[0][0], &visited[n - 1][m]));
            }
        }
    }
    cout << maxCount - 1 << '\n';
    for (int i = 0; i < n; i++) {
        delete [] arr[i];
    }
    delete [] arr;
    return 0;
}