/*
    This program modifies the collection of print() and println() functions defined previously by adding a second parameter
    that specifies an indentation level. It will indent the specified amount of spaces before outputing the text. Give it a 
    default value of 0.
*/
#include <iostream>
using namespace std;

// These output a newline
void println(bool b, int indent = 0);
void println(int i, int indent = 0);
void println(long i, int indent = 0);
void println(char ch, int indent = 0);
void println(char *str, int indent = 0);
void println(double d, int indent = 0);

// These do not output a newline
void print(bool b, int indent = 0);
void print(int i, int indent = 0);
void print(long i, int indent = 0);
void print(char ch, int indent = 0);
void print(char *str, int indent = 0);
void print(double d, int indent = 0);


int main() {
    println(true, 10);
    println(10);
    println("This is a test", 6);
    println('x', 3);
    println(99L);
    println(123.23);

    print("Here are some values: ");
    print(false, 5);
    print(' ');
    print(88, 7);
    print(' ');
    print(100000L);
    print(' ');
    print(100.01);

    println(" Done!");
    
    return 0;
}

// Here are the println() functions
void println(bool b, int indent) {
    for (int i = 0 ; i<=indent; i++){
        cout << " ";
    }
    if (b) cout << "true" <<endl;
    else cout << "false" <<endl;
}
void println(int i, int indent) {
    for (int i = 0 ; i<=indent; i++){
        cout << " ";
    }
    cout << i << endl;
}
void println(long i, int indent) {
    for (int i = 0 ; i<=indent; i++){
        cout << " ";
    }
    cout << i << endl;
}
void println(char ch, int indent) {
    for (int i = 0 ; i<=indent; i++){
        cout << " ";
    }
    cout << ch << endl;
}
void println(char *str, int indent) {
    for (int i = 0 ; i<=indent; i++){
        cout << " ";
    }
    cout << str << endl;
}
void println(double d, int indent) {
    for (int i = 0 ; i<=indent; i++){
        cout << " ";
    }
    cout << d << endl;
}

// Here are the print() functions
void print(bool b, int indent) {
    for (int i = 0 ; i<=indent; i++){
        cout << " ";
    }
    if (b) cout << "true";
    else cout << "false";
}
void print(int i, int indent) {
    for (int i = 0 ; i<=indent; i++){
        cout << " ";
    }
    cout << i;
}
void print(long i, int indent) {
    for (int i = 0 ; i<=indent; i++){
        cout << " ";
    }
    cout << i;
}
void print(char ch, int indent) {
    for (int i = 0 ; i<=indent; i++){
        cout << " ";
    }
    cout << ch;
}
void print(char *str, int indent) {
    for (int i = 0 ; i<=indent; i++){
        cout << " ";
    }
    cout << str;
}
void print(double d, int indent) {
    for (int i = 0 ; i<=indent; i++){
        cout << " ";
    }
    cout << d;
}