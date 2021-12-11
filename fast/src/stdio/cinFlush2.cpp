//
// Created by seongjin on 21. 12. 8..
//

#include <limits>
#include <iostream>

using namespace std;

int main(){
    int num;
    cin >> num;
    cout << num << endl;

    if(cin.fail()){
        cin.clear();
    }
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cin >> num;
    cout << num << endl;
}