#include <iostream>

using namespace std;

void go(int * arr, int * dish, int idx, int depth, int size) {
    if (idx == depth) {
        for (int i = 0; i < depth; i++) {
            cout << *(dish + i);
        }
        cout << '\n';
        return;
    }
    for (int i = 0; i < size; i++) {
        *(dish + idx) = *(arr + i);
        go(arr, dish, idx + 1, depth, size);
    }
}
int main() {
    int n;
    cin >> n;
    int arr[] = {0,1,2,3,4,5,6,7,8,9};
    int dish[n] = {0};
    go(arr, dish, 0, n, 10);
    return 0;
}