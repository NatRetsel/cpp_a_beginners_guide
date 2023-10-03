/*
    Create a void function called round() that rounds the value of its double argument to the nearest whoel value. Have round() use
    a reference parameter and return the rounded result in this parameter. You can assume that all values to be rounded are positive.
    Demonstrate round() in a program. To solve this problem, you will need to use the modf() standard library function.

    The modf() function decomposes num into its integer and fractional parts. It returns the fractional portion and places the integer
    part in the variable pointed to by i.

*/
#include <iostream>
#include <cmath>
using namespace std;

void round2(double &num);

int main(){
    double num1;

    cout << "Enter a floating / double point integer: " << endl;
    cin >> num1;

    round2(num1);

    cout << "Rounded number: " << num1 << endl;

    return 0;
}

void round2(double &num) {
    double frac;
    double val; // a reference to the integer part

    frac = modf(num, &val);

    // modify num
    if (frac < 0.5) num = val;
    else num = val + 1.0;
}