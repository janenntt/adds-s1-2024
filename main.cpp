#include <iostream>
#include "Player.h"
#include "Computer.h"
#include "Human.h"
#include "Referee.h"

int main(){
    Human h;
    Computer c;
    Referee referee;
    Player * p1 = &h;
    Player * p2 = &c;
    Player * winner = referee.refGame(p1,p2);
    if (winner == nullptr){
        std::cout << "It's a tie." << std::endl;
    } else {
        std::cout << winner->getName() << " wins." << std::endl;
    }
    return 0;
}