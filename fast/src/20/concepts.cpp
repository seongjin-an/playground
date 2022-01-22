//
// Created by seongjin on 22. 1. 22..
//

#include <iostream>
#include <type_traits>

template<typename T>
concept NonPointer = !std::is_pointer<T>::value;

template<typename T, typename std::enable_if<!std::is_pointer<T>::value, int>::type=0>
void swap(T& x, T& y){
//    static_assert(!std::is_pointer<T>::value, "T must not be a pointer");
}
template<NonPointer T>
void swap2(T& x, T& y){

}

template<typename T>
void swap3(T& x, T& y) requires NonPointer<T>{

}



template<typename T>
struct is_scoped_enum{
    static const bool value = std::is_enum_v<T> && !std::is_convertible_v<T, int>;
};

template<typename T>
concept ScopedEnum = is_scoped_enum<T>::value;

//template<typename T, typename std::enable_if<is_scoped_enum<T>::value, int>::type=0>
template<ScopedEnum T>
std::ostream& operator<<(std::ostream& os, const T& t) {
    return (std::cout << static_cast<std::underlying_type_t<T>>(t));
}

enum class Type{
    A, B
};



template<typename T>
concept HasNum = requires{
    T::num;
};

template<typename T>
concept HasType = requires{
    typename T::type;
};

template<typename T>
concept HasNumAndType = HasNum<T> && HasType<T>;

template<typename T>
concept HasNumOrType = HasNum<T> || HasType<T>;

template<typename T, typename S>
concept Addable = requires(T t, S s){
    t + s;
}
&& std::is_integral_v<T>
&& std::is_integral_v<T>;

template<HasNum T>
void foo(T t){

}
template<HasType T>
void goo(T t){

}
template<HasNumAndType T>
void hoo(T t){

}
template<typename T, typename S>
void ioo(T t, S s) requires Addable<T, S>{

}

struct Test{
    using type = int;
    int num;
};

int main(){
    int x = 10, y = 20;
    swap(x, y);

    int* px = &x;
    int* py = &y;
//    swap(px, py);

    std::cout << "Type::A: " <<  Type::A << std::endl;

    foo(Test());
    goo(Test());
    hoo(Test());
    ioo(1,2);
}