#ifndef CREATEMOVE_H
#define CREATEMOVE_H
#include "Move.h"
#include "Player.h"
using std::string;

class CreateMove : public Move {
    public:
        Move* createMove(string move_name);
};
#endif