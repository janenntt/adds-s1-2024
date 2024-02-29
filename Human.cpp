#include "Human.h"

Human::Human(): Player(name){}
char Human::makeMove() {
    std::cout << "Enter move:";
    std::cin >> move;
    return move;
}

Human::~Human(){}
