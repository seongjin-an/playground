//
// Created by seongjin on 22. 1. 9..
// set, map, multiset, multimap

#include <iostream>
#include <map>

using std::cout;
using std::endl;

int main(){
    cout << std::boolalpha;

    std::multimap<int, std::string> mm{
            {2, "10"},
            {1, "10"},
            {1, "20"},
            {1, "30"},
            {1, "10"}
    };
    for(const auto& [k, v]: mm){
        cout << k << ": " << v << endl;
    }
//    mm[1]="1111111";//error;
    std::multimap<int, std::string>::iterator result = mm.insert({1, "100"});
    cout << result->first << ": " << result->second << endl;


    if(auto iter = mm.find(1); iter!=mm.end()){
        cout << iter->second << endl;
    }
    cout << endl;
    auto lower = mm.lower_bound(1);
    auto upper = mm.upper_bound(1);
    for(auto iter = lower; iter != upper; ++iter){
        cout << iter->second << endl;
    }
    cout << endl;
    auto range = mm.equal_range(1);
    auto lower1 = range.first;
    auto upper1 = range.second;
    for(auto iter = lower1; iter != upper1; ++iter){
        cout << iter->second << endl;
    }

}