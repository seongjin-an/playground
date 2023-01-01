//9375
#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

int n, m;
string s;



void combination(int cArr[], int depth, int next, int r){
    if(depth == r){
        return;
    }

    for(int i = next; i <= n; i++){
        cArr[depth] = i;
        combination(cArr, depth + 1, i + 1, r);
    }
}

void combi(int start, vector<int> b, int k) {
    if (b.size() == k) {
        return;
    }
    for (int i = start + 1; i < n; ++i) {
        b.push_back(i);
        combi(i, b, k);
        b.pop_back();
    }
    return;
}

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

            cout << "s : " << s << '\n';
            int idx = s.find(" ");
            cout << "idx : " << idx << '\n';
            string val = s.substr(0, idx);
        
            string key = s.substr(idx + 1, s.size());
            cout << "key: " << key << " / val: " << val << '\n';
            
            map<string, vector<string>>::iterator it = mp.find(key);

            if (!mp.count(key)) {
                mp.insert({key, vector<string>()});
            }
            // if (it == mp.end()) {
            //     mp.insert({key, vector<string>()});
            // }
            mp[key].push_back(val);
        }
        for (map<string, vector<string>>::iterator it = mp.begin(); it != mp.end(); it++) {
            cout << "key: " << it->first << " : "  << '\n';
            cout << "val size: " << it->second.size() << '\n';
            for (int k = 0; k < it->second.size(); k++) {
                cout << "val : " << it->second[k] << '\n';
            }
        }
        int size = mp.size();
        vector<int> b;
        for (int j = 1; j <= size; j++) {
            combi(-1, b, size);
        }
        int sum = 0;
        
        for (int k = 0; k < b.size(); k++) {
            sum += b[k];
        }
        cout << sum << '\n';
    }
    return 0;
}