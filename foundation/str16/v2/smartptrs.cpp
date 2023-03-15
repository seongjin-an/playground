#include <iostream>
#include <string>
#include <memory>

class Report {
private:
    std::string str;
public:
    Report(const std::string s) : str(s) {
        std::cout << "객체가 생성되었습니다.\n";
    }
    ~Report() { std::cout << "객체가 삭제되었습니다.\n"; }
    void comment() const { std::cout << str << '\n'; }
};

int main() {
    {
        std::auto_ptr<Report> ps(new Report("auto_ptr"));
        ps->comment();
    }
    {
        std::shared_ptr<Report> ps(new Report("shared_ptr"));
        ps->comment();
    }
    {
        std::unique_ptr<Report> ps(new Report("unique_ptr"));
        ps->comment();
    }
    return 0;
}
/*
 * auto_ptr 을 사용하지 않는 이유는 복샤, 대입을 할 경우 기존의 포인터가 nullptr 을 가리킨다...
 * 한 객체를 먼저 해제했는데, 다음 객체 해제 시 문제가 발생하기 때문이다.(유일 소유권)
 * 그래도 사용을 해야겠다면 복사, 대입 연산자를 정의해야 한다.
 * 그리고 두번째 단점은 new 로 생성된 객체에 대해서만 자동 해제를 보장한다.
 *
 * unique_ptr 은 new 로 생성하는 방법 외의 것도 자동 해제를 보장함.
 * auto_ptr 처럼 유일 소유권 개념이 적용되어 있는 점이 있다.
 *
 * shared_ptr 은 하나의 객체를  참조하는 스마트 포인터들이 몇 개인지 추적하는 훨씬 더 똑똑한 스마트 포인터이다.
 * 참조 카운팅이라 하여, 대입할 때마다 참조 카운팅이 1씩 증가하고, 해제할 경우 1씩 감소되어 0이되면 delete 를 한다.
 */