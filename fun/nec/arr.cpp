//
// Created by seongjin on 22. 12. 6.
//

#include <iostream>
#include <vector>

void b (int a[][5]) {
    a[0][4] = 44;
}

// 왼쪽으로 90 도
void rotate90l (std::vector<std::vector<int>> &key) {
    int m = key.size();
    std::vector<std::vector<int>> temp(m, std::vector<int>(m, 0));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            temp[i][j] = key[j][m - i - 1];
        }
    }
    key = temp;

    return;
}

// 오른쪽으로 90 도
void rotate90r (std::vector<std::vector<int>> & key) {
    int m = key.size();
    std::vector<std::vector<int>> temp(m, std::vector<int>(m, 0));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            temp[i][j] = key[m - j - 1][i];
        }
    }
    key = temp;

    return;
}

int main() {
    int a[3][5] = {
            {1,2, 3, 4, 5},
            {6, 7, 8, 9, 10},
            {11, 12, 13, 14, 15}
    };
    b(a);
    std::cout << a[0][4] << '\n';

    std::vector<int> v(10, 0);
    for (int i = 0; i < v.size(); i++) std::cout << v[i] << ' ';

    return 0;
}