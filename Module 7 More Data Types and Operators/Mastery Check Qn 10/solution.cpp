/*
    On your own, expand show_binary() so that it shows all bits within an unsigned int rather than just the first eight.
*/
/*
    This project rotates binary digits left and right by 8 times and displays after every rotation
*/
#include <iostream>
using namespace std;

unsigned char lrotate(unsigned char val, int n);
unsigned char rrotate(unsigned char val, int n);
void show_binary(unsigned int u);

int main() {
    char ch = 'T';

    cout << "Original value in binary: " <<endl;
    show_binary(ch);

    cout << "Rotating right 8 times: " <<endl;
    for (int i=0; i < 8; i++) {
        ch = rrotate(ch, 1);
        show_binary(ch);
    }

    cout << "Rotating left 8 times: " << endl;
    for (int i=0; i<8 ;i++) {
        ch = lrotate(ch,1);
        show_binary(ch);
    }

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

    for(t = 65534; t>0; t = t/2)
        if (u & t) cout << "1 ";
        else cout << "0 ";
    
    cout << "\n";
}