#include <iostream>

int main() {
    using std::cout;
    using std::ios_base;
    float price1 = 20.40;
    float price2 = 1.9 + 8.0 / 9.0;
    cout.setf(ios_base::showpoint);
    cout << "\"손오공 인형\" $" << price1 << "!\n";
    cout << "\"사오정 인형\" $" << price2 << "!\n";

    cout.precision(2);
    cout << "\"손오공 인형\" $" << price1 << "!\n";
    cout << "\"사오정 인형\" $" << price2 << "!\n";

    return 0;
}