#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;



int digits(int p, int n) {
    int k = pow(10, p - 1) * p - (p - 1);
    // cout << "p : " << p << " / n : " << n << " / k : " << k << '\n';
    if (k < n) {
        return digits(p + 1, n) ;
    } else {
        return p;
    }
}
vector<string> v;
void go(int * arr, int * dish, int r, int idx, int depth, int size) {
    if (depth == r) {
        for (int i = 0; i < r; i++) {
            // cout << *(dish + i);
            v.push_back(to_string(*(dish + i)));
        }
        // cout << '\n';
        return;
    }
    for (int i = 0; i < size; i++) { // i 가 0 일 경우 중복까지 허용한 조합, idx 일 경우 중복은 허용하지 않는 조합.
        *(dish + depth) = *(arr + i);
        go(arr, dish, r, i + 1, depth + 1, size);
    }
}
int main() {
    int n;
    cin >> n;
    int d = digits(1, n);
    // cout << d << '\n';
    int arr[] = {0,1,2,3,4,5,6,7,8,9};
    int dish[n] = {0};
    go(arr, dish, d - 1, 0, 0, 10);
    cout << v.size() << '\n';
    return 0;
}