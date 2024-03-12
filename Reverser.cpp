#include "Reverser.h"

int Reverser::reverseDigit(int value){
    static string x;
    if (value < 10){
        return value;
    }
    if (value == 0){
        return stoi(x);
    }
    else {
        x += to_string(value % 10);
        return reverseDigit(value / 10);
    }
        
}

string Reverser::reverseString(string characters){
    static int index = characters.length()-1;
    static string new_string = "";
    if (index < 0 || characters.empty())
        return new_string;
    new_string += characters[index];
    index--;
    return reverseString(characters);
}


// static int index = characters.length()
// if index-1 == 0 return new_string
//reverseString(characters[index-1]+new_string)

