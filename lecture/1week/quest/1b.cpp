// 10808
// counting star map or arr
// string -> map
// int -> arr
#include <iostream>

using namespace std;

typedef long long ll;

string str;
int cnt[26];

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> str;

    for (char a : str) {
        cnt[a - 'a']++;
    }
    for (int i = 0; i < 26; i++) cout << cnt[i] << " ";
    return 0;
}