#ifndef SCISSORS_H
#define SCISSORS_H
#include "Move.h"

class Scissors : public Move {
    string getName() override;
    bool defeat(Move* opponent) override;
};
#endif