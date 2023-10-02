/*
    This program displays a menu containing the control statements and then waits for the user to choose 1.
    Once chosen, the syntax of the chosen statement is displayed. 
    
    In the first version of the program, help is available for only the if and switch statements.
    In the second version of the program, help is avaiable for for, while and do-while loops on top of the first version.

*/

#include <iostream>
using namespace std;

int main(){
    char choice;

    do {
        cout<< "Help on: "<<endl << " 1. if" << endl << " 2. switch"<<endl << " 3. for"<<endl<< " 4. while"
        <<endl<<" 5. do-while"<<endl<< "Choose one: ";
        cin >> choice;
    }while (choice <'1' || choice > '5'); // awaits prompt if user enters outside of the choices
    

    switch(choice) { // expression has to be character or integer value.
        case '1':
            cout << "The if:"<<endl<<endl;
            cout << "if(condition) statement;"<<endl;
            cout << "else statement;"<<endl;
            break; // if no break statement, all the other cases gets execute or up till a break is encountered
        case '2':
            cout << "The switch:"<<endl<<endl;
            cout << "switch(expression) {" <<endl;
            cout << "   case constant:"<<endl;
            cout << "      statement sequence"<<endl;
            cout << "      break" <<endl;
            cout << "   // ..." << endl;
            cout << "}"<<endl;
            break;
        case '3':
            cout << "The for:"<<endl<<endl;
            cout << "for(init; condition; increment) statement"<<endl;
            break;
        case '4':
            cout << "The while:"<<endl<<endl;
            cout << "while(condition) statement;"<<endl;
            break;
        case '5':
            cout << "The do-while:"<<endl<<endl;
            cout << "do {"<<endl;
            cout << "   statement;" <<endl;
            cout << "} while (condition);" <<endl;
            break;
        default: // performed if no matches are found. It is optional. If not present, no action takes place if all matches fails.
            cout << "Selection not found" <<endl;
    }
    return 0;
}