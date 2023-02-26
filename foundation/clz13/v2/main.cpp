#include <iostream>
#include "tabtenn0.h"

int main() {
    using std::cout;
    TableTennisPlayer player1("Chuck", "Blizzard", true);
    RatedPlayer rplayer1(1140, "Mallory", "Duck", true);
    rplayer1.Name();
    if (rplayer1.HasTable())
        cout << ": 탁구대가 있다.\n";
    else
        cout << ": 탁구대가 없다.\n";
    player1.Name();
    if (player1.HasTable())
        cout << ": 탁구대가 있다.\n";
    else
        cout << ": 탁구대가 없다.\n";
    cout << "이름: ";
    rplayer1.Name();
    cout << "; 랭킹: " << rplayer1.Rating() << '\n';

    RatedPlayer rplayer2(1212, player1);
    cout << "이름: ";
    rplayer2.Name();
    cout << "; 랭킹: " << rplayer2.Rating() << '\n';
    return 0;
}