//
// Created by seongjin on 22. 6. 9..
//

#include <iostream>
#include <limits>

int main() {
    std::cout << "std::numeric_limits<int>::max(): " << std::numeric_limits<int>::max() << std::endl;
    std::cout << "std::numeric_limits<int8_t>::max(): " << std::numeric_limits<int8_t>::max() << std::endl;
    std::cout << "std::numeric_limits<int16_t>::max(): " << std::numeric_limits<int16_t>::max() << std::endl;
    std::cout << "std::numeric_limits<int32_t>::max(): " << std::numeric_limits<int32_t>::max() << std::endl;
    std::cout << "std::numeric_limits<int64_t>::max(): " << std::numeric_limits<int64_t>::max() << std::endl;
    char ch;
    std::cin >> ch;
    std::cout << ch << std::endl;

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cin >> ch;
    std::cout << ch << std::endl;
}
/*
 * The numeric_limits class template provides a standardized way to query various properties of arithmetic types
 * (e.g. the largest possible value for type int is std::numeric_limits<int>::max()).
 *
 * cin은 '\n'를 처리하지 않고 입력버퍼에 남겨둔다.
 * cin은 표준 입력 버퍼에서 공백 혹은 개행 문자 이전까지의 값만을 받아들인다.
 *
 * getline은 istream 라이브러리에 속하는 cin.getline()과 string 라이브러리에 속하는 getline() 2가지로 나뉜다.
 * cin.getline(변수주소, 최대 입력 수, 제한자);//별도로 제한자를 지정하지 않으면 \n으로 인식함
 * string getline(입력 스트림, 저장할 string 객체, 구분자);
 * string getline()은 지정한 구분자를 만날 때까지 문자열을 입력받아 string에 저장한다. 구분자는 따로 지정해 주지 않아도 상관없다.
 * geline은 '\n'를 입력버퍼에서 가져와서 처리한다.
 *
 *
 * cin.ignore()
 * cin.ignore(param1, param2) 첫 번째는 읽어들일 문자의 개수, 두 번째는 읽어들이면 종료할 문자.
 *
 */