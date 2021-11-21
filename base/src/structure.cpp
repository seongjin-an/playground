//
// Created by seongjin on 21. 11. 21..
//

#include <iostream>
struct inflatable{
    char name[20];
    float volume;
    double price;
};

int main(){
    inflatable guests[2] = {
            {"Bmabi", 0.5, 21.99},
            {"Godzilla", 2000, 565.99}
    };
    std::cout << guests[0].name << " and " << guests[1].name << " volume: "
              << guests[0].volume +guests[1].volume << std::endl;
    return 0;
}