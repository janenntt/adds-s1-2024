#include "Computer.h"
#include <stdlib.h>
#include <ctime>


Computer::Computer(){
    this->name = "Computer";
}

Move* Computer::makeMove(){
    MoveFactory *obj = new MoveFactory;
    return obj->createMove("Rock");
}

string Computer::getName() {
    return this->name;
}