#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int n;
int size;
long long num;
vector<int> results;
int main() {
    while (cin >> n) {
        size = -1;
        do {
            num = 0;
            size++;
            for (int i = size; i >= 0; i--) {
                num += pow(10, i);
            }
        } while (num % n);
        results.push_back(size + 1);
    }
    for (int i = 0; i < results.size(); i++) {
        cout << results[i] << '\n';
    }
    return 0;
}