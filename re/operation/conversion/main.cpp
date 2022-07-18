//
// Created by seongjin on 22. 7. 18.
//

#include "conversion.h"

int main() {
    String s0("abc");
    String s1("abc", "def");
    String s2{"a", "b", "c"};

    bool result = bool(s0);
    std::cout << result << std::endl;
    if(s0){
        std::cout <<"!!" << std::endl;
    }
}