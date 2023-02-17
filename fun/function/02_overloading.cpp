#include <iostream>

using namespace std;

unsigned long left(unsigned long num, unsigned ct);
char * left(const char * str, int n = 1);

int main() {
    char * trip = "Hwaii!!";
    unsigned long n = 12345678;

    int i;
    char * temp;
    for (i = 1; i < 10; i++) {
        cout << left(n, i) << '\n';
        temp = left(trip, i);
        cout << temp << '\n';
        delete [] temp;
    }
    return 0;
}

// unsigned
// Several of these types can be modified using the keywords signed, unsigned, short, and long.
// When one of these type modifiers is used by itself, a data type of int is assumed
unsigned long left(unsigned long num, unsigned ct) {
    unsigned digits = 1;
    unsigned long n = num;

    if (ct == 0 || num == 0)
        return 0;
    while (n /= 10)
        digits++;
    if (digits > ct) {
        ct = digits - ct;
        while(ct--)
            num /= 10;
        return num;
    } else
        return num;
}

char * left(const char * str, int n) {
    if (n < 0)
        n = 0;
    char * p = new char[n + 1];
    int i;
    for (i = 0; i < n && str[i]; i++)
        p[i] = str[i];
    while (i <= n)
        p[i++] = '\0';
    return p;
}