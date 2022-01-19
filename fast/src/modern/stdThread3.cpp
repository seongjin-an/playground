//
// Created by seongjin on 22. 1. 20..
//

#include <iostream>
#include <thread>
#include <mutex>
#include <atomic>
#include <chrono>
#include <queue>
#include <condition_variable>

using namespace std::chrono_literals;

void produce(std::mutex& m, std::condition_variable& cv, std::queue<int>& jobQueue){
    while(true){

        std::this_thread::sleep_for(100ms);
        {
            std::lock_guard<std::mutex> lock(m);
            jobQueue.push(1);
            std::cout << "produce: " << jobQueue.size() << std::endl;
        }

        cv.notify_one();
    }
}
void longTimeJob(){
    std::this_thread::sleep_for(200ms);
}
void consume(std::mutex& m, std::condition_variable& cv, std::queue<int>& jobQueue){
    while(true){
        {
            std::unique_lock<std::mutex> lock(m);
            if(jobQueue.empty()){ // lost wakeup
                cv.wait(lock);
            }

            if(jobQueue.empty()){//spurious wakeup
                continue;
            }

            int result = jobQueue.front();
            jobQueue.pop();

            std::cout << "consume: " << jobQueue.size() << std::endl;
        }
        longTimeJob();
    }
}

int main(){
    std::mutex m;
    std::condition_variable cv;
    std::queue<int> jobQueue;
    std::thread producer(produce, std::ref(m), std::ref(cv), std::ref(jobQueue));
    std::thread consumer(consume, std::ref(m), std::ref(cv), std::ref(jobQueue));

    producer.join();
    consumer.join();
}