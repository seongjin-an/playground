//
// Created by seongjin on 22. 1. 15..
//

#include <iostream>
#include <type_traits>

//constexpr int fib(int num){
//    return num <= 1 ? num: fib(num-2) + fib(num-1);
//}
constexpr long long fib(long long num){
    if(num <= 1){
        return num;
    }
    long long prev = 0;
    long long curr = 1;

    for(int i = 2; i <= num; ++i){
        long long next = prev + curr;
        prev = curr;
        curr = next;
    }
    return curr;
}
template<long long N>
void print(){
    std::cout << N << std::endl;
}
//struct Item{
//    int power;
//    constexpr Item(int power): power(power){
//
//    }
//    constexpr Item operator+(const Item& other) const{
//        return Item(power + other.power);
//    }
//};
// literal type
struct Item{
    int power;//literal type
    constexpr Item operator+(const Item& other) const{
        return Item{power + other.power};
    }
};
template<typename T>
auto getValue(T t){
    if constexpr (std::is_pointer<T>()){
        return *t;
    }else{
        return t;
    }
}
template<typename T>
void getValue2(T t){
    if constexpr (std::is_pointer<T>()){
        std::cout << *t << std::endl;
    }else{
        std::cout << t << std::endl;
    }
}
int main(){
    int num = 10;
    constexpr long long value = fib(50);
    std::cout << value << std::endl;
//    int nums[value];
    print<value>();

    constexpr Item item0{10};
    constexpr Item item1{20};
    constexpr Item newItem = item0 + item1;

    int nums[newItem.power];

    int num0 = 10;
    int* pNum = &num0;

    std::cout << getValue(num0) << std::endl;
    std::cout << getValue(pNum) << std::endl;

    getValue2(num0);
    getValue2(pNum);
}
//constexpr constructor