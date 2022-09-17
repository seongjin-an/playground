//
// Created by seongjin on 22. 9. 18.
//

#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string hello = "hello world";

    std::cout << hello << std::endl;
    //find : 어떠한 문자열이 들어있나 찾는다.. 만약 찾지 못한다면 문자열의 끝 위치인 string::npos를 반환
    if (hello.find("world") != std::string::npos) {
        std::cout << "exist!" << "\n";
    }
    std::cout << hello.substr(0, 3) << "\n";
    std::reverse(hello.begin(), hello.end());
    std::cout << hello << std::endl;

    return 0;
}