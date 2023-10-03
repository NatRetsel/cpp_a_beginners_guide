/*
    Create a function called hypot() that computes length of hypothenuse of a right trianlge given lengths of two
    opposing sides. Demonstrate its use in a program. For this problem, you will need to use the sqrt() standard library function, which returns the square root of its argument.

*/
#include <iostream>
#include <cmath>
using namespace std;

double hypot(int length1, int length2);

int main() {
    int l1;
    int l2;

    cout << "Input length of side 1:" <<endl;
    cin >> l1;

    cout << "Input length of side 2:" <<endl;
    cin >> l2;

    cout << "The length of hypothenuse: " << hypot(l1,l2) << endl;
    
    return 0;
}

double hypot(int length1, int length2) {
    return sqrt(pow(length1,2) + pow(length2,2));
}
