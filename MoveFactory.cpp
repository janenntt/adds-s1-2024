#include "MoveFactory.h"

MoveFactory::MoveFactory(){}

std::unordered_map <string, Move*> MoveFactory::moveMap = {
    {"Rock", new Rock()},
    {"Paper", new Paper()},
    {"Scissors", new Scissors()},
    {"Monkey", new Monkey()},
    {"Robot", new Robot()},
    {"Ninja", new Ninja()},
    {"Pirate", new Pirate()},
    {"Zombie", new Zombie()}
};

Move* MoveFactory::createMove(string moveName){
    return moveMap[moveName];
}