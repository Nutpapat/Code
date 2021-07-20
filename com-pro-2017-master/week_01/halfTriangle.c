/*
Computer Programming - Lab Week 01
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>

int main() {
    /* Main function */
    int num;
    scanf("%i", &num);

    for (int i = 0; i < num; i++) {
        for (int j = 0; j < i+1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
