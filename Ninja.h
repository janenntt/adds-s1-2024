#ifndef NINJA_H
#define NINJA_H
#include "Move.h"

class Ninja : public Move {
    public:
    string getName() override;
    bool defeat(Move* opponent) override;
};
#endif