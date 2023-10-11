/*
    Using the Sample class, create a queue of three Sample objects using the generic Queue shown in Project 12-1.
*/
#include <iostream>
using namespace std;

class Sample {
    int id;
public:
    Sample() {id = 0;}
    Sample(int x) { id = x;}
    void show() {cout << id << endl;}
};

const int maxQsize = 100;

template <class QType> class Queue {
    // defaults to private access
    QType q[maxQsize]; // this array holds the queue
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
    void put(QType data) {
        if (putloc == size) {
            cout << " -- Queue is full.\n";
            return;
        }
        putloc++;
        q[putloc] = data;
    }

    QType get() {
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
    Queue<Sample> iQa(3);
    Sample zero;
    Sample one (1);
    Sample two (2);
    iQa.put(zero);
    iQa.put(one);
    iQa.put(two);

    
    cout << "Contents of integer queue iQa: ";
    for(int i=0; i<3; i++){
        iQa.get().show();
        cout << " ";
    }
    cout << endl;

    return 0;
}