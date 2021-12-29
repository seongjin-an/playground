//
// Created by seongjin on 21. 12. 30..
//

#include <iostream>
#include <cstring>

using namespace std;

class String{
private:
    char* _chars;
public:
    String(const char* chars): _chars(new char[strlen(chars) + 1]){
        strcpy(_chars, chars);
    }

    const char& operator[](int index) const{
        return _chars[index];
    }
//    char& operator[](int index){
//        return _chars[index];
//    }
    char& operator[](int index){
        const String& s = *this;
        const char& c = s[index];
        return const_cast<char&>(c);
    }
    friend ostream& operator<<(ostream& os, const String& s);
};

ostream& operator<<(ostream& os, const String& s){
    cout << s._chars << endl;
    return os;
}

void func(const int& i){
    int& j = const_cast<int&>(i);
    j = 10;
}

int main(){
    //volatile??
    int i = 0;
    func(i);
    cout << i<< endl;

    String s0("abc");
    cout << s0[0] << endl;
    s0[0] = 'b';
    cout << s0 << endl;

    const String& s1 = s0;
    cout << s1[0] << endl;
    cout << s1 << endl;
}