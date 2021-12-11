//
// Created by seongjin on 21. 12. 8..
//

#include <iostream>
#include <limits>

using namespace std;

int main(){
    char ch;
    cin >> ch;
    cout << ch << endl;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cin >>ch;
    cout << ch << endl;
}