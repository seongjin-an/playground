//백준 2852
#include <iostream>
#include <string>

using namespace std;

int n, t, mm, ss, a, asum, b, bsum, c, pre;
string curtime;
string print(int a) {
    string d = "00" + to_string(a / 60);
    string e = "00" + to_string(a % 60);
    return d.substr(d.size() - 2, 2) + ":" + e.substr(e.size() - 2, 2);
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> t >> curtime;
        mm = atoi(curtime.substr(0, 2).c_str());
        ss = atoi(curtime.substr(3, 2).c_str());
        c = mm * 60 + ss;
        if (a > b) {
            asum += c - pre;
        } 
        if (a < b) {
            bsum += c - pre;
        }
        if (t == 1) a++;
        else if (t == 2) b++;
        pre = c;
        if (i == n - 1) {
            if (a > b) {
                asum += 2880 - c;
            } else if (a < b) {
                bsum += 2880 - c;
            }
        }
        
    }
    cout << print(asum) << '\n';
    cout << print(bsum) << '\n';
    return 0;
}