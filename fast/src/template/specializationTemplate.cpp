//
// Created by seongjin on 22. 1. 2..
//

#include <iostream>
#include <vector>

using namespace std;

class Test0{

};

template<typename T>
void swap0(T& x, T& y){
    cout << "swap0" << endl;
    T temp = x;
    x = y;
    y = temp;
}

template<>
void swap0<Test0>(Test0& x, Test0& y){
    cout << "swap0<Test>" << endl;
}

template<typename T, typename S>
class Test{
public:
    T num0;
    S num1;
};

template<>
class Test<int, float>{

};

template<typename T>
class Test<float, T>{
public:
    T nums;
};

template<typename T>
class Queue{
private:
    vector<T> _items;
public:
    void push(T item){
        _items.push_back(item);
    }
};

template<>
void Queue<int>::push(int item) {
    cout << "int" << endl;
}

int main(){
    Test0 t0, t1;
    swap0(t0, t1);

    Test<int, int> t2;
    Test<int, float> t3;
    Test<float, int>t4;

    Queue<float> q0;
    q0.push(1);
    Queue<int> q1;
    q1.push(1);
}