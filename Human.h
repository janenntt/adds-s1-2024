#ifndef HUMAN_H
#define HUMAN_H
#include "Player.h"

class Human : public Player {
    public:
        char makeMove() override;
        Human();
        Human(string _name);
        ~Human();
};
#endif