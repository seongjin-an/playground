//
// Created by seongjin on 22. 9. 18.
//

#include <iostream>
#include <string>
//#include <utility>
#include <tuple>

int main() { // data structure
    std::pair<int, int> pr;
    std::tuple<int, std::string, int> tp;
    int a, b, c;
    std::string d;

//    pr = {1, 2}; // 이런 방법으로도 가능함.
    pr = std::make_pair(1, 2);
    std::pair<int, int> pr2 = std::make_pair(1, 2);
    //first 첫 번째 인자, second 두 번째 인자.
    std::cout << "pr.first : " << pr.first << " / pr.second : " << pr.second << '\n';
    //첫번째 인자 기준, 첫번째가 같으면 두번째인자로 판단
    if (pr < pr2) {
        std::cout << "true!!!" << '\n';
    } else {
        std::cout << "false!!!" << '\n';
    }
    std::tie(a, b) = pr;
    std::cout << "a : " << a << " / b : " << b << '\n';


    tp = std::make_tuple(1, "ansj", 3);

    std::cout << "std::get<0>(tp) : " << std::get<0>(tp) << '\n';
    std::cout << "std::get<1>(tp) : " << std::get<1>(tp) << '\n';
    std::cout << "std::get<2>(tp) : " << std::get<2>(tp) << '\n';

    std::tie(a, d, c) = tp;
    std::cout << "a : " << a << " / d : " << d << " / c : " << c << '\n';
    return 0;
}