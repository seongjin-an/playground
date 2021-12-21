//
// Created by seongjin on 21. 12. 21..
//

#include <iostream>

using namespace std;

class Character{
private:
    int _health;
    int _power;
public:
    Character(int health, int power)
        : _health(health), _power(power){

    }
    virtual void damaged(int power){
        _health -= power;
    }

    void attack(Character& target) const {
        target.damaged(_power);
    }
};
class Player: public Character{
public:
    Player(int health, int power): Character(health, power){

    }
    virtual void damaged(int power) override {
        Character::damaged(power);
        cout << "player damaged.." << endl;
    }
};
class Monster: public Character{
public:
    using Character::Character;
    virtual void damaged(int power) override {
        Character::damaged(power);
        cout << "monster damaged.." << endl;
    }
};
int main(){
    Player player(200, 100);
    Monster monster(100, 50);

    player.attack(monster);
    monster.attack(player);
}