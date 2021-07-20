/*
Computer Programming - Pre-Midterm Week
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>
#include <math.h>

int find_digits(int num);

int main() {
    /* Main function */
    int end, num;
    scanf("%i %i", &end, &num);

    for (int i = num; i <= 10000; i += num) {
        if (i % (int)pow(10, find_digits(end)) == end) {
            printf("%i\n", i);
            return 0;
        }
    }

    printf("Too Large!!!\n");

    return 0;
}

int find_digits(int num) {
    /* Returns digits of input number */
    int digits = 0;
    if (num == 0)
        return 1;
    while (num != 0) {
        num /= 10;
        digits++;
    }
    return digits;
}
