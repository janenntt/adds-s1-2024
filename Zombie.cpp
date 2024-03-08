#include "Zombie.h"

string Zombie::getName(){
    return "Zombie";
}

bool Zombie::defeat(Move* opponent){
    if (opponent->getName() == "Pirate" || opponent->getName() == "Monkey"){
        return true;
    } else {
        return false;
    }
}