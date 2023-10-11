/*
    Define an exception for the generic Queue class shown in Project 1201. Have Queue throw this exception when an overflow or underflow
    occurs. Demonstrate its use.
*/
/*
    Convert the queue class created in Project 8-2 into a generic class that can operate on any type of data.
*/
#include <iostream>
#include <cstring>
using namespace std;

class QExcpt {
public:
    char msg[80];
};

const int maxQsize = 100;

template <class QType> class Queue {
    // defaults to private access
    QType q[maxQsize]; // this array holds the queue
    int size; // maximum number of elements the queue can store
    int putloc, getloc; // the put and get indices
    QExcpt Qerr;

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
            strcpy(Qerr.msg, "Queue is full.\n");
            throw Qerr;
        }
        putloc++;
        q[putloc] = data;
    }

    QType get() {
        if (getloc == putloc) {
            strcpy(Qerr.msg, "Queue is empty.\n");
            throw Qerr;
        }
        getloc++;
        return q[getloc];
    }
};

// Demonstrate the Queue class.
int main() {
    Queue<int> iQa(2), iQb(10);
    
    try {
        iQa.put(1);
        iQa.put(2);
        iQa.put(3); //overflow

        iQb.put(10);
        iQb.put(20);
        iQb.put(30);
        
        
        cout << "Contents of integer queue iQa: ";
        for(int i=0; i<3; i++){
            cout << iQa.get() << " ";
        }
        cout << endl;

        cout << "Contents of integer queue iQb: ";
        for(int i=0; i<3; i++){
            cout << iQb.get() << " ";
        }
        cout << endl;

        Queue <double> dQa(10), dQb(10); // create two double queues

        dQa.put(1.01);
        dQa.put(2.02);
        dQa.put(3.03);

        dQb.put(10.01);
        dQb.put(20.02);
        dQb.put(30.03);

        cout << "Contents of double queue dQa: ";
        for(int i=0; i<3; i++){
            cout << dQa.get() << " ";
        }
        cout << endl;

        cout << "Contents of double queue dQb: ";
        for(int i=0; i<3; i++){
            cout << dQb.get() << " ";
        }
        cout << endl;
    } catch(QExcpt exc) {
        cout << exc.msg;
    }

    return 0;
}