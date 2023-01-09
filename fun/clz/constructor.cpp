//
// Created by 안성진 on 2023/01/09.
//

#include <iostream>
#include <string>

using namespace std;

class Player{
private:
    int _health;
    int _power;
    const string _name;
public:
    Player(int health, int power, string name): _health(health), _power(power), _name(name) {
        cout << "Player(name=" << _name << ", health=" << _health << ", power=" << _power << ")" << '\n';
    }
    Player(): Player(100, 50, "none"){};
    friend ostream & operator<<(ostream & os, const Player & player) {
        os << "Player(name=" + player._name + ", health=" << player._health << ", power=" << player._power << ")" << '\n';
        return os;
    }
};

int main() {
    Player player0(100, 50, "player0");
    Player player1 = Player(200, 100, "player1");
    Player * player2 = new Player(300, 150, "player2");

    Player player3;
    Player player4 = Player();
    Player * player5 = new Player();
    cout << "///////" << '\n';
    cout << player3 << '\n';
    return 0;
}