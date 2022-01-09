//
// Created by seongjin on 22. 1. 9..
//

#include <iostream>
#include <vector>
#include <array>
#include <list>
#include <set>
#include <numeric>
#include <execution>

int main(){
    std::vector<int> v{1,2,3,4,3,2,1};
    auto iter = std::remove(v.begin(), v.end(), 2);
    v.erase(iter, v.end());
    for(auto num: v){
        std::cout << num << std::endl;
    }

    std::array<int, 7> arr{1,2,3,4,3,2,1};
    auto iter2 = std::remove(arr.begin(), arr.end(), 2);

//    for(auto num: arr){
//        std::cout << num << std::endl;
//    }

    std::list<int> l{1,2,3,4,3,2,1};
//    l.remove(2);
    l.remove_if([](const int& value){
        return value % 2 == 0;
    });
    std::cout << std::endl;
    for(auto num: l){
        std::cout << num << std::endl;
    }

    std::set<int> s{1,2,3,4,3,2,1};
//    auto iter3 = std::remove(s.begin(), s.end(), 2);
//    s.erase(iter3, v.end());
    for(auto iter = s.begin(); iter != s.end();){
        if(*iter == 2){
            iter = s.erase(iter);
        }else{
            ++iter;
        }
    }
    std::cout << std::endl;
    for(auto num: s){
        std::cout << num << std::endl;
    }

    int nums[] = {1,2,3,4};
    int nums1[std::size(nums)];
    std::copy(std::begin(nums), std::end(nums), nums1);
//    std::remove(nums, nums+4, 2);
    std::remove(std::begin(nums), std::end(nums), 2);
    std::cout << std::endl;
    for(int num: nums){
        std::cout << num << std::endl;
    }
    std::cout << std::endl;
    for(int num: nums1){
        std::cout << num << std::endl;
    }

    std::vector<int> v0 = {1,2,3,4};
    std::vector<int> v1(v0.size());
//    std::copy(v0.begin(), v0.end(), v1.begin());
    std::copy(std::begin(v0), std::end(v0), std::begin(v1));
    std::cout << "*****copy vector*****" << std::endl;
    for(int num: v1){
        std::cout << num << std::endl;
    }

    std::vector<int> nums2;
//    std::copy(std::begin(v0), std::end(v0), std::back_inserter(nums2));
    std::copy(std::begin(v0), std::end(v0), std::inserter(nums2, nums2.begin()));
    std::cout << "*****inserter*****" << std::endl;
    for(int num: nums2){
        std::cout << num << std::endl;
    }

    std::vector<int> v2(10);
    std::iota(v2.begin(), v2.end(), 0);//numeric
    std::sort(std::execution::par,v2.begin(), v2.end(), std::greater<int>());
    std::cout << "*****iota*****" << std::endl;
    for(int num: v2){
        std::cout << num << std::endl;
    }
}