#ifndef WORKER0_H_
#define WORKER0_H_

#include <string>
/// 다중 상속에서의 문제점이 있는 버전
/// 우선 두 개의 Worker 기초 클래스 성분을 갖게 된다.! -> Singer, Waiter 클래스에 Worker 를 상속할 때 Virtual 키워드를 사용한다.
/// 파생클래스에서 생성자 규칙이 바꿔야 함 -> 기초 클래스가 가상일 경우에 C++ 는 중간 클래스를 통해 기초 클래스에 자동으로 정보 전달하는 기능을 정지시킴
/// SingerWaiter(const Worker& wk, int p = 0, int v = Singer::other) : Singer(wk, v), Waiter(wk, p) {} (X)
/// SingerWaiter(const Worker & wk, int p = 0, int v = Singer::other) : Worker(wk), Waiter(wk, p), Singer(wk, v) {} (O)
/// 어느 메서드를 사용해야 하는지 모호해진다.
/// 1) 사용범위 결정 연산자를 사용한다 -> ob.Singer::Show(); OR ob.Waiter::Show();
/// 2) 점층적으로 접근한다. Worker 는 worker 에 대한 것만 담당하고, Singer, Waiter, SingerWaiter 도 각각의 것에 대해서만 담당한다.
class Worker {
private:
    std::string fullname;
    long id;
public:
    Worker() : fullname("no name"), id(0L) {}

    Worker(const std::string &s, long n) : fullname(s), id(n) {}

    virtual ~Worker() = 0;

    virtual void Set();

    virtual void Show() const;
};

class Waiter : public Worker {
private:
    int panache;
public:
    Waiter() : Worker(), panache(0) {}

    Waiter(const std::string &s, long n, int p = 0) : Worker(s, n), panache(p) {}

    Waiter(const Worker &wk, int p = 0) : Worker(wk), panache(p) {}

    void Set();

    void Show() const;
};

class Singer : public Worker {
protected:
    enum {
        other, alto, contralto, soprano, bass, baritone, tenor
    };
    enum {
        Vtypes = 7
    };
private:
    static char *pv[Vtypes];
    int voice;
public:
    Singer() : Worker(), voice(other) {}

    Singer(const std::string &s, long n, int v = other) : Worker(s, n), voice(v) {}

    Singer(const Worker &wk, int v = other) : Worker(wk),voice(v) {}

    void Set();

    void Show() const;
};

#endif