/*
    Using the rrotate() and lrotate() functions from Project 7-1, it is posible to encode and decode a string. To code the string,
    left-rotate each letter by some amount that is specified by a key. To decode, right-rotate each character by the same amount. Use a
    key that consists of a string of characters. There are many ways to compute the number of rotations from the key. Be creative. The
    solution shown in the online answers is only one of the many.
*/
#include <iostream>
#include <cstring>
using namespace std;

unsigned char lrotate(unsigned char val, int n);
unsigned char rrotate(unsigned char val, int n);
void show_binary(unsigned int u);

int main() {
    
    char msg[] = "This is a test message for the encoding decoding question.";
    char key[] = "viva la vida";
    int klen = strlen(key);
    int rotnum;
    cout << "Original message: " << msg << endl;
    

    // Encode message by left-rotating
    for (int i=0; i < strlen(msg); i++) {
        rotnum = key[i%klen] % 8;
        msg[i] = lrotate(msg[i], rotnum);
    }

    cout << "Encoded message: " << msg <<endl;

    // Decode the message by right-rotating
    for (int i=0; i<strlen(msg); i++) {
        rotnum = key[i%klen] % 8;
        msg[i] = rrotate(msg[i], rotnum);
    }

    cout << "Decoded message: " << msg << "\n";

    return 0;
}

// Left-rotate a byte n places
unsigned char lrotate(unsigned char val, int n) {
    unsigned int t = val;

    for (int i=0; i<n; i++) {
        t = t << 1;

        /* If a bit shifts out, it will be in bit 8 of the integer t. If this is the case,
            put that bit on the right side.*/
        if (t & 256)
            t = t|1; // put a 1 on the right end
    }
    return t; // return the lower 8 bits.
}

unsigned char rrotate(unsigned char val, int n) {
    unsigned int t = val;

    t = t << 8; // First, move the value 8 bits higher.

    for (int i=0; i<n; i++) {
        t = t >> 1;

        /* If a bit shifts out, it will be in bit 7 of the integer t. If this is the case,
            put that bit on the left side.*/
        if (t & 128)
            t = t|32768; // put a 1 on the left end
    }

    /* Finally, move the result back to the lower 8 bits of t. */
    t = t >> 8;
    return t;
}

void show_binary(unsigned int u) {
    int t;

    for(t = 128; t>0; t = t/2)
        if (u & t) cout << "1 ";
        else cout << "0 ";
    
    cout << "\n";
}