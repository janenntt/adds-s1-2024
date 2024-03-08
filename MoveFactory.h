#ifndef MOVEFACTORY_H
#define MOVEFACTORY_H
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"
#include "Monkey.h"
#include "Ninja.h"
#include "Robot.h"
#include "Pirate.h"
#include "Zombie.h"
#include "unordered_map"

class MoveFactory {
    private:
        static std::unordered_map<string, Move*> moveMap;
    public:
        MoveFactory();
        static Move* createMove(string moveName);

};
#endif