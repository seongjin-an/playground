#include <iostream>
#include <vector>

using namespace std;

const int count = 8;
vector<int> graph[count];
int visited[count];

void dfs(int u) {
    visited[u] = 1;
    cout << u << ' ';
    for (int v : graph[u]) {
        if (visited[v] == 0) {
            dfs(v);
        }
    }
    return;
}

int main() {
    graph[0].push_back(1); graph[1].push_back(0);
    graph[0].push_back(2); graph[2].push_back(0);
    graph[1].push_back(3); graph[3].push_back(1);
    graph[1].push_back(4); graph[4].push_back(1);
    graph[2].push_back(5); graph[5].push_back(2);
    graph[2].push_back(6); graph[6].push_back(2);
    graph[4].push_back(5); graph[5].push_back(4);
    graph[3].push_back(7); graph[7].push_back(3);
    dfs(0);
    return 0;
}