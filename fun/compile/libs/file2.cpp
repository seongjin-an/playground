#include <iostream>
#include "coordin.h"
#include <cmath>

polar rect_to_polar(rect xypos) {
    using namespace std;
    polar answer;

    answer.distance = sqrt(xypos.x * xypos.x + xypos.y * xypos.y);
    answer.angle = atan2(xypos.y, xypos.x);
    return answer;
}

void show_polar(polar dapos){
    using namespace std;
    const double Rad_to_deg = 57.2957951;

    cout << "distance : " << dapos.distance;
    cout << ", angle : " << dapos.angle * Rad_to_deg;
    cout << " 도\n";
}