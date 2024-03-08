#include "Rock.h"

string Rock::getName(){
    return "Rock";
}

bool Rock::defeat(Move* opponent){
    if (opponent->getName() == "Scissors"){
        return true;
    } else {
        return false;
    }
}