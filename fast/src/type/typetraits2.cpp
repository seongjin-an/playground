//
// Created by seongjin on 22. 1. 2..
//

#include <iostream>
#include <type_traits>

using std::cout;
using std::endl;

enum Unscoped{
    A, B
};
enum class Scoped: long long{
    A, B = 100000000000
};
enum class Scoped1{
    A
};
template<typename T>
struct is_scoped_enum{
    static const bool value = std::is_enum<T>::value && !std::is_convertible<T, int>::value;
};
template<typename T, typename std::enable_if<is_scoped_enum<T>::value, int>::type = 0>
std::ostream& operator<<(std::ostream& os, const T& value){
    cout << "operator<<" << endl;
    static_assert(std::is_enum<T>::value, "T is not enum");
    using t = std::underlying_type<Scoped>::type;
    cout << static_cast<t>(value) ;
    return cout;
}
template<typename T, typename std::enable_if<std::is_integral<T>::value, int>::type=0>
void foo(){
    cout << "is_integer" << endl;
}
template<typename T, typename std::enable_if<std::is_floating_point<T>::value, int>::type = 0>
void foo(){
    cout << "is_floating_point" << endl;
}
int main(){
    cout << std::boolalpha;
    cout << A << endl;
    cout << Scoped::B << endl;
    cout << Scoped1::A << endl;
    cout << "/////////////////" << endl;
    cout << is_scoped_enum<Unscoped>::value << endl;
    cout << is_scoped_enum<Scoped>::value << endl;


    foo<int>();
    foo<float>();
}