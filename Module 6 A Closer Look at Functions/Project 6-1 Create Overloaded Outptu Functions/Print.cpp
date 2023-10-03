/*
    This project creates a collection of overloaded functions that output various data types to the screen.

    Two sets of functions called println() and print() will be created. The println() function displays its argument folowed
    by a newline. The print() function will display its argument, but does not append a newline.

    print() and println() wil be overloaded for data of type bool, char, int, long, char *, and double.

*/
#include <iostream>
using namespace std;

// These output a newline
void println(bool b);
void println(int i);
void println(long i);
void println(char ch);
void println(char *str);
void println(double d);

// These do not output a newline
void print(bool b);
void print(int i);
void print(long i);
void print(char ch);
void print(char *str);
void print(double d);


int main() {
    println(true);
    println(10);
    println("This is a test");
    println('x');
    println(99L);
    println(123.23);

    print("Here are some values: ");
    print(false);
    print(' ');
    print(88);
    print(' ');
    print(100000L);
    print(' ');
    print(100.01);

    println(" Done!");
    
    return 0;
}

// Here are the println() functions
void println(bool b) {
    if (b) cout << "true" <<endl;
    else cout << "false" <<endl;
}
void println(int i) {
    cout << i << endl;
}
void println(long i) {
    cout << i << endl;
}
void println(char ch) {
    cout << ch << endl;
}
void println(char *str) {
    cout << str << endl;
}
void println(double d) {
    cout << d << endl;
}

// Here are the print() functions
void print(bool b) {
    if (b) cout << "true";
    else cout << "false";
}
void print(int i) {
    cout << i;
}
void print(long i) {
    cout << i;
}
void print(char ch) {
    cout << ch;
}
void print(char *str) {
    cout << str;
}
void print(double d) {
    cout << d;
}