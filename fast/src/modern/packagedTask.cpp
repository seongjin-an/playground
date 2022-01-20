//
// Created by seongjin on 22. 1. 21..
//

#include <iostream>
#include <future>

int main(){
    std::packaged_task<int(int)> task([](int value){
        if(value < 0)
            throw std::runtime_error("runtime_error");
        return value;
    });
    std::future<int> fut = task.get_future();
    std::thread th(std::move(task), -1);
    try {
        std::cout << fut.get() << std::endl;
    }catch(const std::runtime_error& error){
        std::cout << error.what() << std::endl;
    }
    th.join();
}