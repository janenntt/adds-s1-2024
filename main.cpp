#include <iostream>
#include "Computer.h"
#include "Human.h"
#include "Referee.h"

int main(){
    // create referee and players
    // ask the referee to adjudicate a game
    // may create any number of players/referees and call play as many times as it wants
    // human players choose any of the valid moves
    // then get the name of the winner using getName() on hte returned winning Player pointer and the output this name
    Referee referee;
    Human human("Mei");
    Computer computer;
    Player* p1 = &human;
    Player* p2 = &computer;
    Player* winner = referee.refGame(p1,p2);
    if (winner == nullptr){
        std::cout << "It's a tie." << std::endl;
    } else {
        std::cout << winner->getName() << " wins." << std::endl;
    }
    return 0;
}