//
// Created by seongjin on 22. 1. 9..
//

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include "ranges.h"

using std::cout;
using std::endl;

bool has(std::vector<int>& v, int value){
    for(int num: v){
        if(num == value){
            return true;
        }
    }
    return false;
}
bool has2(std::vector<int>::iterator begin, std::vector<int>::iterator end, int value){
    for(std::vector<int>::iterator iter = begin; iter != end; iter++){
        if(*iter == value){
            return true;
        }
    }
    return false;
}

template<typename TIterator, typename Type>
bool has3(TIterator begin, TIterator end, Type value){
    for(TIterator iter = begin; iter != end; iter++){
        if(*iter == value){
            return true;
        }
    }
    return false;
}


int main(){
    std::vector<int> v{1,2,3};
    for(std::vector<int>::iterator iter = v.begin(); iter != v.end(); iter++){
        *iter *= 2;
    }
    for(std::vector<int>::const_iterator iter = v.cbegin(); iter != v.cend(); iter++){
        std::cout << *iter << std::endl;
    }

    std::cout << std::boolalpha << has(v, 1) << std::endl;
    std::cout << std::boolalpha << has2(v.begin(), v.end(), 1) << endl;

    std::list<std::string> l{"1","2","3"};
    std::cout << std::boolalpha << has3(l.begin(), l.end(), "3") << endl;

    cout << endl << endl;

    for(int num: Ranges(3)){
        std::cout << num << std::endl;
    }
}