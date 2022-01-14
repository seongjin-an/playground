//
// Created by seongjin on 22. 1. 14..
//

#include <iostream>
#include <vector>
#include <map>
#include <type_traits>
#include <tuple>

template<auto N0, auto N1>
auto add(){
    return N0 + N1;
}

template<auto... Args>
auto sum(){
    return (Args + ...);
}
class Person{
public:
    float weight;
    float height;

    void func(){}
};

int main(){
    std::cout << sum<10, 2222222,100000000>() << std::endl;

    std::map<const int, std::string> m {
            {1, "1111"},
    };
    std::map<const int, std::string>::iterator iter = m.begin();
    const auto& [key, value] = *iter;
    std::cout << "key: " << key << std::endl;
    std::cout << "value: " << value << std::endl;

    std::tuple<int, float, std::string> t0 {1, 2.0f, "3"};
    auto t1 = std::make_tuple(1, 2.0f, "3");

    int x0;
    float y1;
    std::string z2;
    std::tie(x0, y1, z2) = t0;

    std::cout << x0 << std::endl;
    std::cout << y1 << std::endl;
    std::cout << z2 << std::endl;

    auto [x1, y2, z3] = t0;
    std::cout << x1 << std::endl;
    std::cout << y2 << std::endl;
    std::cout << z3 << std::endl;

    std::cout << std::get<0>(t0);

    Person p{64.f, 17};

    auto [weight, height] = p;

    std::cout << weight << std::endl;
    std::cout << height << std::endl;

}