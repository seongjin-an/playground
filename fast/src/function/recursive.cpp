//
// Created by seongjin on 21. 12. 14..
//

#include <iostream>

using namespace std;

void count(int n){
    if(n < 0){
        return;
    }
    cout << "COUNT: " << n << endl;
    count(n - 1);
    cout << "STARTED: " << n << endl;
}
int fac(int n){
    if(n == 1){
        return 1;
    }
    int n0 = fac(n - 1);
    return n * n0;
}
int fib(int n){
    if(n <= 1)
        return 1;
    return fib(n - 1) + fib(n - 2);
}
int main(){
//    count(10);
    cout << fac(5) << endl;
}