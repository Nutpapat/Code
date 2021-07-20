/*
Computer Programming - Pre-Midterm Week
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>
#include <math.h>

int is_prime(int num);

int main() {
    /* Main function */
    int a, b, primes = 0;
    scanf("%i %i", &a, &b);

    // Swap to make 'a' less than 'b'
    if (a > b) {
        a = a + b;
        b = a - b;
        a = a - b;
    }

    // Check for prime numbers
    for (int i = a + 1 + (a % 2); i < b; i += 2) {
        if (is_prime(i)) {
            printf("%i ", i);
            primes++;
        }
    }

    // Case: null
    if (primes == 0)
        printf("Null");

    printf("\n");

    return 0;
}

int is_prime(int num) {
    /* Check if 'num' is a prime number */
    if (num < 2)
        return 0;
    else if (num == 2)
        return 1;

    for (int i = 2; i < sqrt(num)+1; i++)
        if (num % i == 0)
            return 0;

    return 1;
}
