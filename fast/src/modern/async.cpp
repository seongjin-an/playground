//
// Created by seongjin on 22. 1. 21..
//

#include <iostream>
#include <future>

int main(){
    std:: cout << "thraed id: " << std::this_thread::get_id() << std::endl;
    std::future<int> fut = std::async(std::launch::async|std::launch::deferred, [](int value){
        std:: cout << "thraed id: " << std::this_thread::get_id() << std::endl;
        if(value < 0)
            throw std::runtime_error("runtime error");
        return value;
    }, 100);
    try{
        std::cout << fut.get() << std::endl;
    }catch(const std::runtime_error& error){
        std::cout << error.what() << std::endl;
    }
}