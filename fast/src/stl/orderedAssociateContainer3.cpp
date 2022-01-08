//
// Created by seongjin on 22. 1. 9..
// set, map, multiset, multimap

#include <iostream>
#include <set>
#include <map>
#include <functional>

using std::cout;
using std::endl;

struct Greater{
    bool operator()(const int& lhs, const int& rhs) const{
        return lhs > rhs;
    }
};

int main(){
    std::set<int> s{
        1,2,3,4
    };
//    s[1] = 2;//error
//    std::pair<std::set<int>::iterator, bool> result = s.insert(10);
    if(auto [iter, success] = s.insert(10); success){
        cout << *iter << endl;
    }

    std::multiset<int> ms{
        1,1,3,10,10,3
    };
    cout << endl;
    for(const auto& num: ms){
        cout << num << endl;
    }
    auto iter = ms.insert(1);
    cout << *iter << endl;
    cout << ms.count(1) << endl;

    cout << endl;
    std::set<int, Greater> s1{3,10,-1};
    std::set<int, std::greater<int>> s2{3, 10, -1};
    std::map<int, std::string, std::less<int>> m2;
    for(const auto& num: s1){
        cout << num << endl;
    }
    for(const auto& num: s2){
        cout << num << endl;
    }
}