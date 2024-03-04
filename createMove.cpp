#include "createMove.h"

Move* CreateMove::createMove(string move_name){
    if (move_name == "Rock") { return new Rock(); }
    else if (move_name == "Paper") { return new Paper(); }
    else if (move_name == "Scissors") { return new Scissors(); }
    else if (move_name == "Monkey") { return new Monkey(); }
    else if (move_name == "Robot") { return new Robot(); }
    else if (move_name == "Ninja") { return new Ninja(); }
    else if (move_name == "Pirate") { return new Pirate(); }
    else if (move_name == "Zombie") { return new Zombie(); }
    else { return nullptr; }
}