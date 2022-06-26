//
// Created by seongjin on 22. 6. 26.
//

#include <iostream>
#include <cstring>

class String {
private:
    char *_chars;
public:
    String(const char *chars) : _chars(new char[strlen(chars) + 1]) {
        strcpy(_chars, chars);
    }

    const char &operator[](int index) const {
        return _chars[index];
    }

    char &operator[](int index) {
        const String &s = *this;
        const char &c = s[index];
        return const_cast<char&>(c);
    }
    friend std::ostream &operator<<(std::ostream &os,const String &s);
};

std::ostream &operator<<(std::ostream &os, const String &s){
    std::cout << s._chars << std::endl;
    return os;
}

void func(const int &i){
    int &j = const_cast<int&>(i);
    j = 10;
}

int main(){
    int i = 0;
    func(i);
    std::cout << i << std::endl;

    String s0("abc");
    std::cout << s0[0] << std::endl;
    s0[0] = 'b';
    std::cout << s0 << std::endl;

    const String &s1 = s0;
    std::cout << s1[0] << std::endl;
    std::cout << s1 << std::endl;
}