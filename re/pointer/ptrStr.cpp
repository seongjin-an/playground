//
// Created by seongjin on 22. 7. 4.
//
#include <iostream>
#include <cstring>

struct Person{
    int height;
    int weight;
};

class Clz{

};

int main() {
    char str0[100] = "abcd";
    char *str1 = str0;

    std::cout << str0 << std::endl;
    std::cout << str1 << std::endl;

    const char *str2 = "hello";

    std::cout << strlen(str2) << std::endl;
    std::strcpy(str0, str2);
    str2 = "hi";

    std::cout << "(str0 + 0): " << (str0 + 0) << std::endl;
    std::cout << "*(str0 + 0): " << *(str0 + 0) << std::endl;
    std::cout << "========================================" << std::endl;
    std::cout << "(str2): " << (str2) << std::endl;
    std::cout << "(&str2): " << (&str2) << std::endl;
    std::cout << "(str2 + 0): " << (str2 + 0) << std::endl;
    std::cout << "(str2 + 1): " << (str2 + 1) << std::endl;
    std::cout << "*(str2 + 0): " << *(str2 + 0) << std::endl;
    std::cout << "*(str2 + 1): " << *(str2 + 1) << std::endl;




    std::cout << strcmp(str0, str2) << std::endl;
    std::cout << "========================================" << std::endl;
    char *ptr1 = "hello";
    char *ptr2 = "hello";
    char *ptr3 = "hello";
    printf("%s, %s\n", ptr1, ptr2);
    printf("%p, %p\n", ptr1, ptr2);
    printf("%p\n", ptr3);
    printf("%s\n", ptr3);
    printf("%s\n", str0);

    std::cout << str0 << std::endl;
    std::cout << ptr3[0] << std::endl;
    std::cout << ptr3[1] << std::endl;
    char imsi[100] = {'a', 'b', 'c'};
    std::cout << imsi << std::endl;
}
