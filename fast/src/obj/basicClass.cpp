//
// Created by seongjin on 21. 12. 17..
//

#include <iostream>
#include <string>

using namespace std;

class Player{
private:
    int _health;
    int _power;
    string _name;
public:
    Player(int health, int power, string name){
        _health = health;
        _power = power;
        _name = name;
    }
    void attack(Player& target){
        cout << "ATTACK " << _name << "-> " << target._name << endl;
        target.damaged(_power);
    }
    void damaged(int power){
        _health -= power;
        if(_health <= 0){
            cout << "Died. " << _name << endl;
        }
    }
};
int main(){
//    Player david{200, 100, "David"};
//    Player daniel{200, 100, "Daniel"};

//    david.attack(daniel);
//    david.attack(daniel);

//    daniel._health -= 200;

    Player david(200, 100, "David");
    Player daniel(200, 100, "Daniel");

    daniel.damaged(200);
}