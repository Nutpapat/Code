/*
Computer Programming - Pre-Midterm Week
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>

int main() {
    /* Main function */
    int num, divisors = 0, sum = 0;
    scanf("%i", &num);

    for (int i = 24; i <= num; i++) {
        for (int j = 1; j <= i; j++)
            divisors += (i % j == 0);

        sum += i * (divisors == 8);
        divisors = 0;
    }

    printf("%i\n", sum);

    return 0;
}
