/*=====================================================================
Author: Arjit Magar
Description: A program that takes highway number from user & indicates whether it is a primary or auxiliary highway.
	If auxiliary, it indicates what primary highway it serves and also indicate if the
	(primary) highway runs north/south or east/west.
Input: Highway Number from the user
Output: The type of highway whether it is primary or auxilary and also indicate if the
	(primary) highway runs north/south or east/west.
Compilation instructions:
Usage:
Modifications:
Date Comment:
---- ------------------------------------------------
======================================================================*/
#include <iostream>
using namespace std;

int main() {
    int highwayNumber;
    int attempts = 0;

    cout << "Please enter the number of a highway (range 1-999): ";

    while (true) {
        cin >> highwayNumber;

        if (highwayNumber > 0 && highwayNumber <= 999) {
            break; // if input is valid then ,it exits the loop
        } else {
            attempts++;
            if (attempts == 1) {
                cout << "Incorrect number. Please try again: ";
            } else {
                cout << "You are not paying attention. Please read the manual.\nProgram exiting." << endl;
                return 0;
            }
        }
    }

    if (highwayNumber >= 1 && highwayNumber <= 99) {
        // for the primary highway
        cout << "I-" << highwayNumber << " is primary, going ";
        if (highwayNumber % 2 == 0) {
            cout << "east/west." << endl;
        } else {
            cout << "north/south." << endl;
        }
    } else if (highwayNumber >= 100 && highwayNumber <= 999) {
        // for the auxiliary highway
        int primaryHighway = highwayNumber % 100;
        cout << "I-" << highwayNumber << " is auxiliary, serving I-" << primaryHighway << ", going ";
        if (primaryHighway % 2 == 0) {
            cout << "east/west." << endl;
        } else {
            cout << "north/south." << endl;
        }
    }

    return 0;
}

