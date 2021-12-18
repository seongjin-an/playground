//
// Created by seongjin on 21. 12. 19..
//

#include <iostream>

using namespace std;

int main(){
    for(int i = 0; i < 10; ++i){
        int autoVar = 0;
        autoVar++;
        cout << "auto: " << autoVar << endl;

        static int staticVar = 0;
        staticVar++;
        cout << "static: " << staticVar << endl;
    }
}