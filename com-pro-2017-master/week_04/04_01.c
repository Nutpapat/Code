/*
Computer Programming - Lab Week 04
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>

int main() {
    /* Main function */
    int a, b;
    scanf("%i %i", &a, &b);
    (a == b) ? printf("%i + %i = %i\n", a, b, a+b) : printf("%i - %i = %i\n", a, b, a-b);

    return 0;
}
