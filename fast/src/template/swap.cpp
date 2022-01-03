//
// Created by seongjin on 22. 1. 2..
//

template<typename T>
void swap(T& x, T& y){
    T temp = x;
    x = y;
    y = temp;
}

//template
//void swap<int>(int&, int&);