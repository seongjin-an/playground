#include <iostream>
#include <algorithm>

using namespace std;

// 

/*
2309
https://www.acmicpc.net/problem/2309
https://www.acmicpc.net/source/share/5cbef80aaad4484a8c3ea73bebf2c0ab
20
7
23
19
10
15
25
8
13
*/
int a [9];

int main() {
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    for (int i = 0; i < 9; i++) {
        cin >> a[i];
    }

    sort(a, a+9); // 순열을 구할경우 sort 먼저
    
    do {
        for (int i : a) cout << i << " ";
        cout << '\n';
        int sum = 0;

        for (int i = 0 ; i < 7; i++) sum += a[i];

        if (sum == 100) break;
    } while (next_permutation(a, a +9 ));

    for (int i = 0; i < 7; i++) cout << a[i] << '\n';
    return 0;
    
}