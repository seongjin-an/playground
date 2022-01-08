//
// Created by seongjin on 22. 1. 9..
// list

#include <iostream>
#include <list>
#include <forward_list>
#include <vector>
#include <algorithm>

using std::cout;
using std::endl;
bool condition(const int& value){
    return value % 2 == 0;
}
int main(){
    std::list<int> list0{1,2,3};
    std::list<int>::iterator iter = list0.begin();
    std::advance(iter, 2);
    cout << *iter << endl;

    std::list<int> list1{4,1,2,3};
    list1.sort();
    list1.remove(0);
    list1.remove_if(condition);
    for(int num: list1){
        cout << num << endl;
    }

    std::vector<int> v;
    v.begin() + 3;//possible
//    list1.begin() + 3;// impossible
    list1.begin()++;//possible
//    std::sort(list1.begin(), list1.end());//impossible, it's for random access data

    std::list<int> list2{1,1,2,3};
    std::list<int> list3{1,5,6,7};
    list2.merge(list3);
    for(int num: list2){
        cout << num << endl;
    }
    list2.unique();
    for(int num: list2){
        cout << num << endl;
    }

    std::forward_list<int> list4{1,1,2,3};
    list4.insert_after(list4.begin(), 10);
    cout << "/////////////////////" << endl;
    for(int num: list4){
        cout << num << endl;
    }
}
// Head <-> Node0 <-> Node1 <-> Node2 <-> Tail
// Head -> Node0 -> Node1 -> Node2 -> Tail