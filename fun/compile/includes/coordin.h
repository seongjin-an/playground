// coordin.h -- 구조체 템플릿과 함수 원형
// 구조체 템플릿
#ifndef COORDIN_H_
#define COORDIN_H_

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

#endif