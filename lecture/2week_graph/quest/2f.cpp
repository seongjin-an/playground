#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <tuple>

using namespace std;

int n, c;
map<int, vector<int>> m;
bool cmp(pair<int, vector<int>> & a, pair<int, vector<int>> & b) {
    int asize = a.second.size();
    int bsize = b.second.size();

    if (asize == bsize) {
        int amin = *min_element(a.second.begin(), a.second.end());
        int bmin = *min_element(b.second.begin(), b.second.end());
        return amin < bmin;
    } else {
        return asize > bsize;
    }
}
int main() {
    cin >> n >> c;
    for (int i = 0; i < n; i++) {
        int j;
        cin >> j;
        auto found = m.find(j);
        if (found == m.end()) {
            m[j] = vector<int>();
        }
        m[j].push_back(i);
    }

    vector<pair<int, vector<int>>> A;
    
    for (auto & it : m) {
        A.push_back(it);
    }

    sort(A.begin(), A.end(), cmp);

    for (auto& it : A) {
        auto fst = it.first;
        auto snd = it.second;
        for (int i = 0; i < snd.size(); i++) {
            cout << fst << ' ';
        }
    }

    return 0;
}