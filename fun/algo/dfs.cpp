#include <iostream>
#include <vector>
#include <stack>

using namespace std;

const int count = 8;
vector<int> graph[count];
int visited[count];
stack<int> st;
int main() {
    graph[0].push_back(1); graph[1].push_back(0);
    graph[0].push_back(2); graph[2].push_back(0);
    graph[1].push_back(3); graph[3].push_back(1);
    graph[1].push_back(4); graph[4].push_back(1);
    graph[2].push_back(5); graph[5].push_back(2);
    graph[2].push_back(6); graph[2].push_back(6);
    graph[4].push_back(5); graph[5].push_back(4);
    graph[3].push_back(7); graph[7].push_back(3);

    st.push(0);
    visited[0] = 1;
    while(st.size() != 0) {
        int node = st.top(); st.pop();
        cout << node << ' ';
        // visited[node] = 1;
        for (int v : graph[node]) {
            if (visited[v] == 0) {
                st.push(v);
                visited[v] = 1;
            }
        }
    }

    return 0;
}