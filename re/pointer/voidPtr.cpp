//
// Created by seongjin on 22. 7. 2.
//

#include <iostream>

int main() {
    int num = 10;
    int *p = &num;
    std::cout << *p << std::endl;

    void *vp = p;
//    std::cout << *vp << std::endl;//error

    int *p0 = (int*)vp;
    std::cout << *p0 << std::endl;

    int nums[] = {1, 2, 3};
    void *vp2 = nums;
//    vp2[1];//error

    void *p2 = malloc(sizeof(int) * 3);
    int *p3 = (int*)p2;
    p3[0] = 111;
    p3[1] = 222;
    p3[2] = 333;
    std::cout << p3[0] << std::endl;
    std::cout << p3[1] << std::endl;
    std::cout << p3[2] << std::endl;
    free(p2);
    std::cout << p3[2] << std::endl;
}