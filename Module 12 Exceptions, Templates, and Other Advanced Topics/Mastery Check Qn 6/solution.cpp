/*
    Create generic versions of the quicksort() and qs() functions shown in Project 5-1. Demonstrate their use.
*/
#include <iostream>
#include <cstring>

using namespace std;

template <typename X> void quicksort(X *items,  int len);

template <typename X> void qs(X *items, int left, int right);

int main() {
    char str[] = "asikfbguiewf";
    cout << "Original order (array of char): " << str <<endl;

    quicksort(str, strlen(str));

    cout << "Sorted order (array of char): " << str << endl;

    int int_arr[] = {3,5,5,6,6,1,5,342,6,37,5,21,354,0};
    cout << "Original order (array of int): ";
    for (int elem: int_arr) {
        cout << elem << ", ";
    }
    cout << endl;

    quicksort(int_arr, sizeof(int_arr) / sizeof(int_arr[0]));
    cout << "Sorted order (array of int): ";
    for (int elem: int_arr) {
        cout << elem << ", ";
    }
    cout << endl;


    return 0;
}

// Set up a call to the actual sorting function.
template <typename X> void quicksort(X *items,  int len) {
    qs(items, 0, len-1);
}

// A recursive version of Quicksort for sorting characters
template <typename X> void qs(X *items, int left, int right) {
    int i, j;
    X x, y;

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