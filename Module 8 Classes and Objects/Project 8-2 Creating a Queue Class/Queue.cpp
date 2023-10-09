/*
    Create a queue that stores characters
    A queue is a data structure where elements can be accessed following the LIFO order

    We will use two indices to access elements in the queue
    - put index -> determines where the next element of data will be stored.
    - get index -> indicates at what location the next element of data will be obtained.

    The get operation is consumptive and it is not possible to retrieve the same element twice.
*/
#include <iostream>
using namespace std;

const int maxQsize = 100;

class Queue {
    // defaults to private access
    char q[maxQsize]; // this array holds the queue
    int size; // maximum number of elements the queue can store
    int putloc, getloc; // the put and get indices

public:
    // Construct a queue of a specific length.
    Queue(int len) {
        //Queue must be less than max and positive
        if (len > maxQsize) len = maxQsize;
        else if (len<=0) len=1;

        size = len;
        putloc = getloc = 0;
    }

    // put a character into queue.
    void put(char ch) {
        if (putloc == size) {
            cout << " -- Queue is full.\n";
            return;
        }
        putloc++;
        q[putloc] = ch;
    }

    char get() {
        if (getloc == putloc) {
            cout << " --Queue is empty.\n";
            return 0;
        }
        getloc++;
        return q[getloc];
    }
};

// Demonstrate the Queue class.
int main() {
    Queue bigQ(100);

    Queue smallQ(4);
    char ch;
    int i;

    cout << "Using bigQ to store the alphabet.\n";
    // put some numbers into bigQ
    for(i=0; i<26; i++)
        bigQ.put('A'+i);
    
    // retrieve and display elements from bigQ
    cout << "Contents of bigQ: ";
    for(i=0; i<26; i++){
        ch = bigQ.get();
        if(ch != 0) cout << ch;
    }

    cout << "\n\n";
    cout << "Using smallQ to generate errors.\n";

    // Now, use smallQ to generate some errors
    for(i=0; i<5; i++) {
        cout << "Attempting to store " << (char) ('Z' - i);
        smallQ.put('Z'-i);
        cout << "\n";
    }
    cout << "\n";

    // more errors on smallQ
    cout << "Contents of smallQ: ";
    for(i=0; i<5;i++){
        ch = smallQ.get();
        if (ch != 0) cout << ch;
    }
    cout << "\n";
}