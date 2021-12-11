//
// Created by seongjin on 21. 12. 7..
//

#include <cstdio>

int main(){
    char ch;
    scanf("%c", &ch);
    printf("1, %c\n", ch);

    while(getchar()!='\n');

    scanf("%c", &ch);
    printf("2, %c\n", ch);
}