#include "Paper.h"

string Paper::getName(){
    return "Paper";
}

bool Paper::defeat(Move* opponent){
    if (opponent->getName() == "Rock"){
        return true;
    } else {
        return false;
    }
}