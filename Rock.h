#ifndef ROCK_H
#define ROCK_H
#include "Move.h"

class Rock : public Move {
    string getName() override;
    bool defeat(Move* opponent) override;
};
#endif