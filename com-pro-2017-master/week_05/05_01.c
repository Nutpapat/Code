/*
Computer Programming - Lab Week 05
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>

int main() {
    /* Main function */
    int num;
    scanf("%i", &num);
    int i = 0;

    while (i < num) {
        printf("%i ", i+1);
        i++;
    }
    printf("\n");

    return 0;
}
