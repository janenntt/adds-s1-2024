#include "Ninja.h"

string Ninja::getName(){
    return "Ninja";
}

bool Ninja::defeat(Move* opponent){
    if (opponent->getName() == "Pirate" || opponent->getName() == "Zombie"){
        return true;
    } else {
        return false;
    }
}