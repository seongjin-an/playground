#include <iostream>
#include "brass.h"

using std::cout;
using std::string;

typedef std::ios_base::fmtflags format;
typedef std::streamsize precis;

format setFormat();
void restore(format f, precis p);

Brass::Brass(const std::string &s, long an, double bal) {
    fullName = s;
    acctNum = an;
    balance = bal;
}

void Brass::Deposit(double amt) {
    if (amt < 0)
        cout << "마이너스 입금은 허용되지 않습니다.\n그래서 입금이 취소되었습니다.\n";
    else
        balance += amt;
}

void Brass::Withdraw(double amt) {
    format initialState = setFormat();
    precis prec = cout.precision(2);

    if (amt < 0)
        cout << "마이너스 인출은 허요되지 않습니다.\n그래서 인출이 취소되었습니다.\n";
    else if (amt <= balance)
        balance -= amt;
    else
        cout << "인출을 요구한 금액 $" << amt << "가 현재 잔액을 초과합니다.\n그래서 인출이 취소되었습니다.";
    restore(initialState, prec);
}

double Brass::Balance() const {
    return balance;
}

void Brass::ViewAcct() const {
    format initialState = setFormat();
    precis prec = cout.precision(2);
    cout << "고객 이름: " << fullName << '\n';
    cout << "계좌 번호: " << acctNum << '\n';
    cout << "현재 잔액: " << balance << '\n';
    restore(initialState, prec);
}

BrassPlus::BrassPlus(const std::string &s, long an, double bal, double ml, double r): Brass(s,an, bal) {
    maxLoan = ml;
    owesBank = 0.0;
    rate = r;
}

BrassPlus::BrassPlus(const Brass &ba, double ml, double r) : Brass(ba) {
    maxLoan = ml;
    owesBank = 0.0;
    rate = r;
}

void BrassPlus::ViewAcct() const {
    format initialState = setFormat();
    precis prec = cout.precision(2);
    Brass::ViewAcct();
    cout << "당좌 대월 한도액: $" << maxLoan << '\n';
    cout << "상환할 원리금: $" << owesBank << '\n';
    cout.precision(3);
    cout << "당좌 대월 이자율: " << 100 * rate << "%\n";
    restore(initialState, prec);
}

void BrassPlus::Withdraw(double amt) {
    format initialState = setFormat();
    precis prec = cout.precision(2);

    double bal = Balance();
    if (amt <= bal)
        Brass::Withdraw(amt);
    else if (amt <= bal + maxLoan - owesBank) {
        double advance = amt - bal;
        owesBank += advance * (1.0 + rate);
        cout << "당좌 대월 금액: $" << advance << '\n';
        cout << "당좌 대월 이자: $" << advance << 100 * rate << '\n';
        Deposit(advance);
        Brass::Withdraw(amt);
    }
    else
        cout << "당좌 대월 한도가 초과되어 거래가 취소되었습니다.\n";
    restore(initialState, prec);
}

format setFormat() {
    return cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
}

void restore(format f, precis p) {
    cout.setf(f, std::ios_base::floatfield);
    cout.precision(p);
}