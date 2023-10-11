/*
    Write a program that contains a function called cuonter(), which simply counts how many times it is called. Have it return the
    current count.
*/
#include <iostream>
using namespace std;

int function_count ();

int main() {

    int count_req;
    int res;
    cout << "Input count request: " << endl;
    cin >> count_req;

    for (int i=0; i<count_req; i++) {
        res = function_count();
    }

    cout << "No. of time function was called: " << res << endl;
    res = function_count();
    res = function_count();
    cout << "Let's add another 2 calls: " << res << endl;

    return 0;
}

int function_count () {
    static int count = 0;
    ++count;
    return count;
}