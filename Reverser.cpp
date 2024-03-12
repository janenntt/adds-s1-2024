#include "Reverser.h"
#include <math.h>
int Reverser::base = 0;
int Reverser::x = 0;
Reverser::Reverser(){}
int Reverser::reverseDigit(int value){
    base = 0;
    x = 0;
    if (value < 0){
        return -1;
    } else if (value >0){
        reverseDigit(value/10);
        int remainder = value%10;
        x += remainder*pow(10,base);
        base ++;
    }
    return x;
}
// int Reverser::height = 0;
// int Reverser::reverseDigit(int value){
    
//      if (value < 0 ) {
//          return -1;
//      }
//      if (value == 0) {
//          return 0;
//      }
//      return reverseDigit(value/10)+(value%10)*pow(10,height++);
//  }
string Reverser::reverseString(string characters){
    static int index = characters.length()-1;
    static string new_string = "";
    if (characters.empty()){
        return "ERROR";
    } else if (index < 0)
        return new_string;
    new_string += characters[index];
    index--;
    return reverseString(characters);
}


// static int index = characters.length()
// if index-1 == 0 return new_string
//reverseString(characters[index-1]+new_string)

