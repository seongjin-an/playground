//
// Created by seongjin on 21. 12. 12..
//

#include <iostream>

using namespace std;

int main(){
    int num = 10;
    int* p = &num;
    cout << *p << endl;

    void* vp = p;
//    cout << *vp << endl;//error

    int* p0 = (int*)vp;
    cout << *p0 << endl;

    int nums[] = {1,2,3};
    void *vp2 = nums;
//    vp2[1];//error

    void* p2 = malloc(sizeof(int) * 3);
    int* p3 = (int*)p2;
    free(p2);
}