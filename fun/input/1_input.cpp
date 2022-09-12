//
// Created by seongjin on 22. 9. 13.
//

#include <iostream>

int main() {
    int m1, m2;
    std::cin >> m1 >> m2; // 100 띄어쓰기 200 엔터 또는 100 엔터 200 엔터
    std::cout << "m1: " << m1 << " / m2: " << m2 << std::endl;

    int a1, a2;
    scanf("%d.%d", &a1, &a2); // 3.14 이렇게 입력해야 함.
    std::cout << "a1: " << a1 << " / a2: " << a2 << std::endl;
    return 0;
}
/**
* 보통은 cin, scanf 를 활용하는데, 형식이 주어지지 않은 경우 cin 을 사용하자. cin 은 개행문자(띄어쓰기, 엔터)를 구분하여 입력받는다.
* 그렇기 때문에 cin 으로 두 변수에 입력받을 떄는 주어진 변수에 맞는 타입을 입력하고 띄어쓰기를 하거나 엔터로 구분지어 입력된다.
*/