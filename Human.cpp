#include "Human.h"

Human::Human(): Player("Human"){}
Human::Human(string _name): Player(_name){}
char Human::makeMove() {
    char move;
    std::cout << "Enter move: ";
    std::cin >> move;
    return move;
}

Human::~Human(){}
