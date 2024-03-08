#include <iostream>
#include "Computer.h"
#include "Human.h"
#include "Referee.h"

int main(){
    Referee *referee = new Referee;
    Human *human = new Human;
    Computer *computer = new Computer;
    computer->makeMove();
    Player *winner = referee->refGame(human,computer);
    if (winner == nullptr){
        std::cout << "It's a Tie";
    } else if (winner == human){
        std::cout << "Player1 wins";
    } else {
        std::cout << "Player2 wins";
    }
    return 0;
}