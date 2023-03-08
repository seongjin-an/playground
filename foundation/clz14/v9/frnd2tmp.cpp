// 템플릿이 아닌 프렌드를 가지는 템플릿 클래스
#include <iostream>

using std::cout;

template<typename T>
class HasFriend {
private:
    T item;
    static int ct;
public:
    HasFriend(const T &i) : item(i) { ct++; }

    ~HasFriend() { ct--; }

    friend void counts(); // 모든 HasFriend 구체화들에 대한 프렌드이다.

    friend void report(HasFriend<T> &); // 매개변수가 HasFriend 타입일 경우 프렌드 선언이 불가능함. HasFriend<short> 와 같은 특수화만이 존재함
};

template<typename T>
int HasFriend<T>::ct = 0;

// 모든 HasFriend<T> 클래스에 대해 템플릿이 아닌 프렌드
void counts() {
    cout << "int 카운트: " << HasFriend<int>::ct << "; ";
    cout << "double 카운트: " << HasFriend<double>::ct << '\n';
}

// HasFriend<int> 클래스에 대해 템플릿이 아닌 프렌드
void report(HasFriend<int> &hf) { // int 만을 위한 명시적 특수화
    cout << "HasFriend<int>: " << hf.item << '\n';
}

// HasFriend<double> 클래스에 대해 템플릿이 아닌 프렌드
void report(HasFriend<double> & hf) { // double 만을 위한 명시적 특수화
    cout << "HasFriend<double>: " << hf.item << '\n';
}

int main() {
    cout << "객체가 선언되지 않았다.: ";
    counts();
    HasFriend<int> hfi1(10);
    cout << "hf1 선언 후: ";
    counts();
    HasFriend<int> hfi2(20);
    cout << "hf2 선언 후: ";
    counts();
    HasFriend<double> hfdb(10.5);
    cout << "hfdb 선언 후: ";
    counts();
    report(hfi1);
    report(hfi2);
    report(hfdb);
    return 0;
}