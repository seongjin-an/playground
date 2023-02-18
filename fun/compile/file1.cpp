#include <iostream>
#include "coordin.h"
using namespace std;
int main() {
    rect rplace;
    polar pplace;
    cout << "x 값과 y 값을 입력하십시오: ";
    while (cin >> rplace.x >> rplace.y) {
        pplace = rect_to_polar(rplace);
        show_polar(pplace);
        cout << "끝내려면 q 입력: ";
    }
    cout << "프로그램을 종료합니다.\n";
    return 0;
}
/* 반드시 분할컴파일을 하자.
 만약에 어떤 하나의 파일을 수정했다면, 그 파일 하나만을 다시 컴파일해서, 이미 컴파일되어 있는 다른 파일들과 링크하면 된다.
 이 기능은 규모가 큰 프로그램을 쉽게 관리할 수 있도록 해 준다. 대부분의 C++ 개발 환경은 이것을 도와주는 부가적인 기능을 제공한다.
 예를 들면, Unix, Linux 시스템은 make 라는 프로그램을 가지고 있다. make 는 개발하려는 프로그램이 어떤 파일들에 의존하는지
 그리고 그들이 언제 마지막으로 수정되었는지 따위를 추적한다.
 */