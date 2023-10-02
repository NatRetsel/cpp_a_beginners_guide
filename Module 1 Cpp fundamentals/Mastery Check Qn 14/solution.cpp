/*
    This program convertes Jovian years (time it takes for Jupiter to orbit around the Sun) to Earth years (fractional allowed).
    Users specify the Jovian years.

    1 Year on Jupiter is about 12 Earth Years.

*/
#include <iostream>
using namespace std;

int main(){
    double jupiter;

    cout << "Enter Jovian years: ";
    cin >> jupiter;

    cout << "Equivalent years on Earth: "<< jupiter * 12 <<endl; 

    return 0;
}