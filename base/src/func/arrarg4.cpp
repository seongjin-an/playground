//
// Created by seongjin on 21. 11. 21..
//

#include <iostream>
const int size = 8;
int sum_arr(const int *begin, const int *end);
int main(){
    int cookies[size] = {1,2,4,8,16,32,64,128};
    std::cout << "*(cookies + 1): " << *(cookies + 1) << std::endl;
    std::cout << "*(cookies + 8): " << *(cookies + 8) << std::endl;
    int sum = sum_arr(cookies, cookies + size);
    std::cout << "number of sweets eaten: " << sum << std::endl;
    sum = sum_arr(cookies, cookies + 3);
    std::cout << "the first 3 people ate " << sum << " sweets\n";
    sum = sum_arr(cookies+4, cookies + 8);
    std::cout << "the last 4 people ate " << sum << " sweets\n";
    return 0;
}

int sum_arr(const int *begin, const int *end){
    const int *pt;
    int total = 0;
    for(pt = begin; pt != end; pt++){
        total = total + *pt;
        std::cout << "total: " << total << std::endl;
    }
    return total;
}