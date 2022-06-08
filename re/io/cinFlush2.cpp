//
// Created by seongjin on 22. 6. 9..
//

#include <limits>
#include <iostream>

int main() {
    int num;
    std::cin >> num;
    std::cout << "num1: " << num << std::endl;

    if(std::cin.fail()) {
        std::cin.clear();
    }

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');

    std::cin >>num;
    std::cout << "num2: " << num << std::endl;
}
/*
 * 우선 cin을 통해 문자를 입력받을 경우 바로 변수에 값이 저장되는 것이 아닌 입력한 문자가 입력버퍼에 저장되고
 * 버퍼에 저장된 값을 읽어들여 변수에 저장한다. 그리고 숫자를 입력받을 경우에는 바로 변수에 저장하기 때문에 버퍼가 필요 없다.
 * 그런데 cin을 통해 숫자를 입력받아 정수형 변수에 입력하는 도중에 문자가 입력되면 이 문자는 입력버퍼에 저장되고 cin을 통해
 * 이 입력버퍼에 있는 값을 읽어들여 정수형 변수에 저장하려고 하기 때문에 정상적으로 저장이 되지 않고 계속 failbit를 설정하며
 * 버퍼에도 값이 계속 남아있게 되는 것이다.
 */