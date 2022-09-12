//
// Created by seongjin on 22. 9. 13.
//

#include <iostream>

int n, m, a[10][10];
std::string s;
/* 다음을 입력받을 수 있는 방법은?
4 4
1000
0000
0111
0000
 */
int main() {
    // solution 1
//    std::cin >> n >> m;
//    for (int i = 0; i < n; i++) {
//        std::cin >> s;
//        for (int j = 0; j < m; j++) {
//            a[i][j]= s[j] - '0';
//        }
//    }
//    for(int i = 0; i < n; i++) {
//        for(int j = 0; j < m; j++) {
//            std::cout << a[i][j];
//        }
//        std::cout << '\n';
//    }

    // solution 2
    std::cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++) {
            scanf("%1d", &a[i][j]);
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            std::cout << a[i][j];
        }
        std::cout << '\n';
    }

    return 0;
}