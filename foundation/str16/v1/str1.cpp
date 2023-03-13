#include <iostream>
#include <string>

int main() {
    using namespace std;
    string one("Lottery Winner!"); // ctor1
    cout << one << '\n';

    string two(20, '$'); // ctor2
    cout << two << '\n';

    string three(one); // ctor3
    cout << three << '\n';

    one += " Oops!"; // 오버로딩 +=
    cout << one << '\n';
    two += "Sorry! That was ";
    three[0] = 'P';

    string four; // ctor4
    four = two + three; //오버로딩 +, =
    cout << four << '\n';

    char alls[] = "All's well that ends well";
    string five(alls, 20); // ctor5
    cout << five << '\n';

    string six(alls + 6, alls + 10); // ctor6
    cout << six << ", ";

    string seven(&five[6], &five[10]); // ctor6 again
    cout << seven << ", ";

    string eight(four, 7, 16); // ctor7, 7번째부터 16개
    cout << eight << "in motion!" << '\n';

    return 0;
}