#include <iostream>

using namespace std;

class Character {
    private:
        int health;
        int power;
    public:
        Character(int health, int power) : health(health), power(power){

        }
        virtual void damaged(int power) {
            health -= power;
        }
        void attack(Character & target) const {
            target.damaged(power);
        }
};

class Player: public Character {
    public:
        Player(int health, int power): Character(health, power) {

        }
        virtual void damaged(int power) override {
            Character::damaged(power);
            cout << "player damaged..." << '\n';
        }
};

class Monster: public Character {
    public:
        using Character::Character; // constructor!
        virtual void damaged(int power) override {
            Character::damaged(power);
            cout << "monster damaged.." << '\n';
        }
};

int main() {
    Player player(200, 100);
    Monster monster(100, 50);

    player.attack(monster);
    monster.attack(player);
}