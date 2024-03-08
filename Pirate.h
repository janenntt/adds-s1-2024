#ifndef PIRATE_H
#define PIRATE_H
#include "Move.h"

class Pirate : public Move {
    public:
    string getName() override;
    bool defeat(Move* opponent) override;
};
#endif