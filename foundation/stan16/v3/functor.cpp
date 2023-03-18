#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>

template <typename T>
class TooBig {
private:
    T cutoff;
public:
    TooBig(const T &t) : cutoff(t) {}
    bool operator()(const T &v) { return v > cutoff; }
};

void outint(int n) { std::cout << n << '\n'; }

int main() {
    using std::list;
    using std::cout;

    TooBig<int> f100(100);
    int vals[10] = {50, 100, 90, 180, 60, 210, 415, 88, 188, 201};
    list<int> yadayada(vals, vals + 10);
    list<int> etcetera(vals, vals + 10);

    cout << "원래의 리스트:\n";
    std::for_each(yadayada.begin(), yadayada.end(), outint);
    cout << '\n';
    std::for_each(etcetera.begin(), etcetera.end(), outint);
    cout << '\n';
    yadayada.remove_if(f100); // 이름이 있는 함수 객체 사용
    etcetera.remove_if(TooBig<int>(200)); // 함수 객체 생성
    cout << "정비된 리스트:\n";
    std::for_each(yadayada.begin(), yadayada.end(), outint);
    cout << '\n';
    std::for_each(etcetera.begin(), etcetera.end(), outint);
    cout << '\n';
    return 0;
}