#include "Computer.h"
#include <stdlib.h>
#include <ctime>


Computer::Computer(){
    name = this->getName();
}

Move* Computer::makeMove(){
    MoveFactory *obj = new MoveFactory;
    return obj->createMove("Rock");
}

string Computer::getName() {
    return this->name;
}