//
// Created by seongjin on 22. 1. 9..
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <unordered_set>

struct Func{
    int operator()(int value) const{
        return value;
    }
};

int main(){
    Func func;
    func(10);

    int num = 10;
    auto func0 = [num](int value){
        return num + value;

    };
    std::cout << func0(20) << std::endl;

    std::set<int> s{1,2,3};
    auto iter2 = s.find(2);//O(log(n))
    if(iter2 != s.end()){
        std::cout << *iter2 << std::endl;
    }
    std::unordered_set<int> us{1,2,3};//O(1)
    us.find(2);//O(1)

    std::vector<int> v{1,2,3};
    auto iter = std::find(v.begin(), v.end(), 2);
    if(iter != v.end()){
        std::cout << *iter << std::endl;
    }
    auto iter3 = std::find_if(v.begin(), v.end(), [](const int& value){
        return (value == 2);
    });
    std::cout << std::endl;
    if(iter3 != v.end()){
        std::cout << *iter3;
    }
}