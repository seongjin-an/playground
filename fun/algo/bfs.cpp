#include <iostream>
#include <vector>
#include <queue>

using namespace std;

const int count = 8;
bool visited[count];
vector<int> graph[count];
queue<int> q;
int main() {
    graph[0].push_back(1); graph[1].push_back(0);
    graph[0].push_back(2); graph[2].push_back(0);
    graph[1].push_back(3); graph[3].push_back(1);
    graph[1].push_back(4); graph[4].push_back(1);
    graph[2].push_back(5); graph[5].push_back(2);
    graph[2].push_back(6); graph[6].push_back(2);
    graph[4].push_back(5); graph[5].push_back(4);
    graph[3].push_back(7); graph[7].push_back(3);

    q.push(0);
    visited[0] = true;
    while(q.size()) {
        int node = q.front(); q.pop();
        cout << node << ' ';
        for (int v : graph[node]) {
            if (!visited[v]) {
                q.push(v);
                visited[v] = true;
            }
        }
    }
    cout << '\n';
    return 0;
}