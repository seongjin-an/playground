// 2559

#include <iostream>
#include <vector>

using namespace std;

int N, K;

int main() {
    scanf("%d %d", &N, &K);
    if (N < K)
    {
        throw invalid_argument("INVALID");
    }
    
    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf(" %d", &arr[i]);
    }
    
    vector<int> sums;
    for (int i = 0; i < N - K; i ++) {
        int temp = 0;
        for (int j = 0; j < K; j++) {
            temp += arr[i + j];
        }
        sums.push_back(temp);
    }

    int max = 0;
    for (int i = 0; i < N + 1 -K; i++) {
        if (sums[i] > max) {
            max = sums[i];
        }
    }

    cout << max << '\n';
    return 0;
}