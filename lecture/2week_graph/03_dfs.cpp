#include <iostream>
#include <vector>

using namespace std;

const int n = 6;
vector<int> adj[n];
int visited[n];
void dfs(int u) {
    visited[u] = 1;
    cout << u << '\n';
    for (int v : adj[u]) {
        if (visited[v] == 0) {
            dfs(v);
        }
    }
    
    cout << u << "로부터 시작된 함수가 종료되었습니다.\n";
    return; 
}

int main() {
    adj[1].push_back(2);
    adj[1].push_back(3);
    adj[2].push_back(4);
    adj[4].push_back(2);
    adj[2].push_back(5);
    dfs(1);
    return 0;
}
/**
1
2
4
4로부터 시작된 함수가 종료되었습니다.
5
5로부터 시작된 함수가 종료되었습니다.
2로부터 시작된 함수가 종료되었습니다.
3
3로부터 시작된 함수가 종료되었습니다.
1로부터 시작된 함수가 종료되었습니다.
*/