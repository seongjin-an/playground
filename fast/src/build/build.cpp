//
// Created by seongjin on 21. 12. 17..
//

#include <iostream>
#include <string>

using namespace std;

int sum(int, int);
int main(int argc, char* argv[]){
    int total = 0;
    for(int i = 1; i < argc; ++i){
        string arg = argv[i];
        int num = stoi(arg);
        total = sum(total, num);
    }
    cout << total << endl;
}