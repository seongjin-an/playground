//백준 17298
#include <iostream>
#include <algorithm>

using namespace std;

int n;

int main() {
    cin >> n;
    int arr[n];
    int nge[n];
    fill(arr, arr + n, 0);
    fill (nge,nge + n, -1);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    if (n == 1) {
        cout << "-1";
        return 0;
    }
    for (int i = 0; i < n; i++) {
        int j = i;
        do {
            if (i != j && nge[i] == -1 && arr[i] < arr[j]) {
                nge[i] = arr[j];
                break;
            }
            j++;
        } while(j < n);
    }
    for (int i = 0; i < n; i++) {
        cout << nge[i] << ' ';
    }
    return 0;
}