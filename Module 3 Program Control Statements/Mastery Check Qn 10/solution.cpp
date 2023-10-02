/*

    This program uses a for loop to generate and display the progression 1,2,4,8,16,32 and so on by modifying the loop
    control variable.
    

*/
#include <iostream>
using namespace std;

int main(){
    for (int i=1; i<100; i*=2){
        cout<<i<<",";
    }
}