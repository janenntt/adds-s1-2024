#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
using std::string;

class Player{
    protected:
        string name;
    public:
        virtual char makeMove() = 0;
        string getName();
        Player(string playerName = "Player");
        ~Player();
};
#endif