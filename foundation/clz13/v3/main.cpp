#include <iostream>
#include "brass.h"

int main() {
    using std::cout;

    Brass Piggy("Porcelot Pigg", 381299, 4000.00);
    BrassPlus Hoggy("Horatio Hogg", 382288, 3000.00);
    Piggy.ViewAcct();
    cout << '\n';
    Hoggy.ViewAcct();
    cout << '\n';
    cout << "Hoggy 씨의 계좌에 $1000 입금:\n";
    Hoggy.Deposit(1000.00);
    cout << "Hoggy 씨의 현재 잔액: $" << Hoggy.Balance() << '\n';
    cout << "Piggy 씨의 계좌에서 $4200 인출:\n";
    Piggy.Withdraw(4200.00);
    cout << "Hoggy 씨의 현재 잔액: $" << Hoggy.Balance() << '\n';
    cout << "Piggy 씨의 계좌에서 $4200 인출:\n";
    Piggy.Withdraw(4200.00);
    Hoggy.ViewAcct();
    return 0;
}