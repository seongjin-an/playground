//
// Created by seongjin on 21. 11. 21..
//

#include <iostream>
#include <cstring>
char *getName(void);
int main(){
    char *name;
    name = getName();
    std::cout << (int *) name << ": " << name << std::endl;
    delete [] name;

    name = getName();
    std::cout << (int *) name << ": " << name << std::endl;
    delete [] name;
    return 0;
}

char *getName(){
    char temp[80];
    std::cout << "enter name: ";
    std::cin >> temp;
    char *pn = new char[strlen(temp) + 1];
    strcpy(pn, temp);
    return pn;
}
