#include "Computer.h"
#include <stdlib.h>
#include <ctime>


Computer::Computer(): Player("Computer"){}

Move* Computer::makeMove(){
    int random_move = rand()%7;
    switch (random_move){
        case 0: return new Rock();
        case 1: return new Paper();
        case 2: return new Scissors();
        case 3: return new Monkey();
        case 4: return new Ninja();
        case 5: return new Robot();
        case 6: return new Pirate();
        default: return new Zombie();
    }
}

string Computer::getName() {
    return "Computer";
}