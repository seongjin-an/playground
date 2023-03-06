#include <iostream>
#include <cstdlib> // rand(), srand()
#include <ctime> // time()
#include "stcktp1.h";

const int Num = 10;

int main() {
    std::srand(std::time(0));
    std::cout << "스택의 크기를 입력하세요: ";
    int stacksize;
    std::cin >> stacksize;

    Stack<const char *> st(stacksize);

    const char *in[Num] = {
            " 1: 11",
            " 2: 22",
            " 3: 33",
            " 4: 44",
            " 5: 55",
            " 6: 66",
            " 7: 77",
            " 8: 88",
            " 9: 99",
            " 10: 1010",
    };

    const char *out[Num];

    int processed = 0;
    int nextin = 0;
    while (processed < Num) {
        if (st.isempty())
            st.push(in[nextin++]);
        else if (st.isfull())
            st.pop(out[processed++]);
        else if (std::rand() % 2 && nextin < Num)
            st.push(in[nextin++]);
        else
            st.pop(out[processed++]);
    }
    for (int i = 0; i < Num; i++)
        std::cout << out[i] << '\n';
    std::cout << "프로그램을 종료합니다.\n";
    return 0;
}