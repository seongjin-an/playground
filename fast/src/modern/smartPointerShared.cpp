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
void foo(int, std::shared_ptr<Test>){

}
int exception(){
    throw std::runtime_error("error");
}
struct B;
struct A{
    A(){std::cout << "Construct A" << std::endl;}
    ~A(){std::cout << "Destruct A" << std::endl;}
    std::shared_ptr<B> b;
};
struct B{
    B(){std::cout << "Construct B" << std::endl;}
    ~B(){std::cout << "Destruct B" << std::endl;}
    std::weak_ptr<A> a;
};
int main(){
//    auto p = std::make_unique<Test>(0);
//    std::shared_ptr<Test> p0 = std::move(p);
//    std::shared_ptr<Test> p0 = std::make_shared<Test>(0);
    Test* test = new Test(0);
    std::shared_ptr<Test> p0(test, Deleter());

    std::cout << p0.use_count() << std::endl;
    std::cout << std::endl;
    std::shared_ptr<Test> p1 = p0;
    std::cout << p0.use_count() << std::endl;
    std::cout << p1.use_count() << std::endl;
    std::cout << std::endl;
    p0.reset();
    std::cout << p1.use_count() << std::endl;
    std::cout << "////////////////////////////" << std::endl;
    try{
        foo(exception(), std::shared_ptr<Test>(new Test(0)));
    }catch(...){
        std::cout << "catch" << std::endl;
    }
    std::cout << "////////////////////////////" << std::endl;
    auto a = std::make_shared<A>();
    auto b = std::make_shared<B>();
    a->b = b;
    b->a = a;
    std::cout << a.use_count() << std::endl;
    std::cout << b.use_count() << std::endl;
    std::cout << "////////////////////////////" << std::endl;
    auto p = std::make_shared<Test>(0);
    std::weak_ptr<Test> w = p;
    std::cout << p.use_count() << std::endl;
    auto shared = w.lock();
    std::cout << p.use_count() << std::endl;
    std::cout << "////////////////////////////" << std::endl;
}