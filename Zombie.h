#ifndef ZOMBIE_H
#define ZOMBIE_H
#include "Move.h"

class Zombie : public Move {
    public:
    string getName() override;
    bool defeat(Move* opponent) override;
};
#endif