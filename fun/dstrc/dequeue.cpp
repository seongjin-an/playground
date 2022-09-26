//
// Created by user on 2022-09-26.
//

#include <iostream>
#include <queue>

int main() {
    std::deque<int> dq;
    dq.push_front(1);
    dq.push_back(2);
    dq.push_back(3);
    std::cout << "dq.front() : " << dq.front() << '\n';
    std::cout << "dq.back() : " << dq.back() << '\n';
    std::cout << "dq.size() : " << dq.size() << '\n';
    dq.pop_back();
    std::cout << "after dq.pop_back() : " << dq.back() << '\n';
    dq.pop_front();
    std::cout << "after dq.pop_front() : " << dq.front() << '\n';
    std::cout << dq.size() << '\n';

    return 0;
}