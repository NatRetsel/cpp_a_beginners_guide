/*
    This program reads characters from the keyboard and converts all lowercase letters to uppercase
    and all uppercase to lowercase and then displaying it. At the end of the program, display the total number of changes.
    Make no changes to other characters.

    It makes use of the the fact that ASCII lowercase letters are separated from the uppercase letters by 32.
    lowercase to uppercase -> subtract 32

*/
#include <iostream>
using namespace std;

int main(){
    char input;
    int num_changes = 0;

    do {
        cin >> input;
        if (input >= 'a' && input <= 'z') {
            input -= (char)32;
            ++num_changes;
            cout << input;
        }else if (input >= 'A' && input <= 'Z') {
            input += (char)32;
            ++num_changes;
            cout << input;
        }
    }while (input != '$');

    cout << endl<< "Total number of changes: " << num_changes <<endl;


    return 0;
}