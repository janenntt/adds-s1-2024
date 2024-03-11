#include "Truckloads.h"
#include <iostream>
using namespace std;

int main() {
    int numCrates, loadSize;

    while (true) {
        cout << "Please enter the number of crates: ";
        cin >> numCrates;
        if (numCrates < 2 || numCrates > 10000){
            cout << "Invalid input!" << endl;
            continue;
        }
        cout << "Please enter the load size: ";
        cin >> loadSize;
        if (loadSize < 1 || loadSize >= numCrates){
            cout << "Invalid input!" << endl;
            continue;
        }
        break;
    }
    int result = Truckloads::numTrucks(numCrates, loadSize);
    cout << result << endl; // Assuming numTrucks is declared in Truckloads.h
    
    return 0;
}
