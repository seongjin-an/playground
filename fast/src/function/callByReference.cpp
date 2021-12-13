//
// Created by seongjin on 21. 12. 14..
//

#include <iostream>

using namespace std;
void swap(int* px, int* py){
    int temp = *px;
    *px = *py;
    *py = temp;
}
void scan(int* i){
    *i = 10;
}
int main(){
    int x = 10, y = 20;
    cout << x << endl;
    cout << y << endl;
    swap(&x, &y);
    cout << x << endl;
    cout << y << endl;

    int num = 0;
    scan(&num);
    cout << num << endl;
}