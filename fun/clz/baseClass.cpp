#include <iostream>
#include <string>

using namespace std;

class Player {
    private:
        int _health;
        int _power;
        string _name;
    public:
        Player(int health, int power, string name): _health(health), _power(power), _name(name) {}
        void attack(Player & target) {
            cout << "ATTACK " << _name << " -> " << target._name << '\n';
        }
        void damaged(int power) {
            _health -= power;
            if (_health <= 0) {
                cout << _name << " Died." << '\n';
            }
        }
};

int main() {
    Player david(200, 100, "David");
    Player daniel(200, 100, "Daniel");

    david.attack(daniel);
    daniel.damaged(200);
}