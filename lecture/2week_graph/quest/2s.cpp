// 백준 1325
#include <iostream>
#include <map>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

int count(map<int, vector<int>> trustMap, int key) {
    int sum = 1;
    if (trustMap.find(key) == trustMap.end()) {
        return sum;
    } else {
        for (int i = 0; i < trustMap[key].size(); i++) {
            sum += count(trustMap, trustMap[key][i]);
        }
    }
    return sum;
}
bool comp(pair<int, int> a, pair<int, int>  b) {
    if (a.second == b.second) {
        return a.first < b.first;
    }
    return a.second < b.second;
}

int  main() {
    vector<int> v;
    int n, m, x, y;
    cin >> n >> m;
    map<int, vector<int>> trustMap;
    map<int, int> result;
    map<int, int> imsi;
    do {
        cin >> x >> y;
        map<int, vector<int>>::iterator found = trustMap.find(y);
        if (found == trustMap.end()) {
            vector<int> empty;
            trustMap.insert({y, vector<int>()});
        }
        trustMap[y].push_back(x);
    } while (--m);
    int maxValue = 0;
    for (map<int, vector<int>>::iterator i = trustMap.begin(); i != trustMap.end(); i++) {
        int key = i->first;

        int sum = count(trustMap, key);
        maxValue = max(maxValue, sum);
        result.insert({key, sum});
    }
    vector<pair<int, int>> resultV(result.begin(), result.end());
    std::sort(resultV.begin(), resultV.end(), comp);

    for (auto i = resultV.begin(); i != resultV.end(); i++) {
        if (i->second == maxValue) cout << i->first << ' ';
    }

    return 0;
}