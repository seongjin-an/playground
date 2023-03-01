// 상속, 프렌드, 동적 메모리 대입

#include <iostream>
#include "dma.h"

int main() {
    using std::cout;

    baseDMA shirt("Portabelly", 8);
    lacksDMA balloon("red", "Blimpo", 4);
    hasDMA map("Mercator", "Buffalo Keys", 5);
    cout << "baseDMA 객체 출력:\n";
    cout << shirt << '\n';
    cout << "lacksDMA 객체 출력:\n";
    cout << balloon << '\n';
    cout << "hasDMA 객체 출력:\n";
    cout << map << '\n';
    lacksDMA balloon2(balloon);
    cout << "lacksDMA 복사 결과:\n";
    cout << balloon2 << '\n';
    hasDMA map2;
    map2 = map;
    cout << "hasDMA 대입결과:\n";
    cout << map2 << '\n';
    return 0;
}