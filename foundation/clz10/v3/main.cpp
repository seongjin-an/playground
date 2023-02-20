#include <iostream>
#include "stock20.h"
// 생성자와 파괴자
int main() {
    using std::cout;
    cout << "생성자를 사용하여 새로운 객체들을 생성한다.\n";
    Stock stock1("NanoSmart", 12, 20.0); // 구문1
    stock1.show();
    Stock stock2 = Stock("Boffo Objects",2, 2.0); // 구문2
    stock2.show();

    cout << "stock1을 stock2에 대입한다.\n";
    stock2 = stock1;
    cout << "stock1 과 stock2 를 출력한다.\n";
    stock1.show();
    stock2.show();

    cout << "생성자를 사용하여 객체를 재설정한다.\n";
    stock1 = Stock("Niffy Foods", 10, 50.0);
    cout << "갱신된 stock1:\n";
    stock1.show();
    cout << "프로그램을 종료합니다.\n";
    return 0;
}
/*
 구문1 은 임시객체 생성 없이 생성!
 구문2 는 임시 객체를 생성하고 그 임시 객체를 stock2 에 복사한다.!
 stock2 = stock1, 대입은 기본적으로 한 객체의 멤버들을 다른 객체에 복사한다.
 */