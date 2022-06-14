//
// Created by seongjin on 21. 12. 22..
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Queue: protected vector<int>{
//private:
//    std::vector<int> v;
public:
    virtual void push(int value){
        push_back(value);
    }

    virtual void pop(){
        pop_back();
    }

    virtual int top(){
        return back();
    }
    virtual ~Queue(){

    }
};
class PriorityQueue: public Queue{
public:
    virtual void push(int value) override{
        Queue::push(value);
        push_heap(begin(), end());
    }

    virtual void pop() override{
        pop_heap(begin(), end());
        Queue::pop();
    }

    virtual int top() override{
        return front();
    }
};
int main(){
    Queue queue;

    queue.push(10);
    cout << queue.top() << endl;

    queue.push(20);
    cout << queue.top() << endl;

    queue.pop();
    cout << queue.top() << endl;

    PriorityQueue pq;
    pq.push(10);
    pq.push(100);
    pq.push(0);

    cout << pq.top() << endl;
    pq.pop();

    cout << pq.top() << endl;
    pq.pop();

    cout << pq.top() << endl;
    pq.pop();
}