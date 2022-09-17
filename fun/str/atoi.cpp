//
// Created by seongjin on 22. 9. 18.
//

#include <iostream>
#include <string>

int main() {
    std::string s = "12";
    std::string s2 = "hello";
    std::cout << atoi(s.c_str()) << '\n';
    std::cout << atoi(s2.c_str()) << '\n';

    int a = -1;
    std::cout << a << '\n';
    std::cout << bool(a) << '\n';
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL); std::cout.tie(NULL);
    //iostream 과 cstdio 스트림과의 동기화를 활성화 하거나 비활성화 한다.
    std::cout << bool(a) << '\n';
    bool b = true;
    std::cout << b << std::endl;
    return 0;
}
/*
Sync_with_stdio
일반적으로 c의 stream과 c++의 stream은 동기화 되어 있기 때문에,
한 코드를 작성할 때 c style 코드와 c++ style 코드를 혼용하여도 같은 stream 버퍼에 쌓이기 때문에 의도한 대로 입출력을 할 수 있습니다.
또한 multi-threading을 사용할 때, 각각 출력 연산을 수행 하여도 충돌이 일어나지 않습니다.
일반적으로 std::cout, std::cin을 사용할 때 프로그램의 속도가 scanf, printf보다 느린 이유입니다.

만약 동기화를 해제한다면 각 스트림이 각각의 버퍼를 가지고 독립적으로 사용할 수 있습니다.
연산이 줄기 때문에 입출력 속도를 증가시킬 수 있습니다.
하지만 멀티 쓰레딩 시 충돌이 발생할 수 있고, 각각 연산하여 저마다의 버퍼를 사용하여 출력하기 때문에 입출력 순서가 보장되지 않습니다.
이러한 입출력 스트림의 동기화를 설정하는 코드가 ios::sync_with_stdio(true)인 것입니다.
매개변수를 false로 바꾸게 되면 동기화를 해제하게 됩니다.
 */