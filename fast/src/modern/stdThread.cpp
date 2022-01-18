//
// Created by seongjin on 22. 1. 18..
// g++ -pthread stdThread.cpp -o thread

#include <iostream>
#include <thread>
#include <chrono>

using namespace std::chrono_literals;

struct Test{
    int num;
    Test(int num): num(num){
        std::cout << "Construct: " << num << std::endl;
    }
    ~Test(){
        std::cout << "Destruct: " << num << std::endl;
    }
};

thread_local Test test(10);

void foo(){
    for(int i=0; i<10; i++){
//        thread_local int num = 10;
        static int num = 10;
        num++;
        std::cout << num << std::endl;
    }
}
int num = 0;
void foo2(){
    for(int i = 0; i < 1000000; ++i){
        num += 1;
    }
}

bool flag = false;
int value = 0;
int main(){
//    std::cout << "thread ID: " << std::this_thread::get_id() << std::endl;
//    std::thread th([]{
//        std::cout << "thread ID: " << std::this_thread::get_id() << std::endl;
//        std::this_thread::sleep_for(1s);
//        std::cout << "thread complete" << std::endl;
//    });
//    std::this_thread::sleep_for(2s);
////    th.join();//hold till the end;
//    th.detach();
//    std::cout << "COMPLETE" << std::endl;



//    std::thread(foo).join();
//    foo();



//    std::thread th([]{
//        num += 1;
//    });
//    num += 1;
//    th.join();
//    std::cout << num << std::endl;



//    std::thread th(foo2);
//    foo2();
//    th.join();
//    std::cout << "num: " << num << std::endl;



    std::thread th0([]{
        value = 100;
        flag = true;
    });
    std::thread th1([]{
        while(!flag);
        std::cout << "value: " << value << std::endl;
    });
    std::cout << "JOIN" << std::endl;
    th0.join();

    std::cout << "JOIN th0.join" << std::endl;
    th1.join();
}
// 1. load num
// 2. register += 1
// 3. store register

// thread 0     thread1
// 1. reg(0)
//              1. reg(0)
// 2. reg((1)   2. reg(1)
// 3. num(1)    3. num(1)