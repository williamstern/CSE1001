// William Stern
// Prime # generator
#include <stdio.h>
#include <stdlib.h>

void find_prime(int found, int primes[]);

int main(void) {
    printf("1\n2\n"); // Prints first 2 primes
    int starter[] = {2}; // uses 2 as the starter prime
    find_prime(1, starter);
}

void find_prime(int found, int primes[]) {
    int new[found+1];
    // Makes new array 1 larger and fill it with previous vaues
    for(int iter = 0; iter < found; iter++) {
        new[iter] = primes[iter];
    }

    int large = primes[found-1];
    int is_prime = 0;
    int number_count = 0;

    while (!is_prime) {
        for(int iter = 0; iter < found; iter++) {
            if (large % primes[iter] == 0) { // if found to be divisable by a previous number
                large += 1; // goes to next number
                number_count = 0; // resets count
                break;
            }
            else {
                number_count += 1;
            }
        }
        if (number_count >= found) { // If not divisable by any in the array
            is_prime = 1;
        }
    }

    printf("%d\n", large);
    new[found] = large; // Adds it to the array
    find_prime((found+1), new); // Recurse
}