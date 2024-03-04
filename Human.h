#ifndef HUMAN_H
#define HUMAN_H
#include "Player.h"
#include "Move.h"

class Human : public Player, CreateMove {
    public:
        Move* makeMove() override;
        Human();
        Human(string name);
        string getName() override;
};
#endif