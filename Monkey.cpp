#include "Monkey.h"

string Monkey::getName(){
    return "Monkey";
}

bool Monkey::defeat(Move* opponent){
    if (opponent->getName() == "Ninja" || opponent->getName() == "Robot"){
        return true;
    } else {
        return false;
    }
}