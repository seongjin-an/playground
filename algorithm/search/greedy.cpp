//
// Created by seongjin on 22. 6. 19.
//

#include <iostream>

int main() {
    int coins[] = {500, 100, 50, 10};
    int length = sizeof coins / sizeof coins[0];
    int price = 8370;
    int count = 0;
    for (int i = 0; i < length; i++) {
        count = 0;
        count += price / coins[i];
        price %= coins[i];
        std::cout << coins[i] << " coins: " << count << std::endl;
    }
}