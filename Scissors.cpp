#include "Scissors.h"

string Scissors::getName(){
    return "Scissors";
}

bool Scissors::defeat(Move* opponent){
    if (opponent->getName() == "Paper"){
        return true;
    } else {
        return false;
    }
}