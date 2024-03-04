#ifndef PAPER_H
#define PAPER_H
#include "Move.h"

class Paper : public Move {
    string getName() override;
};
#endif
