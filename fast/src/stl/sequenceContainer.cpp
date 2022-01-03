//
// Created by seongjin on 22. 1. 3..
// sequence container (array, vector,deque)

#include <iostream>
#include <array>
#include <vector>
#include <deque>

using std::cout;
using std::endl;

int main(){
    std::vector<int> vec{1,2,3};
    for(std::vector<int>::iterator iter = vec.begin(); iter != vec.end(); ++iter){
        cout << *iter << endl;
    }
    cout << "size: " << vec.size() << endl;
    cout << "capacity: " << vec.capacity() << endl;
    std::vector<int>::iterator iter = vec.begin();
    int* num = &vec[0];
//    int num = vec[0];

    vec[0] = 10;
    cout << *iter << endl;
    cout << num << endl;

    vec.reserve(vec.capacity() +1);
    cout << num << endl;
    cout << &vec[0] << endl;
    vec[0] = 100;
    cout << *iter << endl;
    cout << num << endl;

    std::vector<int> vec2{1,2,3};
    vec2.push_back(10);
    vec2.insert(vec2.begin(), 10);
    for(int num: vec2){
        cout << num << endl;
    }
    cout << "/////////////////////////" << endl;
    std::vector<int> v;
    v.reserve(100);

    v.push_back(1);
    cout << v[0] << endl;
    cout << &v[0] << endl;

    v.insert(v.begin(), 10);
    cout << v[1] << endl;
    cout << &v[1] << endl;
    cout << "/////////////////////////" << endl;
    std::deque<int> nums;
    nums.push_back(0);

    cout << nums[0] << endl;
    cout << &nums[0] << endl;

    nums.push_front(10);
    cout << nums[1] << endl;
    cout << &nums[1] << endl;
}

// vector size, capacity
// a0[1,2,3,?]

// vector size = 3
// capacity = 4

// push_back(4);
// a0[1,2,3,4]
// vector size = 4
// capacity = 4

// push_back(5);
// a1[1,2,3,4,5,?,?,?]
// vector size = 5
// capacity = 8