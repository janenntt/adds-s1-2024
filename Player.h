#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
using std::string;

class Player{
    public:
        string name;
        char move; // either 'R', 'P', or 'S'
        virtual char makeMove() = 0;
        string getName();
        Player(string name);
        ~Player();
};
#endif