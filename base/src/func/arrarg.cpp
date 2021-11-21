//
// Created by seongjin on 21. 11. 21..
//

#include <iostream>
const int size = 8;
int sum_arr(int arr[], int n);
int main(){
    int cookies[size] = {1,2,4,8,16,32,64,128};
    int sum = sum_arr(cookies, size);
    std::cout << "number of sweets eaten: " << sum << std::endl;
    return 0;
}

int sum_arr(int arr[], int n){
    int total = 0;
    for(int i = 0; i < n; i++){
        total = total + arr[i];
    }
    return total;
}