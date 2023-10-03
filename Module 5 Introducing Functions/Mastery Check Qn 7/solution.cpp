/*
    Write a function called byThrees() that returns a series of numbers, with each value 3 greater
    than the preceding one. Have the series start at 0. Thus, the first five numbers returned by byThrees()
    are 0,3,6,9,12. 

    Create another function called reset() that causes byThrees() to start the series over again from 0. 

    Demonstrate your functions in a program. Hint: use a global variable.

*/
#include <iostream>
using namespace std;

int counter = 0;

int byThrees();

void reset();

int main() {

    for (int i = 0; i < 10; i++){
        cout << byThrees() << " ";
    }
    cout << endl;

    reset();
    for (int i = 0; i < 10; i++){
        cout << byThrees() << " ";
    }
    cout << endl;


    return 0;
}

int byThrees(){
    int temp = counter;
    counter += 3;
    return temp;
}

void reset() {
    counter = 0;
}
