#include <iostream>

using namespace std;

class Character {
    public:
        int num;
        virtual ~Character() {
            cout << "~Character" << '\n';
        }
        virtual void func() {
            cout << "Character func" << '\n';
        }
        virtual int get() {
            return 1;
        }
};

class Player: public Character {
    private:
        using Character::num;
    public:
        virtual ~Player() {
            cout << "~Player" << '\n';
        }
        void func() {
            cout << "Player func" << '\n';
        }
        using Character::get;
        virtual int get(int num) { //overloading
            return 2;
        }
};

int main() {
    Character * ch = new Player;
    ch->func();
    cout << ch->get() << '\n';
    delete ch;

    Character c;
    cout << c.get() << '\n';

    Player p;
    cout << p.get(3) << '\n';
}