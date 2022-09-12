//
// Created by seongjin on 22. 9. 13.
//

#include <iostream>
char a[10][10];
int main() {
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 4; j++){
            scanf(" %c", &a[i][j]);
            std::cout << a[i][j] << std::endl;
        }
    }
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 4; j++){
            std::cout << a[i][j];
        }
        std::cout << '\n';
    }

    return 0;
}
//띄어쓰기를 붙인 이유는 엔터나 띄어쓰기 역시 문자로 취급이 된다. scanf 는 정확히 형식이 일치해야 하므로!!