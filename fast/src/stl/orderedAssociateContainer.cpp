//
// Created by seongjin on 22. 1. 9..
// set, map, multiset, multimap

#include <iostream>
#include <string>
#include <map>

using std::cout;
using std::endl;

int main(){
    cout << std::boolalpha;
    std::map<int, std::string> m0;
    m0[1] = "a";
    cout << m0[1] << endl;
    m0.insert({1, "10"});
    cout << m0[1] << endl;
    cout << m0[2] << endl;
    m0.insert({4, "44"});
    cout << m0[4] << endl;
    cout << m0.size() << endl;
    cout << endl;

    std::pair<std::map<int, std::string>::iterator, bool> result = m0.insert({1, "55"});
    cout << "result.second: " << result.second << endl;
    cout << "result.first->first: " << result.first->first << endl;
    cout << "result.first->second: " << result.first->second << endl;
    cout << m0[1] << endl;
    cout << endl;

    auto [iter, success] = m0.insert({1, "111"});
    cout << "success:" << success << endl;
    cout << "iter->first: " << iter->first << endl;
    cout << "iter->second: " <<  iter->second << endl;

    if(auto [iter, success] = m0.insert({1, "123123"}); success){
        cout << "success true" << endl;
        cout << iter->first << endl;
        cout << iter->second << endl;
    }else{
        cout << "success false" << endl;
        cout << iter->first << endl;
        cout << iter->second << endl;
    }
    cout << endl;
    cout << "////////////////count////////////////" << endl;
    cout << m0.count(8) << endl;

    cout << endl;
    cout << "////////////find////////////" << endl;
    std::map<int, std::string>::iterator iter1 = m0.find(1);
    if(iter1 != m0.end()){
        cout << iter1->first << endl;
        cout << iter1->second << endl;
    }
    cout << endl;
    cout << "m0.count(1): " << m0.count(1) << endl;
    if(auto iter2 = m0.find(1); iter2 != m0.end()){
        cout << iter2->second << endl;
        m0.erase(iter2);
    }
    cout << "m0.count(1): " << m0.count(1) << endl;


    cout << endl;
    std::map<int, std::string> m1{
            {3, "1"},
            std::pair<int, std::string>(2, "2"),
            std::make_pair(1, "3")
    };
    for(std::pair<const int, std::string>& pair: m1){
        pair.second = "abc";
    }
    for(const std::pair<const int, std::string>& pair: m1){
        cout << pair.first << ":" << pair.second << endl;
    }
    for(const auto& pair: m1){
        cout << pair.first << ":" << pair.second << endl;
    }
    cout << endl;
    for(auto& [key, value]: m1){
        value = "aaaaa";
    }
    for(const auto& [key, value]: m1){
        cout << key << ":" << value << endl;
    }
    for(auto iter = m1.begin(); iter != m1.end(); ++iter){
        auto& [key, value] = *iter;
        value = "bbbbbbbbbbbbbbb";
    }
    for(auto iter= m1.cbegin(); iter != m1.cend(); ++iter){
        auto [key, value] = *iter;
        cout << key << ":" << value << endl;
    }
    cout << endl;
    for(std::map<int, std::string>::iterator iter = m1.begin(); iter != m1.end(); ++iter){
        iter->second = "bca";
    }
    cout << endl;
    for(std::map<int, std::string>::const_iterator iter = m1.cbegin(); iter != m1.cend(); ++iter){
        cout << iter->first << ":" << iter->second << endl;
    }
}



