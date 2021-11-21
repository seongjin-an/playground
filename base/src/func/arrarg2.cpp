//
// Created by seongjin on 21. 11. 21..
//

#include<iostream>
const int size = 8;
int sum_arr(int arr[], int n);
int main(){
    int cookies[size] = {1,2,4,8,16,32,64,128};
    std::cout << cookies << " = address of cookies" << std::endl;
    std::cout << "sizeof cookies: " << sizeof cookies << std::endl;
    int sum = sum_arr(cookies, size);
    std::cout << "numbers of eaten: " << sum << std::endl;
    sum = sum_arr(cookies, 3);
    std::cout << "the first 3 people ate " << sum << " sweets" << std::endl;
    sum = sum_arr(cookies + 4, 4);
    std::cout << "the last 4 people ate " << sum << " sweets" << std::endl;
    return 0;
}

int sum_arr(int arr[], int n){
    int total = 0;
    std::cout << arr << " = arr" << std::endl;
    std::cout << "sizeof arr = " << sizeof arr << std::endl;
    for(int i =0; i<n; i++){
        total = total + arr[i];
    }
    return total;
}