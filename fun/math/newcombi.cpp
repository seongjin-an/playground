#include <iostream>

using namespace std;

void go(int * arr, int * dish, int r, int idx, int depth, int size) {
    if (depth == r) {
        for (int i = 0; i < r; i++) {
            cout << *(dish + i);
        }
        cout << '\n';
        return;
    }
    for (int i = idx; i < size; i++) { // i 가 0 일 경우 중복까지 허용한 조합, idx 일 경우 중복은 허용하지 않는 조합.
        *(dish + depth) = *(arr + i);
        go(arr, dish, r, i + 1, depth + 1, size);
    }
}
int main() {
    int n;
    cin >> n;
    int arr[] = {0,1,2,3,4,5,6,7,8,9};
    int dish[n] = {0};
    go(arr, dish, n, 0, 0, 10);
    return 0;
}