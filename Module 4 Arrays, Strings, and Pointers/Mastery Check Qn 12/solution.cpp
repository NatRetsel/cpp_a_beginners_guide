/*
    This program counts the uppercase letters in a string and displays the result

    We will not use std::string
*/
#include <iostream>
#include <cctype>
using namespace std;

int main(){
    char str[80];
    char *p1 = nullptr;
    int result = 0;

    cout << "Input string:"<<endl;
    cin >> ws >> str;

    p1 = str;

    while (*p1) {
        if (isupper(*p1)) {
            ++result;
        }
        ++p1;
    }

    cout << "String has " << result << " uppercase characters." <<endl;

    return 0;
}