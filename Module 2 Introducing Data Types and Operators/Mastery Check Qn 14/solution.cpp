/*
    This program find all of the prime numbers between 1 and 100
    It does so by checking if there exist a factor within half of itself. 
    Why half is sufficient? there are no numbers in the upper half that can divide the number completely.

    We can also use the square root property:

    If a number n is not a prime, it can be factored into two factors a and b:

    n = a * b
    Now a and b can't be both greater than the square root of n, since then the product a * b would be greater than sqrt(n) * sqrt(n) = n. 
    So in any factorization of n, at least one of the factors must be less than or equal to the square root of n, 
    and if we can't find any factors less than or equal to the square root, n must be a prime.
*/

#include <iostream>

bool is_prime(int x);

int main(){
    std::cout << "Prime numbers between 1 and 100: " << std::endl;
    for (int i=1; i<=100; i++){
        if (is_prime(i)){
            std::cout << i << ", ";
        }
    }
    std::cout << std::endl;

    return 0;
}

bool is_prime(int x){
    int y = x/2;
    for (int i=2; i <= y; i++){
        if (x % i == 0){
            return false;
        }
    }
    return true;
}

