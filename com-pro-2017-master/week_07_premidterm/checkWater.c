/*
Computer Programming - Pre-Midterm Week
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>

int main() {
    /* Main function */
    int m, n, o;
    scanf("%i %i %i", &m, &n, &o);
    printf("%i.00\n", (m/5)*375 + (m%5)*80 + (n/5)*390 + (n%5)*90);

    return 0;
}
