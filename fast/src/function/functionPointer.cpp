//
// Created by seongjin on 21. 12. 15..
//

#include <iostream>

using namespace std;
int sum(int x, int y){
    return x + y;
}
int main(){
    int (*pf)(int, int) = sum;// or &sum;
    cout << (*pf)(1, 2) << endl;
    cout << pf(1,2) << endl;
    int (&pf2)(int, int) = sum;
    cout << pf2(1,2) << endl;
    cout << (*pf2)(1,2) << endl;
    cout << (*sum)(1,2) << endl;
}