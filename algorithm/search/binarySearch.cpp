//
// Created by seongjin on 22. 6. 18.
//

#include <iostream>

int main() {
    int nums[] = {12, 25, 31, 48, 54, 66, 70, 83, 95, 108};

    int target = 83;

    int left = 0;
    int right = sizeof nums / sizeof nums[0] - 1;
    int mid = (left + right) / 2;

    int temp = nums[mid];
    bool find = false;

    while (left <= right) {
        if (target == temp) {
            find = true;
            break;
        } else if (target < temp) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
        mid = (left + right) / 2;
        temp = nums[mid];
    }

    if (find) {
        mid++;
        std::cout << "result: " << mid;
        if(mid == 1){
            std::cout << "st ";
        } else if(mid == 2){
            std::cout << "nd ";
        } else if(mid == 3){
            std::cout << "rd ";
        }else {
            std::cout << "th ";
        }
        std::cout << "index" << std::endl;
    } else {
        std::cout << "no result" << std::endl;
    }
}