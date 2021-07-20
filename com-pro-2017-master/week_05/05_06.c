/*
Computer Programming - Lab Week 05
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>

int main() {
    /* Main function */
    int num;
    scanf("%i", &num);

    if (num > 0) {
        for (int i = num; i >= 0; i--) {
            printf("%i ", i);
        }
    }
    else {
        for (int i = num; i <= 0; i++) {
            printf("%i ", i);
        }
    }
    printf("\n");

    return 0;
}
