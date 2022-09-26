//
// Created by user on 2022-09-26.
//

#include <iostream>
#include <stack>
#include <string>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::stack<std::string> stk;

    stk.push("a");
    stk.push("b");
    stk.push("c");
    stk.push("d");
    stk.push("e");
    stk.push("f");
    while(stk.size()) {
        std::string str = stk.top();
        std::cout << str << '\n';
        stk.pop();
    }
}