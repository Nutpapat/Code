/*
Computer Programming - Lab Week 02
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>

int main() {
    /* Main function */
    float num_f = 3.1415;
    int num_1 = 12345, num_2 = -6789, num_3 = 24500;

    printf("123456789012345678901234567890\n");
    printf("%i %i %i\n", num_1, num_2, num_3);
    printf("%3i %3i %3i\n", num_1, num_2, num_3);
    printf("%8i %8i %8i\n", num_1, num_2, num_3);
    printf("%08i %08i %08i\n", num_1, num_2, num_3);
    printf("%-8i %-8i %-8i\n", num_1, num_2, num_3);
    printf("%10f\n", num_f);
    printf("%3f\n", num_f);
    printf("%-10f\n", num_f);
    printf("%-10.3f\n", num_f);
    printf("%10.2f\n", num_f);
    printf("%.1f\n", num_f);
    printf("%.3f\n", num_f);

    return 0;
}