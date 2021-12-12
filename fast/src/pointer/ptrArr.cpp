//
// Created by seongjin on 21. 12. 12..
//

#include <iostream>

using namespace std;

int main(){
    int nums[] = {1,2,3};//three integer array pointer type
    int* pNums = nums;

    cout << sizeof(nums) << endl;
    cout << sizeof(pNums) << endl;

    cout << nums << endl;
    cout << &nums << endl;
    cout << &nums[0] << endl;// nums ==? &nums[0]

    cout << typeid(1).name() << endl;
    cout << typeid(nums).name() << endl;
    cout << typeid(&nums).name() << endl;
    cout << typeid(&nums[0]).name() << endl;

    cout << pNums[0] << endl;
    cout << pNums[1] << endl;
    cout << pNums[2] << endl;

    cout << pNums + 0 << endl;
    cout << pNums + 1 << endl;
    cout << pNums + 2 << endl;

    cout << *pNums << endl;
    cout << *(pNums + 1) << endl;
    cout << *(pNums + 2) << endl;

    cout << *(nums + 0) << endl;
    cout << *(nums + 1) << endl;
    cout << *(nums + 2) << endl;

    cout << *(&nums[0] + 0) << endl;
    cout << *(&nums[0] + 1) << endl;
    cout << *(&nums[0] + 2) << endl;

    cout << *pNums << endl;
    pNums++;
    cout << *pNums << endl;
    pNums++;
    cout << *pNums << endl;

}