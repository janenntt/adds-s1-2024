#include "Computer.h"

Computer::Computer(): Player("Computer"){}

char Computer::makeMove(){
    return 'R';
}

Computer::~Computer(){}