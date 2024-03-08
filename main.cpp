#include <iostream>
#include "Computer.h"
#include "Human.h"
#include "Referee.h"

int main(){
    
    Referee referee;
    Human human("Mei");
    Computer computer;
    Player* p1 = &human;
    Player* p2 = &computer;
    Player* winner = referee.refGame(p1,p2);

    if (winner){
        std::cout << winner->getName() << " wins." << std::endl;
    }
    return 0;
}