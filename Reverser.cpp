#include "Reverser.h"
#include <math.h>
// int Reverser::reverseDigit(int value){
//     static int x = 0 ;
//     if (value < 0){
//         return -1;
//     } else if (value == 0){
//         return x;
//     } else {
//         x = x*10 + (value % 10);
//         return reverseDigit(value / 10);
//     }ß
// }
int Reverser::height = 0;
int Reverser::reverseDigit(int value){
    
     if (value < 0 ) {
         return -1;
     }
     if (value == 0) {
         return 0;
     }
     return reverseDigit(value/10)+(value%10)*pow(10,height++);
 }
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

