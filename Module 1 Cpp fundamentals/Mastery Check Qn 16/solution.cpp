/*
    This program averages the absolute value of five values entered by the user and displays it.

*/
#include <iostream>
using namespace std;

int main() {
    double running_sum = 0;
    int input;
    
    cout << "Enter five values: ";
    for (int i = 0; i < 5; i++) {
        cin >>input;
        running_sum += abs(input);
    }
    cout << "Average of the absolute of 5 values: " << running_sum / 5 <<endl;
    return 0;
}