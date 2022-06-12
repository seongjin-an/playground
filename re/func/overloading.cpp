//
// Created by seongjin on 22. 6. 12..
//

#include <iostream>
#include <string>

int countDigit(int num) {
    if(num == 0) return 1;
    int count = 0;
    while(num){
        num /= 10;
        ++count;
    }
    return count;
}

int countDigit(std::string num){
    return countDigit(std::stoi(num));
}

void func(int, int);//func#int-int//name decoration or name mangling
void func(char);
int main(){
    std::cout << countDigit(12345) << std::endl;
    std::cout << countDigit("12345") << std::endl;
//    func(10, 10);
//    func('a');
}