#ifndef STUDENTC_H_
#define STUDENTC_H_

#include <iostream>
#include <string>
#include <valarray>
/// v1 과 비교했을 때, v1 은 컨테인먼트(객체를 이름이 있는 멤버 객체로 클래스에 추가)를 사용했지만,
/// 반면에 private 상속은 객체를 이름이 없는 상속된 객체로 클래스에 추가한다.
/// 상속되는 기초 클래스가 필요한 데이터 멤버들을 모두 제공하기에 새 클래스는 private 데이터를 가질 필요가 없다.
/// 컨테인먼트 접근 방식은 객체 이름을 사용하여 메서드를 호출하지만, private 상속은 클래스 이름과 사용 범위 결정 연산자를 사용한다.
class Student : private std::string, private std::valarray<double> {
private:
    typedef std::valarray<double> ArrayDb;

    std::ostream &arr_out(std::ostream &os) const;

public:
    Student() : std::string("Null Student"), ArrayDb() {}

    explicit Student(const std::string &s) : std::string(s), ArrayDb() {}

    explicit Student(int n) : std::string("Nully"), ArrayDb(n) {}

    Student(const std::string &s, int n) : std::string(s), ArrayDb(n) {}

    Student(const std::string &s, const ArrayDb &a) : std::string(s), ArrayDb(a) {}

    Student(const char *str, const double *pd, int n) : std::string(str), ArrayDb(pd, n) {}

    ~Student() {}

    double Average() const;

    const std::string &Name() const;

    double &operator[](int i);

    double operator[](int i) const;

    friend std::istream &operator>>(std::istream &is, Student &stu);

    friend std::istream &getline(std::istream &is, Student &stu);

    friend std::ostream &operator<<(std::ostream &os, const Student &stu);
};

#endif