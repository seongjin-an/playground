//백준 2852
#include <iostream>
#include <string>

using namespace std;

int n, t, mm, ss, a, asum, b, bsum, c, pre;
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        scanf("%d %d:%d", &t, &mm, &ss);
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
    printf("%02d:%02d\n", asum / 60, asum % 60);
    printf("%02d:%02d", bsum / 60, bsum % 60);
    return 0;
}