//
// Created by seongjin on 22. 1. 20..
//

#include <iostream>
#include <thread>
#include <chrono>
#include <mutex>

using namespace std::chrono_literals;

void foo(int& num){
    ++num;
    throw std::runtime_error("runtime error");
}

std::mutex mm;
void goo(){
    std::lock_guard<std::mutex> lock(mm);
}
void hoo(){
    std::lock_guard<std::mutex> lock(mm);
    goo();
}

std::recursive_mutex mm2;
void goo2(){
    std::lock_guard<std::recursive_mutex> lock(mm2);
}
void hoo2(){
    std::lock_guard<std::recursive_mutex> lock(mm2);
    goo();
}

int main(){
    std::mutex m;//mutual exclusive
    int num = 0;
    auto func = [&num, &m]{
        for(int i = 0; i < 1000000; ++i){
//            m.lock();
//            num++;// critical section..
//            m.unlock();
            try{// compare with lock/unlock
                std::lock_guard<std::mutex> lock(m);
                foo(num);
//                std::unique_lock<std::mutex> lock2(m, std::try_to_lock);
//                if(lock2.owns_lock()){
//
//                }else{
//
//                }
            }catch(...){

            }

        }
    };


    std::thread th0(func);
    std::thread th1(func);

    th0.join();
    th1.join();
    std::cout << "num: " << num << std::endl;

//    std::timed_mutex m2;
//    m2.try_lock_for(10s);


//    std::cout << "goo" << std::endl;
//    hoo();

}