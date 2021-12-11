//
// Created by seongjin on 21. 12. 7..
//

#include <cstdio>
#include <iostream>
#include <iomanip>

int main(){
    std::cout << 'a' << std::endl;
    std::cout << (char)97 << std::endl;
    operator<<(std::cout, 'a');

    std::cout.put('a');
    std::cout.put('\n');
    std::cout.write("HELLO WORLD", 5);
    std::cout.put('\n');

    std::cout.width(10);
    char prev = std::cout.fill('#');
    std::cout << 1;
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

    std::cout.setf(std::ios_base::left, std::ios_base::adjustfield);
    std::cout.width(10);
    std::cout << -10  << 20 << std::endl;

    std::cout.setf(std::ios_base::hex, std::ios_base::basefield);
    std::cout << 16 << 15 << std::endl;
    std::cout << std::hex << 16 << std::endl;
    std::hex(std::cout);
    std::cout << 16 << std::endl;
    std::cout.setf(std::ios_base::dec, std::ios_base::basefield);
    std::cout.put('\n');

    freopen("output.txt", "w", stdout);
    std::cout << std::setw(10) << std::setfill('#') << std::setprecision(2) << std::showpos << 0.111f;
}