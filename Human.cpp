#include "Human.h"

Human::Human(string playerName): Player(playerName){}
char Human::makeMove() {
    char move;
    std::cout << "Enter move: ";
    std::cin >> move;
    return toupper(move); // make characters uppercase
}

Human::~Human(){}
