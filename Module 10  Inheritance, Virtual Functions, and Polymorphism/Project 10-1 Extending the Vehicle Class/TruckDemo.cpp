/*
    This project creates a subclass of Vehicle called Truck
*/
#include <iostream>
using namespace std;

class Vehicle {
    // These are private
    int passengers;
    int fuelcap;
    int mpg;
public:
    // constructor
    Vehicle(int p, int f, int m) {
        passengers = p;
        fuelcap = f;
        mpg = m;
    }

    // Compute and return the range
    int range() {return mpg* fuelcap;}

    // Accessor functions
    int get_passengers() {return passengers;}
    int get_fuelcap() {return fuelcap;}
    int get_mpg() {return mpg;}

};

// Use Vechile to create a Truck specialization
class Truck: public Vehicle {
    int cargocap; //cargo capacity in pounds
public:
    // constructor
    Truck (int p, int f, int m, int c) : Vehicle (p , f, m) {
        cargocap = c;
    }

    // Accessor function for cargocap.
    int get_cargocap () {return cargocap;}
};

int main() {

    // construct some trucks
    Truck semi (2,200,7,44000);
    Truck pickup(3, 28, 15, 2000);
    int dist = 252;

    cout << "Semi can carry " << semi.get_cargocap() << " pounds." <<endl;
    cout << "It has a range of " << semi.range() << " miles." << endl;
    cout << "To go " << dist << " miles semi needs " << dist / semi.get_mpg() << " gallons of fuel." << endl << endl;
    cout << "Pickup can carry " << pickup.get_cargocap() << " pounds." << endl;
    cout << "It has a range of " << pickup.range() << " miles" << endl;
    cout << "To go " << dist << " miles pickup needs " << dist/pickup.get_mpg() << " gallons of fuel." << endl;

    return 0;
}