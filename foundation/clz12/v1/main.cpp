#include "stringbad.h"

using std::cout;

void callme1(StringBad &);
void callme2(StringBad);

int main() {
    {
        cout << "내부 블록\n";
        StringBad headline1("Celery Stalks at Midnight");
        StringBad headline2("Lettuce Prey");
        StringBad sports("Spinach Leaves Bowl for Dollars");
        cout << "headline1: " << headline1 << '\n';
        cout << "headline2: " << headline2 << '\n';
        cout << "sports: " << sports << '\n';
        callme1(headline1);
        cout << "headline1: " << headline1 << '\n';
        callme2(headline2);
        cout << "headline2: " << headline2 << '\n';
        cout << "하나의 객체를 다른 객체로 초기화:\n";
        StringBad sailor = sports;
        cout << "sailor: " << sailor << '\n';
        cout << "하나의 객체를 다른 객체에 대입:\n";
        StringBad knot;
        knot = headline1;
        cout << "knot: " << knot << '\n';
        cout << "이 블록을 빠져나온다.\n";
    }
    cout << "main() 의 끝\n";
    return 0;
}

void callme1(StringBad & rsb) {
    cout << "참조로 전달된 StringBad:\n";
    cout << "   \"" << rsb << "\"\n";
}

void callme2(StringBad sb) {
    cout << "값으로 전달된 StringBad:\n";
    cout << "   \"" << sb << "\"\n";
}