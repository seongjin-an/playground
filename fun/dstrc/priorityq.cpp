//
// Created by user on 2022-09-27.
//

#include <iostream>
#include <queue>
#include <vector>
/**
 * 우선순위 큐이다. 내부구조는 heap 으로 구현되어 있으며 주로 디익스트라, 그리디 등에 사용된다.
 * greater 를 사용하면 오름차순, less 를 사용하면 내림차순으로 바꿀 수 있다.
 */

struct Point {
    int y, x;
    Point(int y, int x): y(y), x(x) {}
    Point(){y = -1; y = -1;}
    bool operator < (const Point &a) const {
        return x > a.x;
    }
};

struct Point2 {
    int y, x;
};
struct cmp{
    bool operator()(Point2 a, Point2 b) {
        return a.x < b.x;
    }
};

int main() {
    std::priority_queue<int, std::vector<int>, std::greater<int>> pq; // 오름차순
//    std::priority_queue<int, std::vector<int>, std::less<int>> pq; // 내림차순
    pq.push(5);
    pq.push(4);
    pq.push(3);
    pq.push(2);
    pq.push(1);
    std::cout << pq.top() << '\n';

    std::cout << "///////////////////////////////////" << '\n';

    std::priority_queue<Point> pq2;
    pq2.push({1, 1});
    pq2.push({2, 2});
    pq2.push({3, 3});
    pq2.push({4, 4});
    pq2.push({5, 5});
    pq2.push({6, 6});
    std::cout << pq2.top().x << '\n';

    std::cout << "///////////////////////////////////" << '\n';

    std::priority_queue<Point2, std::vector<Point2>, cmp> pq3;
    pq3.push({1,1});
    pq3.push({2,2});
    pq3.push({3,3});
    pq3.push({4,4});
    pq3.push({5,5});
    pq3.push({6,6});
    std::cout << pq3.top().x << '\n';

    return 0;
}