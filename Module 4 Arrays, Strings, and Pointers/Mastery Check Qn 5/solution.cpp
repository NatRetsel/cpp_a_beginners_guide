/*
    This program prompts user for two strings and then compares strings for equality,
    ignoring case differences. 

    We will not use std::string
*/
#include <iostream>
#include <cctype>
using namespace std;

int main(){
    char str1[80];
    char str2[80];
    char *p1, *p2;

    cout<<"Input string 1: "<<endl;
    cin >> ws >> str1;

    cout <<"Input string 2:"<<endl;
    cin >> ws >> str2;

    p1 = str1;
    p2 = str2;
    
    while (p1 && p2) {
        if (tolower(*p1) != tolower(*p2)){
            cout << "Both strings are not equal" <<endl;
            break;
        }
        ++p1;
        ++p2;
    }
    if (!(p1 || p2)) {
        cout << "Both strings are equal" <<endl;
    }

    return 0;
}
