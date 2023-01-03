//9375
#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

int n, m;
string s;
vector<int> results;
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> m;
        map<string, vector<string>> mp;
        cin.ignore();
        for (int j = 0; j < m; j++) {
            
            getline(cin, s, '\n');
            //https://chbuljumeok1997.tistory.com/42
            // int cur = 0;
            // int prev = 0;
            // vector<string> x;
            // x.clear();
            // cur = s.find(' ');
            // while (cur != string::npos) {
            //     string substring = s.substr(prev, cur - prev);
            //     x.push_back(substring);
            //     prev = cur + 1;
            //     cur = s.find(' ', prev);
            // }
            // x.push_back(s.substr(prev, cur - prev));

            // cout << "s : " << s << '\n';
            int idx = s.find(" ");
            // cout << "idx : " << idx << '\n';
            string val = s.substr(0, idx);
        
            string key = s.substr(idx + 1, s.size());
            // cout << "key: " << key << " / val: " << val << '\n';
            
            map<string, vector<string>>::iterator it = mp.find(key);

            if (!mp.count(key)) {
                mp.insert({key, vector<string>()});
            }
            // if (it == mp.end()) {
            //     mp.insert({key, vector<string>()});
            // }
            mp[key].push_back(val);
        }
        // for (map<string, vector<string>>::iterator it = mp.begin(); it != mp.end(); it++) {
        //     cout << "key: " << it->first << " : "  << '\n';
        //     cout << "val size: " << it->second.size() << '\n';
        //     for (int k = 0; k < it->second.size(); k++) {
        //         cout << "val : " << it->second[k] << '\n';
        //     }
        // }
        
        int result = 1;
        for (map<string, vector<string>>::iterator it = mp.begin(); it != mp.end(); it++) {
            result *= it->second.size() + 1;
        }
        results.push_back(result - 1);
    }
    for (int i = 0; i < n; i++) {
        cout << results[i] << '\n';
    }
    return 0;
}