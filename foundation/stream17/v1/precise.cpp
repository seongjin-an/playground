#include <iostream>
// precise 는 뒤에 붙는 0 은 모두 버린다.
int main() {
    using std::cout;
    float price1 = 20.40;
    float price2 = 1.9 + 8.0 / 9.0;

    cout << "\"손오공 인형\" $" << price1 << "!\n";
    cout << "\"사오정 인형\" $" << price2 << "!\n";

    cout.precision(2);
    cout << "\"손오공 인형\" $" << price1 << "!\n";
    cout << "\"사오정 인형\" $" << price2 << "!\n";

    return 0;
}