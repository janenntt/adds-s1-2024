#ifndef HUMAN_H
#define HUMAN_H
#include "Player.h"
#include "Move.h"

class Human : public Player{
    public:
        Move* makeMove() override;
        Human();
        string getName() override;
};
#endif