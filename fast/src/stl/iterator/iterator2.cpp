//
// Created by seongjin on 22. 1. 9..
//

#include <iostream>
#include <vector>
#include <forward_list>
#include <list>
#include <unordered_set>
#include <iterator>
#include <fstream>
#include <set>

using std::cout;
using std::endl;

void ostreamIter(std::ostream& os){
    std::ostream_iterator<int> iter(os, " ");
    *iter = 1;
    *iter = 2;
    *iter = 3;
}

void setInsert(){
    std::set<int> s;
    std::insert_iterator<std::set<int>> iter(s, s.begin());
//    std::insert_iterator iter(s, s.begin());
//    auto iter = std::inserter(s, s.begin());
    *iter = 10;
    *iter = 20;
    *iter = 30;
    *iter = 40;

    for(auto num: s){
        std::cout << num << std::endl;
    }
}

void istreamIter(std::istream& is){
    std::istream_iterator<int> iter(is);
    auto value = *iter;
    std::cout << value << std::endl;
    ++iter;
    value = *iter;
    std::cout << value << std::endl;
    ++iter;
    value = *iter;
    std::cout << value << std::endl;
}

int main(){
    std::forward_list<int> f1;
    auto iter0 = f1.begin();
//    iter0++;
//    ++iter0;
//    iter0--;//error
//    --iter0;//error
    std::list<int> us;
    auto iter1 = us.begin();
    iter1++;
    iter1--;
    --iter1;

    std::vector<int> v;
    auto iter2 = v.begin();
    ++iter2;
    --iter2;
    iter2+1;
    iter2+2;
    iter2-2;

    std::vector<int> v1{1,2,3};
    auto iter3 = v1.begin();
    std::cout << *(iter3+2) << std::endl;
    std::cout << *(std::addressof(*iter3) + 2) << std::endl;

    ostreamIter(std::cout);
    std::ofstream ofs("output.txt");
    cout << endl;
    ostreamIter(ofs);
    cout << endl;
    setInsert();
    istreamIter(std::cin);
    cout << endl;
//    std::ifstream ifs("output.txt");
//    istreamIter(ifs);

}
// output iterator
// *iter = value
// cout

// input iterator
// *iter
// cin

//forward iterator
// forward_list, unordered xxx
// ++

// bidirectional iterator
// list, set, map, multiset, multimap
// ++ --

// random access iterator
// array, vector, deque
// ++, --, + , -

// contiguous access iterator (C++20)
// array, vector
// ++, --, +, -, physical memory contiguous