#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;

int a,b;
int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};
int go(char **arr, int **visited, int y, int x, int rows, int cols) {
//    cout << "(" << y << "," << x << ")" <<'\n';
    visited[y][x] = 1;
    int ret = 1;
    for (int i = 0; i < 4; i++) {
        int ny = y + dy[i];
        int nx = x + dx[i];
        if (ny < 0 || nx < 0 || ny >= rows || nx >= cols) continue;
        if (arr[ny][nx] == 'L' && visited[ny][nx] == 0) {
            ret += go(arr, visited, ny, nx, rows, cols);
        }
    }
    return ret;
}

int main() {
    cin >> a >> b;
    char **arr = new char*[a];
    int **visited = new int*[a];
    for (int i = 0; i < a; i++) {
        arr[i] = new char[b];
    }
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            char ch;
            cin >> ch;
            arr[i][j] = ch;
        }
    }
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            if (arr[i][j] == 'L') {
                cout << "(" << i << "," << j << ")" <<'\n';
                for(int k = 0; k < a; k++) {
                    visited[k] = new int[b]{};
                }
                int result = go(arr, visited, i, j, a, b);
                cout << "(" << i << ", " << j << ") result: " << result << '\n';
                for(int k = 0; k < a; k++)
                    delete [] visited[k];
            }
        }
    }
    return 0;
}