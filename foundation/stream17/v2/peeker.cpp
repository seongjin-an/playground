#include <iostream>

int main() {
    using std::cout;
    using std::cin;

    //cin : 띄어쓰기 즉 공백을 기준으로 입력을 받는다. 또한 '\n'를 만나면 이를 저장하지 않고 버퍼에 남기고 그 전까지 있던 입력을 받는다.
//    int ct = 0;
//    char ch;
//    cin >> ch;
//    while (ch != '\n') {
//        cout << ch;
//        ct++;
////        cin >> ch;
//        cin.get(ch);
//    }
//    cout << ct << '\n';

    // # 문자까지 입력을 읽고 에코한다.
    char ch;
    while (cin.get(ch)) {  // EOF 에서 종료한다.
        if (ch != '#')
            cout << ch;
        else {
            cin.putback(ch); // #문자를 입력 스트림에 되삽입한다.
            break;
        }
    }
    if (!cin.eof()) {
        cin.get(ch);
        cout << '\n' << ch << "은 다음 입력 문자입니다.\n";
    } else {
        cout << "파일 끝에 도달했습니다.\n";
        std::exit(0);
    }

    while (cin.peek() != '#') { // 미리 엿보기, 입력스트림에서 추출하는 일 없이 입력에 있는 다음 문자를 리턴함.
        cin.get(ch);
        cout << ch;
    }
    if (!cin.eof()) {
        cin.get(ch);
        cout << '\n' << ch << "은 다음 입력 문자입니다.\n";
    } else {
        cout << "파일 끝에 도달했습니다.\n";
    }
    return 0;
}