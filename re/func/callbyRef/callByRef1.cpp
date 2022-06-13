//
// Created by seongjin on 22. 6. 13..
//

#include <iostream>

void swap(int *px, int *py) {
    std::cout << "&px: " << &px << std::endl;
    std::cout << "&py: " << &py << std::endl;
    int temp = *px;
    *px = *py;
    *py = temp;
}

void scan(int *i) {
    *i = 10;
}

int main() {
    int x = 10, y = 20;

    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;
    std::cout << "&x: " << &x << std::endl;
    std::cout << "&y: " << &y << std::endl;

    swap(&x, &y);

    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;
    std::cout << "&x: " << &x << std::endl;
    std::cout << "&y: " << &y << std::endl;

    int num = 0;
    std::cout << "&num: " << &num << std::endl;
    scan(&num);
    std::cout << "num: " << num << std::endl;
    std::cout << "&num: " << &num << std::endl;
}