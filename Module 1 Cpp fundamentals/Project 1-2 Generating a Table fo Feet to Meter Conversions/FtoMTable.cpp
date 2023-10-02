/*
    Project 1-2

    This program displays a conversion table of feet to metres.
    Original: After every 10 feet, a blank line is output.
    Changes: Prints a blank line every 25 lines. We change the conditions in the if statement

*/
#include <iostream>
using namespace std;

int main() {
    double f; // holds length in feet
    double m; // holds length in meters
    int counter = 0; // line counter

    for (f=1.0; f <=100.0;f++) {
        m = f/3.28; // convert to meters
        cout << f << " feet is " << m << " meters.\n";
        counter++;

        if (counter == 25) {
            cout << "\n"; // outputs blank line
            counter = 0; // reset line counter
        }
    }
}