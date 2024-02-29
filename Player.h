#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
using std::string;

class Player{
    protected:
        string name;
        char move; // either 'R', 'P', or 'S'
    public:
        virtual char makeMove() = 0;
        string getName();
        Player(string _name);
        ~Player();
};
#endif