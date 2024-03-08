#ifndef HUMAN_H
#define HUMAN_H
#include "Player.h"
#include "Move.h"

class Human : public Player{
    public:
        Human();
        Human(string name);
        Move* makeMove();
        string getName();
};
#endif