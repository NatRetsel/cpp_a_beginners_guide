/*
    This program displays a menu containing the control statements and then waits for the user to choose 1.
    Once chosen, the syntax of the chosen statement is displayed. 
    
    In the first version of the program, help is available for only the if and switch statements.
    In the second version of the program, help is avaiable for for, while and do-while loops on top of the first version.
    The final version adds the syntax for break, continue and goto. It also allows user to request syntax for more than one statement.
        - adding `q` as a valid choice

*/

#include <iostream>
using namespace std;

int main(){
    char choice;

    for (;;) {
        do {
            cout<< "Help on: "<<endl << " 1. if" << endl << " 2. switch"<<endl << " 3. for"<<endl<< " 4. while"
            <<endl<<" 5. do-while"<<endl<<" 6. break"<<endl<<" 7. continue"<<endl<<" 8. goto"<<endl<< "Choose one (q to quit): ";
            cin >> choice;
        }while (choice <'1' || choice > '8' && choice != 'q'); // awaits prompt if user enters outside of the choices
        
        if (choice == 'q') break;

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
            case '6':
                cout << "The break:"<<endl<<endl;
                cout << "break;"<<endl;
            case '7':
                cout << "The continue:"<<endl<<endl;
                cout << "continue;"<<endl;
            case '8':
                cout << "The goto:"<<endl<<endl;
                cout << "goto label;"<<endl;
            default: // performed if no matches are found. It is optional. If not present, no action takes place if all matches fails.
                cout << "Selection not found" <<endl;
        }
        cout << endl;
    }
    return 0;
}