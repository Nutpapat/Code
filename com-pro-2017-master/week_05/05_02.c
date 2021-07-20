/*
Computer Programming - Lab Week 05
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>

int main() {
    /* Main function */
    int num;
    scanf("%i", &num);
    int i = num;

    do {
        printf("%i ", i);
        i--;
    } while (i > 0);

    printf("\n");

    return 0;
}
