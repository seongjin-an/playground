#include <iostream>
#include <cstring>

using namespace std;

const int ArSize = 80;

char * left(const char * str, int n = 1);

int main() {
    char sample[ArSize];
    cout << "문자열을 입력하십시오:\n";
    cin.get(sample, ArSize);

    char * ps = left(sample, 4);
    cout << ps << '\n';
    delete [] ps;
    ps = left(sample);
    cout << ps << '\n';
    delete [] ps;
    return 0;
}

////ver1
//char * left(const char * str, int n) {
//    if (n < 0) n = 0;
//    char * p  = new char[n + 1];
//    int i;
//    for (i = 0; i < n && str[i]; i++)
//        p[i] = str[i];
//    while (i <= n)
//        p[i++] = '\0';
//    return p;
//}

////ver2
//char * left(const char * str, int n) {
//    int len = strlen(str);
//    n = (n < len) ? n : len;
//    char * p  = new char[n + 1];
//    int i;
//    for (i = 0; i < n && str[i]; i++)
//        p[i] = str[i];
//    while (i <= n)
//        p[i++] = '\0';
//    return p;
//}

//ver3
char * left(const char * str, int n) {
    int m = 0;
    while (m < n && str[m] != '\0')
        m++;
    char * p = new char[m + 1];
    int i;
    for (i = 0; i < m && str[i]; i++)
        p[i] = str[i];
    while (i <= m)
        p[i++] = '\0';
    return p;
}