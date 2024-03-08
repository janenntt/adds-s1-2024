#include "Human.h"

Human::Human(){
    name = this->getName();
}

Human::Human(string name){
    this->name = name;
}

Move* Human::makeMove() {
    MoveFactory *obj = new MoveFactory;
    string move;
    std::cout << "Enter move: ";
    std::cin >> move;
    return obj->createMove(move);
}

string Human::getName() {
    return this->name;
}
