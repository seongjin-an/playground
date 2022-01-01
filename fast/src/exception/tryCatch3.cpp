//
// Created by seongjin on 22. 1. 1..
//

#include <iostream>
#include <stdexcept>

using namespace std;

class CustomException: public std::exception{
public:
    virtual const char * what() const noexcept override{
        return "Custom";
    }
};

double divide(double d, double v){
    if(v == 0){
//        throw "Divided by zero";
        throw CustomException();
    }
    return d / v;
}
void func1(){
    try {
        divide(10, 0);
    }catch(const char* e){
        cout << "func1 handled the exception" << endl;
    }
}
void func0(){
    func1();
};
int main(){
//    terminate();
//    cout << divide(10, 0) << endl;

    try{
        func0();
        cout << "main" << endl;
    }catch(const char* e){
        cout << e << endl;
    }catch(std::exception& e){
        cout << e.what() << endl;
    }

//    std::logic_error e;
//    std::runtime_error q;
//    std::out_of_range o;

}