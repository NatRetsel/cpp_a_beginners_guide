/*
    Write a recursive function that prints the numbers 1 through 10. Demonstrate its use in a program.
*/
#include <iostream>
using namespace std;

void recursive_print(int num);

int main() {
    recursive_print(10);
}

void recursive_print(int num) {
    // terminating condition
    if (num == 1) {
        cout << num << ", ";
        return;
    }

    recursive_print(num-1);
    cout << num << ", ";
}