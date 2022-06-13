//
// Created by seongjin on 22. 6. 13..
//

#include <iostream>
#include <string>

class Player {
private:
    int _health;
    int _power;
    std::string _name;
public:
//    Player(int health, int power, std::string name){
//        // 이것은 모두 할당이지 초기화가 아니다. 그러므로 아래 초기화방법을 사용하자
//        _health = health;
//        _power = power;
//        _name = name;
//    }
    Player(int health, int power, std::string name) : _health(health), _power(power), _name(name) {

    }

    void attack(Player &target) {
        std::cout << "ATTACK " << _name << "->" << target._name << std::endl;
        target.damaged(_power);
    }

    void damaged(int power) {
        _health -= power;
        if(_health <= 0)
            std::cout << "Died." << _name << std::endl;
    }

};
int main(){
    Player david(200, 100, "David");
    Player daniel(200, 100, "Daniel");
    daniel.damaged(200);
}
/*
    int value1 = 1; // 복사 초기화
    double value2(2.2); // 직접 초기화
    char value3 {'c'}; // 유니폼 초기화
    [출처: https://boycoding.tistory.com/246 [소년코딩:티스토리]
    멤버 초기화 리스트를 사용하면 값을 할당하지 않고 멤버 변수를 초기화할 수 있다.
    생성자 본문에서 값을 할당하는 것보다 성능이 더 우수하다.
    const 또는 reference 변수와 같이 초기값이 필요한 멤버를 초기화할 수 있는 유일한 방법이다.
    멤버 초기화 리스트는 기본 자료형 변수와 클래스 자체인 멤버 모두에서 잘 작동한다.
    출처: https://boycoding.tistory.com/246 [소년코딩:티스토리]
 */