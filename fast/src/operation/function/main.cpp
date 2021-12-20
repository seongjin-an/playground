//
// Created by seongjin on 21. 12. 21..
//

#include "Function.h"
using namespace std;
int main(){
    Max mx;
    cout << mx(1) << endl;
    cout << mx(3) << endl;
    cout << mx(6) << endl;
    cout << mx(2) << endl;

    Average avg;
    cout << avg(100) << endl;
    cout << avg(200) << endl;
    cout << avg(300) << endl;

    Print p;
    int nums[] = {1,2,3,4,5};
    for(int num: nums){
        p(num);
    }
    std::for_each(nums, nums + (sizeof(nums)/sizeof(int)),Print());
}