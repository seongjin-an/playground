#include <iostream>
#include "includes/namesp.h"

void other(void);
void another(void);
int main(void) {
    using debts::Debt;
    using debts::showDebt;
    Debt golf = {{"Benny", "Goatsniff"}, 120.0};
    showDebt(golf);
    other();
    another();
    return 0;
}

void other(void) {
    using std::cout;
    using namespace debts;
    Person dg = {"Doodles", "Glister"};
    showPerson(dg);
    cout << '\n';
    Debt zippy[3];
    int i;
    for (i = 0; i < 3; i++)
        getDebt(zippy[i]);
    for (i = 0; i < 3; i++)
        showDebt(zippy[i]);
    cout << "부채 총액: $" << sumDebts(zippy, 3) << '\n';
    return;
}

void another(void) {
    using pers::Person;
    Person collector = {"Milo", "Rightshift"};
    pers::showPerson(collector);
    std::cout << '\n';
}