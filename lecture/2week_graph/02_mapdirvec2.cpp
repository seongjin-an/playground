#include <iostream>

using namespace std;

const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};
int arr[3][3];
bool visited[3][3];
int main() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }
    int y = 0, x = 0;
    int i = -1;
    int cnt;
    while(true) {
        cnt = 0;
        for (int i = 0; i < 4; i++) {
            cnt++;
            int ny = y + dy[i];
            int nx = x + dx[i];
            if (ny < 0 || ny > 2 || nx < 0 || nx > 2) continue;
            if (visited[ny][nx] == false && arr[ny][nx] == 1) {
                cout << "(" << y << ", " << x << ") visited" << '\n';
                x = nx;
                y = ny;
                visited[ny][nx] = true;
                break;
            }
        }
        if (cnt == 4) {
            cout << "(" << y << ", " << x << ") visited" << '\n';
            break;
        };
    }
    return 0;
}