
#include "studenti.h"

using std::ostream;
using std::istream;
using std::string;

double Student::Average() const {
    if (ArrayDb::size())
        return ArrayDb::sum() / ArrayDb::size();
    else
        return 0;
}

const string &Student::Name() const {
    return (const string &) *this;
}

double &Student::operator[](int i) {
    return ArrayDb::operator[](i); // ArrayDb::operator[]() 사용
}

double Student::operator[](int i) const {
    return ArrayDb::operator[](i);
}

// private 메서드
ostream &Student::arr_out(std::ostream &os) const {
    int i;
    int lim = ArrayDb::size();
    if (lim > 0) {
        for (i = 0; i < lim; i++) {
            os << ArrayDb::operator[](i) << ' ';
            if (i % 5 == 4)
                os << '\n';
        }
        if (i % 5 != 0)
            os << '\n';
    } else
        os << " 빈 배열 ";
    return os;
}

// 프렌드

// operator>>() 의 string 버전을 사용한다.
istream &operator>>(istream &is, Student &stu) {
    is >> (string &)stu;
    return is;
}

// string friend getline(ostream &, const string &) 을 사용한다.
istream &getline(istream &is, Student &stu) {
    getline(is, (string &)stu);
    return is;
}

// operator<<() 의 string 버전을 사용한다.
ostream &operator<<(ostream &os, const Student &stu) {
    os << "Scores for " << (const string &) stu << "학생의 성적표:\n";
    stu.arr_out(os); // scores 를 위해 private 메서드 사용
    return os;
}



