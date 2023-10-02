/*
    This program displays a menu containing the control statements and then waits for the user to choose 1.
    Once chosen, the syntax of the chosen statement is displayed. 
    
    In the first version of the program, help is available for only the if and switch statements.

*/

#include <iostream>
using namespace std;

int main(){
    char choice;

    cout<< "Help on: "<<endl << " 1. if" << endl << " 2. switch"<<endl << "Choose one: ";
    cin >> choice;

    switch(choice) { // expression has to be character or integer value.
        case '1':
            cout << "The if:"<<endl<<endl;
            cout << "if(condition) statement;"<<endl;
            cout << "else statement;"<<endl;
            break;
        case '2':
            cout << "The switch:"<<endl<<endl;
            cout << "switch(expression) {" <<endl;
            cout << "   case constant:"<<endl;
            cout << "      statement sequence"<<endl;
            cout << "      break" <<endl;
            cout << "   // ..." << endl;
            cout << "}"<<endl;
            break;
        default: // performed if no matches are found. It is optional. If not present, no action takes place if all matches fails.
            cout << "Selection not found" <<endl;
    }
    return 0;
}