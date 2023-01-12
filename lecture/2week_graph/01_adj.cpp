//
// Created by 안성진 on 2023/01/10.
//

/**
1번.
정점은 0번 부터 9번까지 10개의 노드가 있다. 1- 2/ 1- 3/ 3- 4 라는 경로가 있다. (1번과 2번, 1번과 3번, 3번과 4번은 연결되어있다.)
이를 이를 인접리스트로 표현한다면?
2번.
0번부터 방문안한 노드를 찾고 해당 노드부터 방문, 연결된 노드를 이어서 방문해서 출력하는 재귀함수를 만들고 싶다면 어떻게 해야할 까? 또한, 정점을 방문하고 다시 방문하지 않게 만드려면 어떻게 해야할까?
*/

#include <iostream>
#include <vector>
using namespace std;

const int V = 10;
vector<int> adj[V];
int visited[V];
void go(int idx) {
    cout << idx << '\n';
    visited[idx] = 1;
    for (int there : adj[idx]) {
        if (visited[there]) continue;
        go(there);
    }
    return ;
}

int main() {
    adj[1].push_back(2);
    adj[2].push_back(1);

    adj[1].push_back(3);
    adj[3].push_back(1);

    adj[3].push_back(4);
    adj[4].push_back(3);
    for (int i = 0; i < V; i++) {
        if (adj[i].size() && visited[i] == 0) go(i);
    }
}