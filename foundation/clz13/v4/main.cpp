// 추상적 기초 클래스를 사용하는 다양한 단계의 사례
#include <iostream>
#include <string>
#include "acctabc.h"

const int CLIENTS = 4;

int main() {
    using std::cin;
    using std::cout;

    AcctABC * p_clients[CLIENTS];
    std::string temp;
    long tempnum;
    double tempbal;
    char kind;

    for (int i = 0; i < CLIENTS; i++) {
        cout << "고객의 이름을 입력하세요: ";
        getline(cin, temp);
        cout << "고객의 은행계좌 번호를 입력하세요: ";
        cin >> tempnum;
        cout << "계좌 개설을 입력하세요: $";
        cin >> tempbal;
        cout << "Brass 계좌에 1번을 입력하세요 또는 BrassPlus 계좌에 2번을 입력하세요";

        while (cin >> kind && (kind != '1' && kind != '2'))
            cout << "1 또는 2 를 입력하세요: ";
        if (kind == '1')
            p_clients[i] = new Brass(temp, tempnum, tempbal);
        else {
            double tmax, trate;
            cout << "당좌 대월 한계를 입력하세요: $";
            cin >> tmax;
            cout << "이자율을 입력하세요(소수점): ";
            cin >> trate;
            p_clients[i] = new BrassPlus(temp, tempnum, tempbal, tmax, trate);
        }
        while (cin.get() != '\n')
            continue;
    }
    cout << '\n';
    for (int i = 0; i < CLIENTS; i++) {
        p_clients[i]->ViewAcct();
        cout << '\n';
    }
    for (int i = 0; i < CLIENTS; i++) {
        delete p_clients[i];
    }
    cout << "프로그램 종료\n";
    return 0;
}