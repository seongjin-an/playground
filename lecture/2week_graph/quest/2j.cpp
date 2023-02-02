//백준 10709
#include <iostream>

using namespace std;

int h, w;
int graph[101][101];
int main() {
    cin >> h >> w;
    for (int i = 0; i < h; i++) {
        int c = 0;
        bool b = false;
        for (int j = 0; j < w; j++) {
            char k;
            cin >> k;
            if (k == 'c') {
                c = j;
                b = true;
                graph[i][j] = 0;
            } else {
                if (c == 0 && !b) {
                    graph[i][j] = -1;
                } else {
                    graph[i][j] = j - c;
                }
            }
            cout << graph[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}