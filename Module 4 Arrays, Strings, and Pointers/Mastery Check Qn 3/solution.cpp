/*
    This program searches an array of 10 integers for duplicate values and display each duplicate found.

    Since array size is 10, we can make do with the TC: O(n2), SC: O(1) nested for loop method

    For a better time complexity, we can:
        1.) sort the array then do a linear traversal TC: O(nlogn), SC: O(1)
        2.) Use a hashset and linear traversal TC: O(n), SC: O(1)
*/
#include <iostream>
using namespace std;

int main(){
    int nums[] = {1,1,2,3,4,2,5,4,7,7};

    for (int i=0; i<10; i++) {
        for (int j=i+1; j<10; j++){
            if (nums[i] == nums[j])
                cout << "Duplicate: " << nums[i] << endl;
        }
    }
    return 0;
}

