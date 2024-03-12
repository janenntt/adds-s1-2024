#ifndef REVERSER_H
#define REVERSER_H
#include <iostream>
#include <string>
using namespace std;

class Reverser {
    static string x;
    public:
        static int reverseDigit(int value); // takes in a non-negative int value and reverses the digits using recursion then returned the "reversed" int
        static string reverseString(string characters); // takes in a std::string and returns the reversed string
};
#endif