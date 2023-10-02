/*
    Compute the regular payments for a loan

    Payment = (IntRate * (Principal / PayPerYear)) / (1 - ((IntRate / PayPerYear)+1) ^ (-PayPerYear * NumYears))
*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double Principal; // original principal
    double IntRate; //interest rate e.g. 0.75
    double PayPerYear; // number of payments per year
    double NumYears; // number of years
    double Payment; // the regular payment
    double numerator, denominator; // temp work variables
    double b, e; // base and exponent for call to pow()

    cout << "Enter principal: ";
    cin >> Principal;

    cout << "Enter interest rate (i.e., 0.075): ";
    cin >> IntRate;

    cout << "Enter number of payments per year: ";
    cin >> PayPerYear;

    cout << "Enter number of years: ";
    cin >> NumYears;

    numerator = IntRate * Principal / PayPerYear;
    e = -(PayPerYear * NumYears);
    b = (IntRate / PayPerYear) + 1;

    denominator = 1 - pow(b,e);
    Payment = numerator / denominator;

    cout << "Payment is "<< Payment;
}