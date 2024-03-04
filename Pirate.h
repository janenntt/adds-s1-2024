#ifndef PIRATE_H
#define PIRATE_H
#include "Move.h"

class Pirate : public Move {
    string getName() override;
};
#endif