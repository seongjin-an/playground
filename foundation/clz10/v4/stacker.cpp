#include <iostream>
#include <cctype>
#include "stack.h"

int main() {
    using namespace std;
    Stack st;
    char ch;
    unsigned long po;
    cout << "주문서를 추가하려면 A, 주문서를 처리하려면 P,\n"
         << "종료하려면 Q 를 입력하세요.\n";
    while (cin >> ch && toupper(ch) != 'Q') {
        while(cin.get() != '\n')
            continue;
        if(!isalpha(ch)) {
            cout << '\a';
            continue;
        }
        switch (ch) {
            case 'A':
            case 'a': {
                cout << "추가할 주문서의 번호를 입력하십시오: ";
                cin >> po;
                if (st.isfull())
                    cout << "스택이 가득 차 있습니다.\n";
                else
                    st.push(po);
                break;
            }
            case 'P':
            case 'p':
                if (st.isempty())
                    cout << "스택이 비어 있습니다.\n";
                else {
                    st.pop(po);
                    cout << "#" << po << " 주문서를 처리했습니다.\n";
                }
                break;
        }
        cout << "주문서를 추가하려면 A, 주문서를 처리하려면 P, \n"
             << "종료하려면 Q 를 입력하세요.\n";
    }
    cout << "프로그램을 종료합니다.\n";
    return 0;
}