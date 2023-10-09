/*
    Modify the Help class so that it stores an integer ID number that identifies each user of the class.
    Display the ID when a help object is destroyed. Return the ID when the function getID() is called.

*/

#include <iostream>
using namespace std;

// A class that encapsulates a help system
class Help {
    int id;
public:
    Help(int id){this->id = id;};
    ~Help(){cout << "The ID of the destroyed object: " << getID() << endl;}
    int getID();
    void helpon(char what);
    void showmenu();
    bool isvalid(char ch);
    
};

// return the ID of the object
int Help::getID(){
    return this->id;
}

// Display help information
void Help::helpon(char what){
    switch (what){
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

// Show the help menu
void Help::showmenu() {
    cout<< "Help on: "<<endl << " 1. if" << endl << " 2. switch"<<endl << " 3. for"<<endl<< " 4. while"
    <<endl<<" 5. do-while"<<endl<<" 6. break"<<endl<<" 7. continue"<<endl<<" 8. goto"<<endl<< "Choose one (q to quit): ";
}

// Return true if a selection is valid
bool Help::isvalid(char ch) {
    if (ch <'1' || ch > '8' && ch != 'q')
        return false;
    else
        return true;
}

int main(){
    
    char choice;
    Help hlpob(1); // create an instance of the Help class

    cout << "User ID is " << hlpob.getID() << ".\n";
    // Use the help object to display information.
    for (;;) {
        do {
            hlpob.showmenu();
            cin >> choice;
        } while (!hlpob.isvalid(choice));

        if (choice == 'q') break;
        cout << "\n";

        hlpob.helpon(choice);
    }
    return 0;
}