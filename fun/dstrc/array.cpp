//
// Created by user on 2022-09-21.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <string.h>

int main() {
    int v[10];
    for(int i = 0; i < 10; i++) v[i - 1] = i;
    for(int a : v) std::cout << a << " ";
    std::cout << '\n';

    auto a = std::find(v, v + 10, 100);
    if(a == v + 10) std::cout << "not found" << '\n';

    std::fill(v, v + 10, 10);
    for(int a : v) std::cout << a << " ";
    std::cout << '\n';
    // 배열은 최대크기로 선언하자.
    std::cout << "///////////////////////////////////////////" << '\n';
    // 위에서는 fill 을 통해 초기화를 했는데 memset 으로도 할 수 있다. memset은 바이트 단위로 초기화를 한다.
    // 보통 0, -1 하나의 문자로 초기화를 할 때 사용한다. memset(초기화하는 배열, 값, 배열의 크기) 이렇게 사용한다.
    std::vector<int> v2[10]; // 벡터 10개를 생성함
    v2[0].push_back(1);
    v2[0].push_back(2);
    for(int a : v2[0]) std::cout << a << " ";
    std::cout << '\n';

    std::vector<int> v3(10, 0); // 크기 10 및 모든 요소 0 초기화 벡터 하나 생성
    v3.push_back(11);
    v3.push_back(22);
    for(int a : v3) std::cout << a << " ";
    std::cout << '\n';

    std::cout << "///////////////////////////////////////////" << '\n';

    std::vector<std::vector<int>> checked;
    std::vector<std::vector<int>> v4(10, std::vector<int>(10,0));
//    std::fill(v4.begin(), v4.end(), 0);

    int dp[10] = {0, };
    int dp2[10][10] = {{0,}};
//    for(int i = 0; i < 10; i++) {
//        for(int j = 0; j < 10; j++) {
//            std::cout << dp2[i][j] << " ";
//        }
//        std::cout << '\n';
//    }
//    for(int i = 0; i < 10; i ++) std::fill(dp[i], dp[i] + 10, 0);
//    int arr[2][5];
//    std::fill(&arr[0][0], &arr[0][0] + 2 * 5, 0);

    return 0;
}