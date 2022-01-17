//
// Created by seongjin on 22. 1. 16..
//
#include <iostream>
#include <memory>

struct Test{
    int num;
    Test(int num): num(num){
        std::cout << "Construct: " << num << std::endl;
    }
    ~Test(){
        std::cout << "Destruct: " << num << std::endl;
    }
};

struct Deleter{
    void operator()(Test* test) const{
        std::cout << "deleter delete: " << test->num << std::endl;
        delete test;
    }
};
void foo(std::unique_ptr<Test>& p){
    p.reset(new Test(1));
}
int main(){
    Test* test = new Test(0);
    std::unique_ptr<Test> p0(test);
    std::unique_ptr<Test> p1(new Test(1));
    auto p2 = std::make_unique<Test>(2);

//    foo(std::move(p0));
    std::cout << p0->num << std::endl;
    foo(p0);
    std::cout << p0->num << std::endl;

    std::unique_ptr<Test> p3(new Test(3));
    Test* test0 = p3.release();
    delete test0;

    std::unique_ptr<Test, Deleter> p4(new Test(4));

}