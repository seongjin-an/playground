//
// Created by seongjin on 21. 11. 21..
//

#include <iostream>
#include <cmath>

struct polar{
    double distance;
    double angle;
};

struct rect{
    double x;
    double y;
};

polar rect_to_polar(rect xypos);
void show_polar(polar dapos);

int main(){
    rect rplace;
    polar pplace;

    std::cout << "enter x, y: ";
    while(std::cin >> rplace.x >> rplace.y){
        pplace = rect_to_polar(rplace);
        show_polar(pplace);
        std::cout << "enter x, y(press q, if you quit): ";
    }
    std::cout << "quit\n";
    return 0;
}

polar rect_to_polar(rect xypos){
    polar answer;

    answer.distance = sqrt(xypos.x * xypos.x + xypos.y * xypos.y);
    answer.angle = atan2(xypos.y, xypos.x);
    return answer;
}

void show_polar(polar dapos){
    const double rad_to_deg = 57.29577951;
    std::cout << "distance: " << dapos.distance;
    std::cout << ", angle: " << dapos.angle * rad_to_deg << "angle\n";
}