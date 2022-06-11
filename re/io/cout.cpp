//
// Created by seongjin on 22. 6. 12..
//

#include <cstdio>
#include <iostream>
#include <iomanip>

int main(){
    std::cout << 'a'<< std::endl;
    std::cout << (char) 97 << std::endl;
    operator<<(std::cout, 'a');
    std::cout <<std::endl;

    std::cout.put('a');
    std::cout.put('\n');
    std::cout.write("HELLO WORLD", 5);
    std::cout.put('\n');

    std::cout.width(10);
    char prev = std::cout.fill('#'); // 이전의 것을 반환함
    std::cout << 1 << std::endl;
    std::cout.fill(prev);
    std::cout.put('\n');

    float num = 0.1234567;
    std::cout << num << std::endl;
    std::cout.precision(2);
    std::cout << num << std::endl;
    std::cout.put('\n');

    std::cout.setf(std::ios_base::showpos);
    std::cout << 1 << std::endl;
    std::cout.unsetf(std::ios_base::showpos);
    std::cout << 1 << std::endl;
    std::cout.put('\n');

    std::cout << true << std::endl;
    std::cout << false << std::endl;

    std::cout.setf(std::ios_base::boolalpha);
    std::cout << true << std::endl;
    std::cout << false << std::endl;

    std::cout.setf(std::ios_base::left, std::ios_base::adjustfield);//왼쪽 정렬
    std::cout.width(10);//바로 다음에 출력될 항목에만 영향을 미침. 그 항목을 지나면 필드 폭은 다시 default값으로 바뀜
    std::cout << -10 << 20 << 30 << std::endl;

    std::cout.setf(std::ios_base::hex, std::ios_base::basefield);
    std::cout << 16 << 15 << std::endl;
    std::cout << std::hex << 16 << std::endl;
    std::cout << 15 << std::endl;
    std::hex(std::cout);
    std::cout << 16 << std::endl;
    std::cout << 15 << std::endl;
    std::cout.setf(std::ios_base::dec, std::ios_base::basefield);
    std::cout << 15 << std::endl;

    freopen("output.txt", "w", stdout);
    std::cout << std::setw(10) << std::setfill('#') << std::setprecision(2) << std::showpos << 0.111f;
}