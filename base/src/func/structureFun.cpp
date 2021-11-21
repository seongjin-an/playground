//
// Created by seongjin on 21. 11. 21..
//

#include <iostream>
struct travel_time{
    int hours;
    int mins;
};

const int MIN_PER_HOUR=60;

travel_time sum(travel_time t1, travel_time t2);
void show_time(travel_time t);

int main(){
    travel_time day1 = {5, 45};
    travel_time day2 = {4, 55};

    travel_time trip = sum(day1, day2);
    std::cout << "Time required for two days: ";
    show_time(trip);

    travel_time day3 = {4, 32};
    std::cout << "Time required for three days: ";
    show_time(sum(trip, day3));

    return 0;
}

travel_time sum(travel_time t1, travel_time t2){
    travel_time total;

    total.mins = (t1.mins + t2.mins) % MIN_PER_HOUR;
    total.hours = (t1.hours + t2.hours + (t1.mins + t2.mins) / MIN_PER_HOUR);
    return total;
}

void show_time(travel_time t){
    std::cout << t.hours << "hours " << t.mins << "minutes" << std::endl;
}