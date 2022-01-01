//
// Created by seongjin on 22. 1. 1..
//

#include <iostream>
#include <cstdio>

using namespace std;
int errorCode=0;
double divide(double d, double v){
    if(v == 0){
        errorCode = -1;
        return 0;
    }
    errorCode = 0;
    return d / v;
}

int main(){
//    std::abort();
//    exit(123);
//    return 123;

    double result = divide(10, 0);

}