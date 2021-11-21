//
// Created by seongjin on 21. 11. 21..
//

#include <iostream>
#include <cstring>

int main(){
    char animal[20] = "bear";
    const char *bird = "wren";
    //In general, the compiler stores all the strings appearing in the program's source code in some area of memory,
    // and associates each string and address with each other.
    char *ps;

    std::cout << animal << " and " << bird << std::endl << std::endl;

    std::cout << "*(animal): " << *(animal) << std::endl;
    std::cout << "*(animal + 1): " << *(animal + 1) << std::endl;
    std::cout << "*(animal + 2): " << *(animal + 2) << std::endl;
    std::cout << "*(animal + 3): " << *(animal + 3) << std::endl;
    std::cout << "*(animal + 4): " << *(animal + 4) << std::endl;
    std::cout << "*(bird): " << *(bird) << std::endl;
    std::cout << "*(bird + 1): " << *(bird + 1) << std::endl;
    std::cout << "*(bird + 2): " << *(bird + 2) << std::endl;
    std::cout << "*(bird + 3): " << *(bird + 3) << std::endl;


    std::cout << "enter anything: " << std::endl;
    std::cin >> animal;

    ps = animal;
    std::cout << ps << "s" << std::endl;
    std::cout << "before strcpy(): \n" << (int *) animal << ": " << animal << std::endl;
    std::cout << (int *) ps << ": " << ps << std::endl;

    ps = new char[strlen(animal) + 1];
    strcpy(ps, animal);
    std::cout << "after strcpy():\n";
    std::cout << (int *) animal << ": " << animal << std::endl;
    std::cout << (int *) ps << ": " << ps << std::endl;
    delete []ps;
    return 0;
}