#ifndef HUMAN_H
#define HUMAN_H
#include <iostream>
#include "Player.h"

class Human : public Player {
    protected:
        char makeMove() override;
    public:
        Human();
        ~Human();
};
#endif