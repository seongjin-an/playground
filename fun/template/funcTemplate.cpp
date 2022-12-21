#include <iostream>

using namespace std;

template<typename T>
void swap2(T & x, T & y) {
    T temp = x;
    x = y;
    y = temp;
}

template<int N>
int num() {
    return N;
}

void func(int * number) {

}

template<int N, typename T>
int func2(T (&nums)[N]) {
    cout << &nums << endl;
    return N;
}

int main() {
    int x = 10, y = 20;
    swap2(x, y);
    cout << x << endl;
    cout << y << endl;

    cout << num<5>() << endl;

    int nums[] = {1, 2, 3, 4};
    func(nums);

    cout << &nums << endl;
    cout << func2(nums) << endl;
}