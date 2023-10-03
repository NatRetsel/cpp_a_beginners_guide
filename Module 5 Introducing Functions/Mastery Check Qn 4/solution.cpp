/*
    Create your own version of the standard library function strlen(). Call your version mystrlen(), and 
    demonstrate its use in a program.
*/
#include <iostream>
using namespace std;

int mystrlen(const char *str);

int main(){
    char mystr[80];

    cout << "Enter string: " <<endl;
    cin >> ws >> mystr;

    cout << "Length of string: " << mystrlen(mystr) << endl;

    return 0;
}

int mystrlen(const char *str) {
    /*
        function computes length of string through pointer arithmetic.
        int length increments everytime str is not pointing to a null char.
    */ 

    int length = 0;
    for (length = 0; str[length]; length++);

    return length;
}