/*
    This program is a modification to the reference version of the swap() so that in addition to exchanging the values
    of its arguments, it returns a reference to the smaller of its two arguments. Call this function min_swap().
*/
#include <iostream>
using namespace std;

int &min_swap(int &x, int &y);

int main() {
    int num1;
    int num2;
    int min_num;

    cout << "Enter integer 1: " <<endl;
    cin >> num1;

    cout << "Enter integer 2: " << endl;
    cin >> num2;

    cout << "Before swap: num1 = " << num1 << ", num2 = " << num2 << endl;
    min_num = min_swap(num1, num2);
    cout<< "The smaller integer: " << min_num <<endl;
    cout << "After swap: num1 = " << num1 << ", num2 = " << num2 << endl;

}

int &min_swap(int &x, int &y) {
    int temp;
    temp = x;
    x = y;
    y = temp;

    if (x > y) {
        return y;
    }
    return x;
}