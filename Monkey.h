#ifndef MONKEY_H
#define MONKEY_H
#include "Move.h"

class Monkey : public Move {
    string getName() override;
};
#endif