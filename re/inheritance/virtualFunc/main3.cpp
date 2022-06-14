//
// Created by seongjin on 22. 6. 15..
//

#include <iostream>

class Character {
public:
    int num;

    virtual ~Character() {
        std::cout << "Character destructor" << std::endl;
    }

    virtual void func() {
        std::cout << "Character func" << std::endl;
    }

    virtual int get() {
        return 1;
    }
};

class Player : public Character {
private:
//    using Character::num;
public:
    virtual ~Player() {
        std::cout << "Player destructor" << std::endl;
    }

    void func() {
        std::cout << "Player func" << std::endl;
    }


    using Character::get;

    virtual int get(int num) {
        return 11;
    }
};

int main() {
    Character *ch = new Player;
    ch->func();
    delete ch;

    Character c;
    std::cout << c.get() << std::endl;

    Player p;
    std::cout << p.get(1) << std::endl;
}