//
// Created by seongjin on 21. 12. 21..
// without virtual, it seems to blind children method;
// but with virtual, it seems to point children method;
// so in parent object, good to write virtual keyword

#include <iostream>

using namespace std;

class Character{
public:
    int num;
    virtual ~Character(){
        cout << "~Character" << endl;
    }
    virtual void func(){
        cout << "Character func" << endl;
    }

    virtual int get(){
        return 1;
    }
};

class Player: public Character{
private:
    using Character::num;
public:
    virtual ~Player(){
        cout << "~Player" << endl;
    }
    void func(){
        cout << "Player func" << endl;
    }

    using Character::get;
    virtual int get(int num){
        return 1;
    }
};

int main(){
    Character* ch = new Player;
    ch->func();
    delete ch;

    Character c;
    c.get();

    Player p;
    p.get();
}