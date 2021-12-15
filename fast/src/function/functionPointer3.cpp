//
// Created by seongjin on 21. 12. 15..
//

#include <iostream>
#include <functional>

using namespace std;

struct Character{
    int health;
    void (*dieCallback)();
};

void damaged(Character& character){
    character.health -= 100;
    if(character.health <= 0) {
        cout << "died..." << endl;
        if(character.dieCallback) {
            character.dieCallback();
        }
    }
}
void gameOver(){
    cout << "gameOver" << endl;
}
void gameOver2(int a){
    cout << "gameOver" << endl;
}

typedef float real32;
typedef double real64;
typedef void (*FuncType)(int);
typedef void (FuncType2)(int);

using real_32 = float;
using real_64 = double;

using FuncType3 = void(int);
using FuncType4 = void(*)(int);

int main(){
    Character character0{ 200, nullptr };//monster
    Character character1{200, gameOver};//player

    damaged(character0);
    damaged(character0);
    cout << "/////" << endl;
    damaged(character1);
    damaged(character1);
    cout << "............" << endl;
    auto f = gameOver;
    f();
    function<void()> f2 = gameOver;
    f2();
    function<void(int)> f3 = gameOver2;
    f3(1);

    real32 r32;
    real64 r64;

    cout << typeid(r32).name() << endl;
    cout << typeid(r64).name() << endl;
    FuncType f4 = gameOver2;
    f4(1);
    FuncType2 *f5 = gameOver2;
    f5(1);

    real_32 r_32;
    real_64 r_64;

    cout << typeid(r_32).name() << endl;
    cout << typeid(r_64).name() << endl;

    FuncType3 *f6 = gameOver2;
    f6(1);
    FuncType4 f7 = gameOver2;
    f7(1);
}