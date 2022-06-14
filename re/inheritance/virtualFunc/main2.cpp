//
// Created by seongjin on 22. 6. 14..
//

#include <iostream>

class Character {
private:
    int _health;
    int _power;
public:
    Character(int health, int power) : _health(health), _power(power) {
        std::cout << "Character constructor" << std::endl;
    }

    virtual void damaged(int power) {
        _health -= power;
    }

    void attack(Character &target) const {
        target.damaged(_power);
    }
};

class Player : public Character {
public:
    Player(int health, int power) : Character(health, power) {
        std::cout << "Player constructor" << std::endl;
    }

    virtual void damaged(int power) override {
        Character::damaged(power);
        std::cout << "player damaged..." << std::endl;
    }
};

class Monster : public Character {
public:
    using Character::Character;//constructor!

    virtual void damaged(int power) override {
        Character::damaged(power);
        std::cout << "monster damaged..." << std::endl;
    }
};

int main() {
    Player player{200, 100};
    Monster monster(100, 50);

    player.attack(monster);
    monster.attack(player);
}
