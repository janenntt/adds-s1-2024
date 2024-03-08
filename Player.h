#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include "Move.h"
#include "MoveFactory.h"
#include "unordered_map"
using std::string;

class Player{
    protected:
        string name;
    public:
        virtual Move* makeMove() = 0;
        virtual string getName() = 0;
};
#endif