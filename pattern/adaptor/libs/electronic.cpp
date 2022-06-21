//
// Created by seongjin on 22. 6. 22.
//

#include "electronic.h"

void HairDryer::powerOn() {
    std::cout << "HairDryer 110v on" << std::endl;
}

void Cleaner::connect() {
    std::cout << "Cleaner 220v on" << std::endl;
}

void AirConditioner::connect() {
    std::cout << "AirConditioner 220v on" << std::endl;
}

SocketAdaptor::SocketAdaptor(Electronic220V *_electronic220V) {
    electronic220V = _electronic220V;
}

void SocketAdaptor::powerOn() {
    electronic220V->connect();
}

void connect(Electronic110V *electronic110V) {
    electronic110V->powerOn();
}