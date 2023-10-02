/*
    This program reads characters from a keyboard until a $ is typed.
    It counts the number of periods and reports the total at the end.

*/
#include <iostream>
using namespace std;

int main(){
    int period_count = 0;
    char input;

    do {
        cin >> input;
        if (input == '.') {
            ++period_count;
        }
    }while (input != '$');

    cout << "Total number of periods: " << period_count <<endl;

    return 0;
}