#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int graph[n][m] = {};
    // fill(&graph[0][0], &graph[0][0] + sizeof(graph) / sizeof(int), 0);
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int k;
            cin >> k;
            graph[i][j] = k;
            if (k == 0) {
                v.push_back({i, j});
            }
        }
    }
    
    return 0;
}