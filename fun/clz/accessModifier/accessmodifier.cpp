#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Queue: protected vector<int> {
    public:
        virtual void push(int value) {
            push_back(value);
        }
        virtual void pop() {
            pop_back();
        }
        virtual int top() {
            return back();
        }
        virtual ~Queue() {

        }
};

class PriorityQueue: public Queue{
    public:
        virtual void push(int value) override {
            Queue::push(value);
            push_heap(begin(), end());
        }
        virtual void pop() override {
            pop_heap(begin(), end());
            Queue::pop();
        }
        virtual int top() override {
            return front();
        }
};

int main() {
    Queue queue;
    queue.push(10);
    cout << queue.top() << '\n';

    queue.push(20);
    cout << queue.top() << '\n';

    queue.top();
    cout << queue.top() << '\n';

    PriorityQueue pq;
    pq.push(10);
    pq.push(100);
    pq.push(0);

    cout << pq.top() << '\n';
    pq.pop();
    cout << pq.top() << '\n';
    pq.pop();
    cout << pq.top() << '\n';
    pq.pop();
    return 0;
}
/**
기반 클래스의 정의부에서 public 으로 정의된 속성에 대해서는 파생 클래스 정의부에서 
접근이 가능하며 파생클래스의 객체를 통해서도 접근이 가능하다.

기반 클래스의 정의부에서 private 으로 정의된 속성에 대해서는 파생 클랙스의 
정의부에서 접근이 불가능하며 파생클래스의 객체를 통해서도 접근이 불가하다.
또한 기반 클래스의 객체를 통해서도 접근이 불가하며 오직 기반 클래스의
정의부 내에서만 접근가능하다.

기반 클래스의 정의부에서 protected 로 정의된 속성에 대해서는 
파생클래스의 정의부에서 접근이 가능하지만 외부에서는 접근이 불가하다.

상속 시 접근자를 지정할 때 특성
public 상속 : 기반 클래스의 속성 접근 지정자의 의미를 그대로 두어 상속한다.
private 상속 : 기반 클래스의 속성 접근 지정자의 의미를 모두 private 로 만든다.
protected 상속 : 기반 클래스의 속성 접근 지정자의 의미를 최소 protected 로 만든다.
(public -> protected..)
*/