/*
Computer Programming - Lab Week 05
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>

int main() {
    /* Main function */
    int a, b;
    scanf("%i %i", &a, &b);

    if (a > b) {
        for (int i = a; i >= b; i--) {
            printf("%i ", i);
        }
    }
    else {
        for (int i = a; i <= b; i++) {
            printf("%i ", i);
        }
    }

    printf("\n");

    return 0;
}
