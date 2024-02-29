#include "Player.h"
Player::Player(string playerName): name(playerName){}

string Player::getName(){
    return name;
}

Player::~Player(){}

