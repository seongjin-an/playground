// 1940
#include <iostream>
#include <utility>

using namespace std;

int n, m, result;
int main() {
    cin >> n;
    cin >> m;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++) {
        for (int k = i; k < n; k++) {
            if (arr[i] + arr[k] == m) { 
                result++;
            }
        }
    }
    cout << result << '\n';

    return 0;
}