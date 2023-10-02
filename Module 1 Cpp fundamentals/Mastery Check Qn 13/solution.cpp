/*
    This program displays a table showing 0 to 100 Earth pounds and their equivalent moon weight.
    It will also display a new line every 25 pounds

*/
#include <iostream>
using namespace std;

int main() {
    double earth; // holds weight in earth
    double moon; // holds weight in moon

    int counter = 0; // new line counter

    for (int i=1; i <=100; i++){
        earth = i;
        moon = earth * 0.17;
        ++counter;
        
        cout << "Weight on Earth: "<<earth <<"pounds, weight on moon: "<< moon <<endl;
        
        if (counter == 25) {
            counter = 0;
            cout << endl;
        }
    }
    return 0;
}