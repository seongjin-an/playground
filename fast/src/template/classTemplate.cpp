//
// Created by seongjin on 22. 1. 1..
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

template<typename T>
class Queue{
private:
    size_t _size;
    size_t _capacity;
    T* _items;
public:
    Queue(): _size(0), _capacity(4), _items(new T[_capacity]){

    }
    ~Queue(){
        delete[] _items;
    }

    void push(T item){
        if(_size < _capacity){
            _items[_size++] = item;
        }else{
            size_t newCapacity = _capacity * 2;

            T* oldItems = _items;
            T* newItems = new T[newCapacity];

            std::copy(oldItems, oldItems + _capacity, newItems);

            _capacity = newCapacity;
            _items = newItems;

            delete[] oldItems;

            push(item);
        }
    }

    void pop(){
        --_size;
    }

    T& top(){
        return _items[_size - 1];
    }
};

template<typename T, int N>
class Queue2{
private:
    size_t _size;
    T _items[N];
public:
    Queue2();

    void push(T item);

    void pop();

    T& top();
};
template<typename T, int N>
Queue2<T, N>::Queue2(): _size(0), _items{} {

}
template<typename T, int N>
void Queue2<T, N>::push(T item) {
    if(_size < N) {
        _items[_size++] = item;
    }else{
        throw std::out_of_range("overflow");
    }
}
template<typename T, int N>
void Queue2<T, N>::pop() {
    if(_size == 0){
        throw std::out_of_range("underflow");
    }
    --_size;
}
template<typename T, int N>
T& Queue2<T, N>::top() {
    if(_size == 0){
        throw std::out_of_range("underflow");
    }
    return _items[_size - 1];
};

template<typename T>
class Queue3{
private:
    std::vector<T> _items;
public:
    Queue3();
    void push(T items);
    void pop();
    T& top();
};

template<typename T>
Queue3<T>::Queue3(): _items{}{

}
template<typename T>
void Queue3<T>::push(T item){
    _items.push_back(item);
}
template<typename T>
void Queue3<T>::pop(){
    if(_items.size() == 0){
        throw std::out_of_range("underflow");
    }
    _items.pop_back();
}
template<typename T>
T& Queue3<T>::top(){
    if(_items.size() == 0){
        throw std::out_of_range("underflow");
    }
    return _items.back();
}

int main(){
    Queue<int> q0;
    q0.push(1);
    q0.push(2);
    q0.push(4);
    cout << q0.top() << endl;//////////////////////
    q0.pop();
    cout << q0.top() << endl;//////////////////////

    Queue<std::string> q1;
    q1.push("abcd");
    q1.push("123");
    cout << q1.top() << endl;//////////////////////
    q1.pop();
    cout << q1.top() << endl;//////////////////////

    cout << "////////////////////////////////" << endl;
    Queue2<int, 3> q2;
    q2.push(1);
    q2.push(2);
    q2.push(4);
    cout << q2.top() << endl;//////////////////////
    q2.pop();
    cout << q2.top() << endl;//////////////////////

    Queue2<std::string, 1> q3;
    q3.push("abcd");
    try {
        q3.push("123");
    }catch(std::out_of_range& e){
        cout << e.what() << endl;
    }
    cout << q3.top() << endl;//////////////////////
    q3.pop();
    try {
        cout << q3.top() << endl;//////////////////////
    }catch(std::out_of_range& e){
        cout << e.what() << endl;
    }

    cout << "////////////////////////////////" << endl;
    Queue3<int> q4;
    q4.push(1);
    q4.push(2);
    q4.push(4);
    cout << q4.top() << endl;//////////////////////
    q4.pop();
    cout << q4.top() << endl;//////////////////////

    Queue3<std::string> q5;
    q5.push("abcd");
    q5.push("123");

    cout << q5.top() << endl;//////////////////////
    q5.pop();
    cout << q5.top() << endl;//////////////////////
}