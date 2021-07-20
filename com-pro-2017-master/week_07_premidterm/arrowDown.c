/*
Computer Programming - Pre-Midterm Week
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>

int main() {
    /* Main function */
    int num;
    scanf("%i", &num);

    // Arrow Tail
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < num-1; j++) {
            putchar(' ');
        }
        printf("*\n");
    }

    int space_in = num - 2, space_out = 0;
    // Arrow Head
    for (int i = 0; i < num; i++) {
        for (int j = 0; j < space_out; j++)
            putchar(' ');
        if (i < num - 1)
            putchar('*');
        for (int j = 0; j < space_in; j++)
            putchar(' ');
        if (i < num - 1)
            putchar('*');
        for (int j = 0; j < space_in; j++)
            putchar(' ');
        printf("*\n");
        space_in--;
        space_out++;
    }

    return 0;
}
