/*
    This program computes the delay between the time a radio signal leaves Earth and the time it arrives on Mars.
    At its closest point to Earth, Mars is about 34,000,000 miles away.
*/
#include <iostream>
using namespace std;

int main() {
    double distance = 34000000.0; // distance between mars and earth in miles.
    double lightspeed = 186000.0; // speed of light in miles per second
    double delay = distance / lightspeed;
    double delay_in_min = delay / 60.0;

    cout <<"Time delay when talking to Mars: " <<delay << " seconds."<<endl;
    cout << "This is " << delay_in_min << " minutes.";

    return 0;
}