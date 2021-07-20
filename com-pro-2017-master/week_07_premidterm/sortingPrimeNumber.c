/*
Computer Programming - Pre-Midterm Week
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>
#include <math.h>

#define swap(a, b) {\
    a = a + b;\
    b = a - b;\
    a = a - b;\
}

int is_prime(int num);

int main() {
    /* Main function */
    int primes[100] = {0}, i = 0, num;

    // Input numbers, only saves prime numbers to the array
    while (1) {
        scanf("%i", &num);
        if (num == 0) {
            break;
        }
        if (is_prime(num)) {
            primes[i] = num;
            i++;
        }
    }

    // Sorting
    for (int i = 1; i < 100; i++) {
        for (int j = i; j > 0; j--) {
            if (primes[j] < primes[j-1]) {
                swap(primes[j-1], primes[j]);
            }
            else
                break;
        }
    }

    // Output
    for (int i = 0; i < 100; i++) {
        if (primes[i] != 0) {
            printf("%i\n", primes[i]);
        }
    }

    return 0;
}

int is_prime(int num) {
    /* Check if 'num' is a prime number */
    if (num < 2) {
        return 0;
    }
    else if (num == 2) {
        return 1;
    }
    for (int i = 2; i < sqrt(num)+1; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}
