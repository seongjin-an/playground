// tmp2tmp 하나의 템플릿 클래스에 대한 템플릿 프렌드들
#include <iostream>

using std::cout;

// 템플릿 원형
template<typename T>
void counts();

template<typename T>
void report(T &);

// 템플릿 클래스
template<typename TT>
class HasFriendT {
private:
    TT item;
    static int ct;
public:
    HasFriendT(const TT &i) : item(i) { ct++; }

    ~HasFriendT() { ct--; }

    friend void counts<TT>();

    friend void report<>(HasFriendT<TT> &);
};

template <typename T>
int HasFriendT<T>::ct = 0;

template <typename T>
void counts() {
    cout << "템플릿 크기: " << sizeof(HasFriendT<T>) << "; ";
    cout << "템플릿 counts(): " << HasFriendT<T>::ct << '\n';
}

template <typename T>
void report(T &hf) {
    cout << hf.item << '\n';
}

int main() {
    counts<int>();
    HasFriendT<int> hfi1(10);
    HasFriendT<int> hfi2(20);
    HasFriendT<double> hfdb(10.5);
    report(hfi1); // report(HasFriendT<int> &)
    report(hfi2);// report(HasFriendT<int> &)
    report(hfdb); // report(HasFriendT<double> &)
    cout << "counts<int>() 출력:\n";
    counts<int>();
    cout << "counts<double>() 출력:\n";
    counts<double>();
    return 0;
}