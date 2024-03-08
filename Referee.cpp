#include "Referee.h"

Referee::Referee(){}
Player* Referee::refGame(Player *player1, Player *player2){
    Move* m1 = player1->makeMove();
    Move* m2 = player2->makeMove();

    string move1 = m1->getName();
    string move2 = m2->getName();

    if (m1->defeat(m2)) {
        return player1;

    } else if (m2->defeat(m1)){
        return player2;
    } else {
        return nullptr;
    }
}