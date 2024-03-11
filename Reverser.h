#ifndef REVERSER_H
#define REVERSER_H
#include <iostream>
using std::string;

class Reverser {
    public:
        int reverseDigit(int value); // takes in a non-negative int value and reverses the digits using recursion then returned the "reversed" int
        string reverseString(string characters); // takes in a std::string and returns the reversed string
};
#endif