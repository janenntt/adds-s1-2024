#include "Reverser.h"

int Reverser::reverseDigit(int value){
    static string x;
    if (value == 0){
        return stoi(x);
    }
    else {
        x += to_string(value % 10);
        return reverseDigit(value / 10);
    }
        
}

string Reverser::reverseString(std::string characters){
    static int index; // Declare index as static to preserve its value across function calls
    static std::string reversedString; // Declare reversedString to store the reversed string

    // Base case: when all characters have been processed, return the reversed string
    if (index == characters.length()){
        return reversedString;
    } else {
        // Append the current character to the beginning of the reversed string
        reversedString = characters[index] + reversedString;
        
        // Move to the next character in the input string
        index++;
        
        // Recursive call to process the next character
        return reverseString(characters);
    }
    
}

int main(){
    cout << Reverser::reverseDigit(12345) << endl;
    cout << Reverser::reverseString("Happy") << endl;
}