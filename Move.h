#ifndef MOVE_H
#define MOVE_H
#include <iostream>
using std::string;

class Move{
    public:
        string move_name;
        virtual string getName() = 0; // returns the name of a Move instance

};
#endif