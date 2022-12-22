//
// Created by seongjin on 22. 12. 23.
//

#include <iostream>
#include <vector>

using namespace std;

class Test0 {
private:
    string name;
public:
    Test0(string _name): name(_name){}
    friend ostream& operator<<(ostream& os, const Test0& ref) {
        os << "name: " << ref.name;
        os << &ref;
        return os;
    }
};

class Test1 {
private:
    string name;
public:
    Test1(string _name): name(_name){}
    friend ostream& operator<<(ostream& os, const Test1& ref) {
        os << "name: " << ref.name;
        os << &ref;
        return os;
    }
};


template<typename T>
void swap0(T &x, T &y) {
    cout << "swap0" << '\n';
    T temp = x;
    x = y;
    y = temp;
}

template<>
void swap0<Test0>(Test0 &x, Test0 &y) {
    cout << "swap0<Test>" << '\n';
}


template<typename T, typename S>
class Test {
public:
    T num0;
    S num1;
};

template<>
class Test<int, float> {

};

template<typename T>
class Test<float, T> {
public:
    T nums;
};


template<typename T>
class Queue {
private:
    vector<T> _items;
public:
    void push(T item) {
        _items.push_back(item);
    }
};

template<>
void Queue<int>::push(int item) {
    cout << "int" << '\n';
}


int main() {
    Test0 t0{"t0"}, t1{"t1"};
    cout << t0 << '\n';
    cout << t1 << '\n';
    swap0(t0, t1);
    cout << t0 << '\n';
    cout << t1 << '\n';
    cout << "/////////////////////////////////" << '\n';
    Test1 t2{"t2"}, t3{"t3"};
    cout << t2 << '\n';
    cout << t3 << '\n';
    swap0(t2, t3);
    cout << t2 << '\n';
    cout << t3 << '\n';
    cout << "/////////////////////////////////" << '\n';

}