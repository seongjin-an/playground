#include <iostream>

using namespace std;

int factorial(int value) {
    if (value == 1) {
        return 1;
    }
    return value * factorial(value - 1);
}

template<int N>
struct Factorial{
    static const int value = N * Factorial<N - 1>::value;
};

template<>
struct Factorial<1> {
    static const int value = 1;
};


int fib(int value) {
    if (value <= 1) {
        return value;
    }
    return fib(value - 1) + fib(value - 2);
}

template<int N>
struct Fib {
    static const int value = Fib<N - 1>::value + Fib<N - 2>::value;
};

template<>
struct Fib<0> {
    static const int value = 0;
};

template<>
struct Fib<1> {
    static const int value = 1;
};

int main() {
    cout << factorial(5) << endl;
    cout << Factorial<5>::value << endl;
    cout << fib(6) << endl;
    cout << Fib<6>::value << endl;
    return 0;
}