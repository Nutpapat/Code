/*
Computer Programming - Lab Week 05
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>

int main() {
    /* Main function */
    int num;
    scanf("%i", &num);

    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num; j++) {
            if (i == j || i+j == num-1) {
                putchar('-');
                continue;
            }
            putchar('#');
        }
        putchar('\n');
    }

    return 0;
}
