/*
Computer Programming - Lab Week 02
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>

int main() {
    /* Main function */
    char c;
    for (int i = 0; i < 5; i++) {
        scanf(" %c", &c);
        if ((i % 2) == 0) {
            c += 1;
        }
        printf("%c\n", c);
    }

    return 0;
}