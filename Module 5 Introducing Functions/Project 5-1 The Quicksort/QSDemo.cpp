/*
    A version of the Quicksort for sorting characters

*/
#include <iostream>
#include <cstring>

using namespace std;

void quicksort(char *items, int len);

void qs(char *items, int left, int right);

int main() {
    char str[] = "asikfbguiewf";
    cout << "Original order: " << str <<endl;

    quicksort(str, strlen(str));

    cout << "Sorted order: " << str << endl;
    return 0;
}

// Set up a call to the actual sorting function.
void quicksort(char *items, int len) {
    qs(items, 0, len-1);
}

// A recursive version of Quicksort for sorting characters
void qs(char *items, int left, int right) {
    int i, j;
    char x, y;

    i = left;
    j = right;
    x = items[(left+right)/2]; // pivot element

    do{
        while ((items[i] < x) && (i < right)) i++; //finds elements larger than pivot from the left
        while ((x < items[j]) && (j > left)) j--; // find elements smaller than pivot from the right

        if (i<=j) { // if the two elements are out of position wrt pivot element, swap them
            y = items[i];
            items[i] = items[j];
            items[j] = y;
            i++;
            j--;
        }
    }while (i <=j);

    if (left < j) qs(items, left, j); // break array into subarray left half
    if (i < right) qs(items, i, right); // right half
}