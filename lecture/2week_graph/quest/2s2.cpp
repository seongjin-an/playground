#include <iostream>
#include <vector>

using namespace std;

int cnt, visited[104];
vector<int> v[104];
void dfs(int here) {
    cnt++;
    visited[here]= 1;
    for (int there : v[here]) {
        if (visited[there]) continue;
        dfs(there);
    }
    return;
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    v[1].push_back(2);
    v[1].push_back(3);
    dfs(1);
    cout << cnt << '\n';
    return 0;
}