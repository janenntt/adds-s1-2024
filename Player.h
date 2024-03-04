#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include "Move.h"
#include "createMove.h"
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"
#include "Monkey.h"
#include "Ninja.h"
#include "Robot.h"
#include "Pirate.h"
#include "Zombie.h"
using std::string;

class Player{
    protected:
        string name;
    public:
        virtual Move* makeMove() = 0;
        string getName();
        Player(string name);
};
#endif