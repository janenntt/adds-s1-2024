#include "Truckloads.h"
#include "Reverser.h"
#include <iostream>
using namespace std;

int main() {
    cout << Truckloads::numTrucks(10, 2) << endl; // Assuming numTrucks is declared in Truckloads.h
    cout << Reverser::reverseDigit(12345) << endl;
    cout << Reverser::reverseString("happy") << endl;
    return 0;
}
