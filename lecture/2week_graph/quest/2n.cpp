#include <iostream>

using namespace std;

void go(int * arr, int * dish, int r, int idx, int size) {
    if (idx == r) {
        for (int i = 0; i < r; i++) {
            cout << *(dish + i);
        }
        cout << '\n';
        return;
    }
    for (int i = 0; i < size; i++) {
        *(dish + idx) = *(arr + i);
        go(arr, dish, r, idx + 1, size);
    }
}
int main() {
    int n;
    cin >> n;
    int arr[] = {0,1,2,3,4,5,6,7,8,9};
    int dish[n] = {0};
    go(arr, dish, n, 0, 10);
    return 0;
}