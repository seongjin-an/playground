//
// Created by user on 2022-09-26.
//

#include <iostream>
#include <queue>

int main() {
    std::queue<int> q;
    q.push(1);
    q.push(2);
    std::cout << q.front() << '\n';
    q.pop();
    std::cout << q.front() << '\n';
    std::cout << q.size() << '\n';

    std::cout << "//////////////////////////////" << '\n';

    std::queue<int> q2;
    for (int i = 0; i < 10; i++) q2.push(i);
    while (q2.size()) {
        std::cout << q2.front() << ' ';
        q2.pop();
    }

    return 0;
}