//
// Created by seongjin on 22. 6. 12..
//

#include <iostream>

void swap(int px, int py) {
    std::cout << "px address: " << &px << std::endl;
    std::cout << "py address: " << &py << std::endl;
    int temp = px;
    px = py;
    py = temp;
}

int main() {
    int x = 10, y = 20;

    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;

    std::cout << "x address: " << &x << std::endl;
    std::cout << "y address: " << &y << std::endl;

    swap(x, y);//복사가 일어남

}