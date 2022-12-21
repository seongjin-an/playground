// 백준 1159
#include <iostream>
#include <string>
#include <map>
#include <vector>


using namespace std;

int N;
vector<string> vec;
map<string, int> result;

int main () {
    cin >> N;
    for (int i = 0; i < N; i++) {
        string name;
        cin >> name;
        // auto cnt = result.count(name);
        string firstAlpha = name.substr(0,1);
        map<std::string, int>::iterator iter = result.find(firstAlpha);
        if (iter == result.end()) {
            result.insert({firstAlpha, 0});
        }
        result[firstAlpha]++;
    }

    // for (map<string, int>::iterator iter = result.begin(); iter != result.end(); iter++) {
    //     cout << iter->first << " : " << iter->second << '\n';
    // }
    
    for (map<string,int>::iterator iter = result.begin(); iter != result.end(); iter++) {
        if (iter->second >= 5) vec.push_back(iter->first);
    }
    if (vec.size() == 0) {
        cout << "PREDAJA" << '\n';
    } else {
        for (vector<string>::iterator iter = vec.begin(); iter != vec.end(); iter++) {
            cout << *iter;
        }
    }
}
