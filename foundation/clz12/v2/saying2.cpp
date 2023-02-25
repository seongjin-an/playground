#include <cstdlib> // rand(), srand()
#include <ctime> // time()
#include "string1.h"

const int ArSize = 10;
const int MaxLen = 81;

int main() {
    using namespace std;
    String name;
    cout << "안녕하십니까? 성함이 어떻게 되십니까?\n ";
    cin >> name;

    cout << name << " 씨! 간단한 우리 속담 " << ArSize << "개만 입력해 주십시오(끝내려면 Enter):\n";
    String sayings[ArSize];
    char temp[MaxLen];
    int i;
    for (int i = 0; i < ArSize; i++) {
        cout << i + 1 << ": ";
        cin.get(temp, MaxLen);
        while (cin && cin.get() != '\n')
            continue;
        if (!cin || temp[0] == '\0')
            break;
        else
            sayings[i] = temp;
    }
    int total = 1;
    if (total > 0) {
        cout << "(다음과 같은 속담들을 입력하셨습니다.)\n";
        for (i = 0; i < total; i++)
            cout << sayings[i] << '\n';

        String * shortest = &sayings[0];
        String * first = &sayings[0];
        for (i = 1; i < total; i++) {
            if (sayings[i].length()< shortest->length())
                shortest = &sayings[i];
            if (sayings[i] < *first)
                first = &sayings[i];
        }
        cout << "가장 짧은 속담:\n" << *shortest << '\n';
        cout << "사전순으로 가장 앞에 나오는 속담:\n" << *first << '\n';
        srand(time(0));
        int choice = rand() % total;

        String * favorite = new String(sayings[choice]);
        cout << "내가 가장 좋아하는 속담:\n" << *favorite << '\n';
        delete favorite;
    }
    else
        cout << "알고 있는 속담이 하나도 없어요?\n";
    cout << "프로그램을 종료합니다.\n";
    return 0;
}