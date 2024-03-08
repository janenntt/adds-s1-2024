#include "Robot.h"

string Robot::getName(){
    return "Robot";
}

bool Robot::defeat(Move* opponent){
    if (opponent->getName() == "Ninja" || opponent->getName() == "Zombie"){
        return true;
    } else {
        return false;
    }
}