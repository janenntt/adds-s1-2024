#include "Human.h"

Human::Human(): Player("Human") {}
Human::Human(string name): Player(name){}
Move* Human::makeMove() {
    string move_name;
    std::cout << "Enter move: ";
    std::cin >> move_name;
    return createMove(move_name);
}

string Human::getName() {
    return name;
}
