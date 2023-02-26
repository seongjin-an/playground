#include <iostream>
#include <cstdlib>
#include <ctime>
#include "queue.h"

const int MIN_PER_HR = 60;

bool newcustomer(double x);

int main() {
    using std::cin;
    using std::cout;
    using std::ios_base;
    std::srand(std::time(0));
    cout << "사례 연구: 히서 은행의 ATM\n";
    cout << "큐의 최대 길이를 입력하십시오: ";
    int qs;
    cin >> qs;
    Queue line(qs); // line 큐에는 최대 qs 명까지 대기

    cout << "시뮬레이션 시간 수를 입력하십시오: ";
    int hours; // 시뮬레이션 시간 수
    cin >> hours;
    long cyclelimit = MIN_PER_HR * hours; // 시뮬레이션 주기 수

    cout << "시간당 평균 고객 수를 입력하십시오: ";
    double perhour; // 시간 당 평균 고객 수
    cin >> perhour;
    double min_per_cust; // 평균 고객 도착 간격(분 단위)
    min_per_cust = MIN_PER_HR / perhour;

    Item temp; // 새 고객 데이터
    long turnaways = 0; // 큐가 가득 차서 발길을 돌린 고객 수
    long customers = 0; // 큐에 줄을 선 고객 수
    long served = 0; //시뮬레이션에서 거래를 처리한 고객 수
    long sum_line = 0; //큐의 누적 길이
    int wait_time = 0; // ATM 이 빌 때까지대기하는 시간
    long line_wait = 0; // 고객들이 줄을 서서 대기하는 누적 시간

    for (int cycle = 0; cycle < cyclelimit; cycle++) {
        if (newcustomer(min_per_cust)) { // 새로운 고객 도착
            if (line.isfull()) {
                turnaways++;
            } else {
                customers++;
                temp.set(cycle); // cycle 이 도착 시간이 된다.
                line.enqueue(temp); // 큐에 새 고객을 추가한다.
            }
            if (wait_time <= 0 && !line.isempty()) {
                line.dequeue(temp); // 다음 고객을 받는다.
                wait_time = temp.ptime(); // wait_time 을 설정한다.
                line_wait += cycle - temp.when();
                served++;
            }
            if (wait_time > 0)
                wait_time--;
            sum_line += line.queuecount();
        }
    }
    if (customers > 0) {
        cout << "큐에 줄을 선 고객 수: " << customers << '\n';
        cout << "거래를 처리한 고객 수: " << served << '\n';
        cout << "발길을 돌린 고객 수: " << turnaways << '\n';
        cout << "평균 큐의 길이: ";
        cout.precision(2);
        cout.setf(ios_base::fixed, ios_base::floatfield);
        cout.setf(ios_base::showpoint);
        cout << (double) sum_line / cyclelimit << '\n';
        cout << "평균 대기 시간: " << (double) line_wait / served << "분\n";
    }
    else
        cout << "고객이 한 명도 없습니다.\n";
    cout << "완료!\n";
    return 0;
}

bool newcustomer(double x) {
    return (std::rand() * x / RAND_MAX < 1);
}