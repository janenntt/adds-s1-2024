#include "Pirate.h"

string Pirate::getName(){
    return "Pirate";
}

bool Pirate::defeat(Move* opponent){
    if (opponent->getName() == "Robot" || opponent->getName() == "Monkey"){
        return true;
    } else {
        return false;
    }
}