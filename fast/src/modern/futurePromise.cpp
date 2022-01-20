//
// Created by seongjin on 22. 1. 20..
//

#include <iostream>
#include <future>
#include <thread>
#include <chrono>

using namespace std::chrono_literals;

int main(){
    std::promise<int> pro;
    std::future<int> fut = pro.get_future();
//    pro.set_value(10);
//    std::cout << fut.get() << std::endl;


    std::thread th([](std::promise<int> pro){
//        std::this_thread::sleep_for(2s);
//        pro.set_value(10);
        try {
            throw std::runtime_error("runtime error");
        }catch(...){
            std::exception_ptr e = std::current_exception();
            pro.set_exception(e);
        }
    }, std::move(pro));
//    std::cout << fut.get() << std::endl;
    try{
        std::cout << fut.get() << std::endl;
    }catch(const std::runtime_error& err){
        std::cout << err.what() << std::endl;
    }
    th.join();
}