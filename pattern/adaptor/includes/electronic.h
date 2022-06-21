//
// Created by seongjin on 22. 6. 22.
//

#ifndef PLAYGROUND_ELECTRONIC_H
#define PLAYGROUND_ELECTRONIC_H

#include <iostream>

class Electronic110V {
public:
    virtual void powerOn() = 0;
};

class Electronic220V {
public:
    virtual void connect() = 0;
};

class HairDryer : public Electronic110V {
public:
    void powerOn() override;
};

class Cleaner : public Electronic220V {
public:
    void connect() override;
};

class AirConditioner : public Electronic220V {
public:
    void connect() override;
};

class SocketAdaptor : public Electronic110V {
private:
    Electronic220V *electronic220V;
public:
    SocketAdaptor(Electronic220V *_electronic220V);

    void powerOn() override;
};
void connect(Electronic110V *electronic110V);

#endif //PLAYGROUND_ELECTRONIC_H
