/*
    Project 1-1
    This program converts feet to meters
*/
#include <iostream>
using namespace std;

int main(){
    double f; // holds length in feet.
    double m; // holds length in meters

    cout << "Enter the length in feet: ";
    cin >> f; // read the number in terms of feet

    m = f/3.28; //convert to meters
    cout << f << " feet is " << m << " meters.";

    return 0;
}