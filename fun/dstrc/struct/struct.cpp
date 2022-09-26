//
// Created by user on 2022-09-26.
//
#include <iostream>
#include <vector>
#include <algorithm>

struct Point {
    int x, y;
    Point(int x, int y) : x(x), y(y) {}
    Point(){
        x = -1;
        y = -1;
    }
    //첫 번째 const 는 매개변수는 불변이라는 의미이고, 두 번째 const 는 this 가 불변이라는 뜻
    bool operator < (const Point &a) const {
        if (x == a.x) return y < a.y;
        return x < a.x;
    }
};

struct percent {
    int x, y;
    double w, d, l;
} a[6];
/*
 * 커스텀한 무언가를 진행하고 싶다면 구조체를 통해서 해야 한다. 예를 들어서 2차원적인 자료구조는 pair를 사용하면 되지만
 * x, y, z 등.. 여러가지 인자들이 나오고 커스텀한 정렬이 필요하다면 역시나 구조체를 사용하는 것이 좋다. 정렬이 필요하지
 * 않은 경우 2번처럼 단순하게 구조체를 설정하면 된다.
 * 하지만 정렬 즉, 커스텀한 정렬이 필요할 때는 1번처럼 해야한다.
 */

bool cmp(const Point &a, const Point &b) {
    if (b.x == a.x) return a.y > b.y;
    return b.x < a.x;
}

int main() {
    std::vector<Point> v;
    for (int i = 10; i > 0; i--) {
        Point a = {i, i};
        v.push_back(a);
    }
    std::sort(v.begin(), v.end());
    for (auto it : v) std::cout << "it.y: " << it.y << " / it.x: " << it.x << '\n';

    std::cout << "////////////////////////" << '\n';

    std::vector<Point> v2;
    v2.push_back({1, 12});
    v2.push_back({1, 10});
    v2.push_back({1, 11});
    std::sort(v2.begin(), v2.end(), cmp);
    for (auto it : v2) std::cout << "it.y: " << it.y << " / it.x: " << it.x << '\n';

    return 0;
}