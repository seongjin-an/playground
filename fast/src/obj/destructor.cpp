//
// Created by seongjin on 21. 12. 17..
//

#include <iostream>

using namespace std;

class Player{
private:
    int _num;
public:
    Player(int num): _num(num){
        cout << "Contructor: " << _num << endl;
    }
    ~Player(){
        cout << "Destructor: " << _num << endl;
    }
};
Player player0(0);
Player* player1 = new Player(1);

void func(){
    static Player pleyer2(2);
}
int main(){
    Player player3(3);
    Player* player4 = new Player(4);
    {
        Player player5(5);
        Player* player6 = new Player(6);
    }
    delete player4;
    func();
    func();
}