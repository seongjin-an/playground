#include "tv.h"
#include <iostream>

bool Tv::volup() {
    if (volume < MaxVal) {
        volume++;
        return true;
    } else
        return false;
}

bool Tv::voldown() {
    if (volume > MinVal) {
        volume--;
        return true;
    } else
        return false;
}

void Tv::chanup() {
    if (channel < maxchannel)
        channel++;
    else
        channel = 1;
}

void Tv::chandown() {
    if (channel > 1)
        channel--;
    else
        channel = maxchannel;
}

void Tv::settings() const {
    using std::cout;
    cout << "TV = " << (state == Off ? "OFF" : "ON") << '\n';
    if (state == On) {
        cout << "볼륨 = " << volume << '\n';
        cout << "채널 = " << channel << '\n';
        cout << "모드 = " << (mode == Antenna ? "지상파 방송" : "케이블 방송") << '\n';
        cout << "입력 = " << (input == TV ? "TV": "DVD") << '\n';
    }
}