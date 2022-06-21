//
// Created by seongjin on 22. 6. 22.
//

#include "electronic.h"

int main() {
    HairDryer hairDryer;
    connect(&hairDryer);

    Cleaner cleaner;
    Electronic110V *adaptor = new SocketAdaptor(&cleaner);
    connect(adaptor);

    AirConditioner airConditioner;
    Electronic110V *airAdaptor = new SocketAdaptor(&airConditioner);
    connect(airAdaptor);
}