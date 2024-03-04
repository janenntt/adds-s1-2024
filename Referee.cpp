#include "Referee.h"

Referee::Referee(){}
Player* Referee::refGame(Player *player1, Player *player2){
    Move* m1 = player1->makeMove();
    Move* m2 = player2->makeMove();

    string move1 = m1->getName();
    string move2 = m2->getName();

    if (move1 == move2) {
        return nullptr;

    } else if ((move1 == "Rock" && move2 == "Scissors")
            || (move1 == "Scissors" && move2 == "Paper")
            || (move1 == "Paper" && move2 == "Rock")
            || (move1 == "Monkey" && (move2 == "Ninja" || move2 == "Robot"))
            || (move1 == "Robot" && (move2 == "Ninja" || move2 == "Zombie"))
            || (move1 == "Pirate" && (move2 == "Robot" || move2 == "Monkey"))
            || (move1 == "Ninja" && (move2 == "Pirate" || move2 == "Zombie"))
            || (move1 == "Zombie" && (move2 == "Pirate" || move2 == "Monkey"))){

        return player1;

    } else {
        return player2;
    }
}