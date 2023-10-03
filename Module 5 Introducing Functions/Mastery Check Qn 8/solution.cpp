/*
    This program requires password on the command line and reports whether password was entered correctly or not.
    We will check it against a dummy password "password1"
*/
#include <iostream>
#include <cstring>
using namespace std;

void check_password(const char *pw);

int main(int argc, char *argv[]) {
    if (argc < 2) {
        cout << "Please enter a valid password" << endl;
    }else {
        check_password(argv[1]);
    }
    return 0;
}

void check_password(const char *pw) {
    if (!strcmp("password1", pw)) {
        cout << "Access permitted" <<endl;
    }else{
        cout << "Access denied" <<endl;
    }
    return;
}