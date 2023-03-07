// 템플릿 특수화
#include <iostream>
using std::cout;

template <typename T>
class beta {
private:
    template<typename V>
    class hold {
    private:
        V val;
    public:
        hold(V v = 0) : val(v) {}
        void show() const { cout << val << '\n'; }
        V Value() const { return val; }
    };
    hold<T> q;
    hold<int> n;
public:
    beta(T t, int i) : q(t), n(i) {}
    template<typename U>
    U blab(U u, T t) { return (n.Value() + q.Value()) * u / t; }
    void Show() const { q.show(); n.show(); }
};

int main() {
    beta<double> guy(3.5, 3); // 명시적 구체화
    cout << "T 가 double 로 설정되었습니다.\n";
    guy.Show();
    cout << "V 가 double 인 T 로 설정되었고, 그 다음에 V 가 int 로 설정되었습니다.\n";
    cout << guy.blab(10, 2.3) << '\n'; // 암시적 구체화
    cout << "U 가 int 로 설정되었습니다.\n";
    cout << guy.blab(10.0, 2.3) << '\n'; // 암시적 구체화
    cout << "U 가 double 로 설정되었습니다.\n";
    cout << "프로그램을 종료합니다.\n";
    return 0;
}