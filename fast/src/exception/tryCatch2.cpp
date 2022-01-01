//
// Created by seongjin on 22. 1. 1..
//

#include <iostream>
#include <string>

using namespace std;

class Test{
private:
    string msg;
public:
    Test(const string& msg): msg(msg){}
    ~Test(){
        cout << msg << endl;
    }
};

double divide(double d, double v){
    Test t("divide");
    if(v == 0){
        throw "Divided by zero";
    }
    return d / v;
}
void func1(){
    Test t("func1 test");
    divide(10, 0);
    cout << "func1" << endl;
}
void func0(){
    Test t("func0 test");
    func1();
    cout << "func0" << endl;
};
int main(){
//    terminate();
//    cout << divide(10, 0) << endl;

    try{
        func0();
        cout << "main" << endl;
    }catch(const char* e){
        cout << e << endl;
    }
}