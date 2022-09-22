//
// Created by user on 2022-09-22.
//

#include <iostream>
#include <string>
#include <map>

int main() {
    std::map<std::string, int> mp;
    mp.insert({"test1", 1});
    mp.emplace("test2", 2);
    mp["test3"] = 3;
    mp["test1"] = 111;

    for (std::pair<const std::string, int> el: mp) {
        std::cout << "el.first: " << el.first << " : el.second: " << el.second << '\n';
    }

    //iterator<pair<const string, int>>
    auto search = mp.find("test2");

    if (search != mp.end()) {
        std::cout << "found search->first: " << search->first << " : (*search).second: " << (*search).second << '\n';
    } else {
        std::cout << "not found!" << '\n';
    }

    mp["test1"]++;
    std::cout << "after ++, " << mp["test1"] << '\n';

    std::cout << "mp.size(): " << mp.size() << '\n';
    mp.erase("test1");
    std::cout << "mp.size(): " << mp.size() << '\n';
    for (auto el: mp) {
        std::cout << "el.first: " << el.first << " : el.second: " << el.second << '\n';
    }
    std::cout << "////////////////////////////////////////////////////" << '\n';
    std::map<std::string, int> _map;
    _map["ansj"]++;
    for(auto el : _map) {
        std::cout << "el.first : " << el.first << " / el.second : " << el.second << '\n';
    }
    // map 은 second 를 초기화 하지 않은면 int 형일 때는 0으로 초기화되고, string 은 빈문자열로 초기화된다.
    // map : 정렬이 됨 / 레드블랙트리기반 / 탐색, 삽입, 삭제에 O(logN) 이 걸림
    // unordered_map : 정렬이 안됨 / 해시테이블 기반 / 탐색, 삽입, 삭제에 평균적으로 O(1), 가장 최악의 경우 O(N)
    return 0;
}