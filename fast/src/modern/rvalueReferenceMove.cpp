//
// Created by seongjin on 22. 1. 16..
//

#include <iostream>
#include <cstring>
#include <vector>

const char* wrap(const char* str){
    return str ? str : "";
}
class String{
private:
    char* _str;
public:
    explicit String(const char* str): _str(new char[strlen(str)+1]){
        strcpy(_str, str);
        std::cout << "Constructor: " << _str << std::endl;
    }

    String(const String& other): _str(new char[strlen(other._str)+1]){
        strcpy(_str, other._str);
        std::cout << "Copy Constructor: " << _str << std::endl;
    }
    String(String&& other) noexcept: _str(std::move(other._str)){
        std::cout << "Move Construct: " << _str << std::endl;
        other._str = nullptr;
    }
    ~String(){
        std::cout << "Destruct: " << wrap(_str) << std::endl;
        delete[] _str;
    }

    String& operator=(const String& other){
        std::cout << "Copy operator: " << _str << " = " << other._str << std::endl;
        delete[] _str;
        _str = new char[strlen(other._str) + 1];
        strcpy(_str, other._str);
        return *this;
    }
    String& operator=(String&& other) noexcept{
        std::cout << "Move operator: " << wrap(_str) << " = " << other._str << std::endl;
        delete[] _str;
//        _str = new char[strlen(other._str) + 1];
//        strcpy(_str, other._str);
        _str = std::move(other._str);
        other._str = nullptr;
        return *this;
    }
    friend std::ostream& operator<<(std::ostream& os, String& str){
        return (os << str._str);
    }
};
//template<typename T>
//void swap(T& x, T& y){
//    T temp = x;
//    x = y;
//    y = temp;
//}
template<typename T>
void swap(T& x, T& y){
    T temp = std::move(x);
    x = std::move(y);
    y = std::move(temp);
}
void foo(int&){
    std::cout << "int&" << std::endl;
}
void foo(int&&){
    std::cout << "int&&" << std::endl;
}
int main(){
    String s0("abc");
    //working
    s0 = String("def");
    std::cout << "///////////////////////" << std::endl;
    String s1("abc");
    String s2("def");
    swap(s1, s2);
    std::cout << s1 << std::endl;
    std::cout << s2 << std::endl;
    std::cout << "////////////////////////" << std::endl;
    String s3("abc");
    s3 = String("def");
    std::cout << "////////////////////////" << std::endl;
    String s4("abc");
    String s5("def");
    s4 = s5;
    std::cout << "////////////////////////" << std::endl;
    String s6("abc");
    String s7("def");
    swap(s6, s7);

    std::cout << "/////////////////////////" << std::endl;
    std::vector<String> s{String("abc")};
    std::cout << "resize" << std::endl;
    s.reserve(100);// std::move_if_noexcept()..., or copy!!

    std::cout << "////////////////////////////" << std::endl;
    int num0 = 10;
    int& num1 = num0;
    int&& num2 = num0 + num1;

//    int& num3 = 3;//error
//    int&& num4 = num0;//error
//    int&& num5 = num1;//error

    int& num6 = num2;//r-value reference is l-value
//    int&& num7 = num2;//error
    int&& num8 = std::move(num0);
    std::cout << "////////////////////////////" << std::endl;
    foo(1);
    int num = 10;
    foo(num + 10);
    foo(num);
    foo(std::move(num));
    std::cout << "////////////////////////////" << std::endl;
    foo(static_cast<int&&>(num));
    int&& num00 = static_cast<int&&>(num);
    foo(num00);
    std::move(num);
    std::cout << "////////////////////////////" << std::endl;
}