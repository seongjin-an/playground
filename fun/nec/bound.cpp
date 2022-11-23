//
// Created by seongjin on 22. 11. 23.
//

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v;
    int a[5] = {1, 2, 2, 2, 3};

    for (int i = 0; i < 5; i++) {
        v.push_back(a[i]);
    }

    int x = 2;
    int c = (int) (std::upper_bound(v.begin(), v.end(), x) - std::lower_bound(v.begin(), v.end(), x));
    int f = (int) (std::lower_bound(v.begin(), v.end(), x) - v.begin());
    int t = (int) (std::upper_bound(v.begin(), v.end(), x) - v.begin());
    int f2 = *std::lower_bound(v.begin(), v.end(), x);
    int t2 = *std::upper_bound(v.begin(), v.end(), x);

    printf("%d 의 갯수 : %d, 시작되는 점 : %d, 끝나는 점 : %d\n", x, c, f, t);
    printf("lower bound 가 시작되는 점의 값 : %d, upper bound 가 시작되는 점의 값 : %d\n", f2, t2);

    c = (int) (std::upper_bound(a, a + 5, x) - std::lower_bound(a, a + 5, x));
    f = (int) (std::lower_bound(a, a + 5, x) - a);
    t = (int) (std::upper_bound(a, a + 5, x) - a);
    f2 = *std::lower_bound(a, a + 5, x);
    t2 = *std::upper_bound(a, a + 5, x);

    printf("%d 의 갯수 : %d, 시작되는 점 : %d, 끝나는 점 : %d\n", x, c, f, t);
    printf("lower bound 가 시작되는 점의 값 : %d, upper bound 가 시작되는 점의 값 : %d\n", f2, t2);

    return 0;
}