//
// Created by seongjin on 21. 12. 17..
//

#include <iostream>

using namespace std;

class Player{
private:
    int _health;
    int _power;
    const string _name;
public:
    Player(): Player(100, 50, "none"){
//        _health = 0;
//        _power = 0;
//        cout << "Player " << _health << ", " << _power << endl;
    };
    Player(int health, int power, string name)
        : _health(health), _power(power), _name(name){
//        _health = health;
//        _power = power;
        cout << "Player " << _name << ", " << _health << ", " << _power << endl;
    }
    void print(){
        cout << _name << ": " << _health << ": " << _power << endl;
    }
};

int main(){
    Player player0(100, 50, "player0");
    Player player1 = Player(200, 100, "player1");
    Player* player2 = new Player(300, 150, "player2");

    Player player3;
    Player player4 = Player();
    Player* player5 = new Player();
    cout << "///////////////////////" << endl;
    player3.print();
}