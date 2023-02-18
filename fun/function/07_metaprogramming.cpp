#include <iostream>

template <int N>
struct Factorial {
    static const int result = N * Factorial<N - 1>::result;
};

template <>
struct Factorial <1> {
    static const int result = 1;
};

template <int N>
struct Fibo {
    static const int result = Fibo<N - 1>::result + Fibo<N - 2>::result;
};
template <>
struct Fibo<2> {
    static const int result = 1;
};
template <>
struct Fibo<1> {
    static const int result = 1;
};

int fact(int n) {
    if (n == 1) return 1;
    return n * fact(n - 1);
}

int fibo(int n) {
    if (n == 1 || n == 2) return 1;
    return fibo(n - 1) + fibo(n - 2);
}

int main() {
    std::cout << Factorial<6>::result << '\n';
    std::cout << fact(6) << '\n';
    std::cout << Fibo<7>::result << '\n';
    std::cout << fibo(7) << '\n';
}
/*
 템플릿을 사용하면 객체를 생성하지 않더라도, 타입에 어떠한 값을 부여할 수 있고, 또 그 타입들을 가지고 연산을 한 수 있다는 점이 있다.
 또한 타입은 반드시 컴파일 타임에 확정되어야 하므로, 컴파일 타임에 "모든 연산" 이 끝나게 된다. 이렇게 타입을 가지고 컴파일 타임에
 생성되는 코드로 프로그래밍하는 것을 메타 프로그래밍이라고 한다. TMP(template meta programming) 이라고도 한다.
 */