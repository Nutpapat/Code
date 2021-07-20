/*
Computer Programming - Lab Week 05
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>

int main() {
    /* Main function */
    int num, i;
    scanf("%i", &num);

    if (num > 1) {
        i = 0;
        while (i < num) {
            printf("%i ", i+1);
            i++;
        }
    }
    else {
        i = num;
        while (i <= 1) {
            printf("%i ", i);
            i++;
        }
    }
    printf("\n");

    return 0;
}
